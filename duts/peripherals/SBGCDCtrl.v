// Generator : SpinalHDL v1.9.3    git head : 029104c77a54c53f1edda327a3bea333f7d65fd9
// Component : SBGCDCtrl
// Git hash  : fc4247793ba87b2f5c3417fc493ac25f4f7d0c29

`timescale 1ns/1ps

module SBGCDCtrl (
  input      [31:0]   io_sb_SBaddress,
  input               io_sb_SBvalid,
  input      [31:0]   io_sb_SBwdata,
  input               io_sb_SBwrite,
  input      [3:0]    io_sb_SBsize,
  output              io_sb_SBready,
  output     [31:0]   io_sb_SBrdata,
  input               io_sel,
  output              io_irq,
  input               clk,
  input               reset
);

  wire                gcdCtrl_1_io_ready;
  wire       [31:0]   gcdCtrl_1_io_res;
  wire                busCtrl_io_ready;
  wire       [0:0]    _zz_sbDataOutputReg;
  reg        [31:0]   regA;
  reg        [31:0]   regB;
  reg        [31:0]   regResBuf;
  reg                 regValid;
  reg                 regReadyBuf;
  reg        [31:0]   sbDataOutputReg;
  wire                mmioRegLogic_read;
  wire                mmioRegLogic_write;
  wire       [7:0]    mmioRegLogic_addr;
  wire                when_SBGCDCtrl_l31;
  wire                when_SBGCDCtrl_l34;
  wire                when_SBGCDCtrl_l37;
  wire                when_SBGCDCtrl_l39;
  wire                when_SBGCDCtrl_l41;
  wire                when_SBGCDCtrl_l46;
  wire                when_SBGCDCtrl_l48;
  wire                when_SBGCDCtrl_l50;
  wire                when_SBGCDCtrl_l54;

  assign _zz_sbDataOutputReg = regReadyBuf;
  GCDTop gcdCtrl_1 (
    .io_valid (regValid              ), //i
    .io_ready (gcdCtrl_1_io_ready    ), //o
    .io_a     (regA[31:0]            ), //i
    .io_b     (regB[31:0]            ), //i
    .io_res   (gcdCtrl_1_io_res[31:0]), //o
    .clk      (clk                   ), //i
    .reset    (reset                 )  //i
  );
  SimpleBusSlaveController busCtrl (
    .io_valid  (io_sb_SBvalid   ), //i
    .io_ready  (busCtrl_io_ready), //o
    .io_select (io_sel          ), //i
    .clk       (clk             ), //i
    .reset     (reset           )  //i
  );
  assign mmioRegLogic_read = ((io_sb_SBvalid && io_sel) && (! io_sb_SBwrite));
  assign mmioRegLogic_write = ((io_sb_SBvalid && io_sel) && io_sb_SBwrite);
  assign mmioRegLogic_addr = io_sb_SBaddress[7 : 0];
  assign when_SBGCDCtrl_l31 = (mmioRegLogic_addr == 8'h00);
  assign when_SBGCDCtrl_l34 = (mmioRegLogic_addr == 8'h04);
  assign when_SBGCDCtrl_l37 = (mmioRegLogic_addr == 8'h08);
  assign when_SBGCDCtrl_l39 = (mmioRegLogic_addr == 8'h0c);
  assign when_SBGCDCtrl_l41 = (mmioRegLogic_addr == 8'h10);
  assign when_SBGCDCtrl_l46 = (mmioRegLogic_addr == 8'h00);
  assign when_SBGCDCtrl_l48 = (mmioRegLogic_addr == 8'h04);
  assign when_SBGCDCtrl_l50 = (mmioRegLogic_addr == 8'h08);
  assign when_SBGCDCtrl_l54 = (mmioRegLogic_addr == 8'h0c);
  assign io_sb_SBready = busCtrl_io_ready;
  assign io_sb_SBrdata = sbDataOutputReg;
  assign io_irq = regReadyBuf;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      regA <= 32'h00000000;
      regB <= 32'h00000000;
      regResBuf <= 32'h00000000;
      regValid <= 1'b0;
      regReadyBuf <= 1'b0;
      sbDataOutputReg <= 32'h00000000;
    end else begin
      if(gcdCtrl_1_io_ready) begin
        regResBuf <= gcdCtrl_1_io_res;
      end
      regValid <= 1'b0;
      if(gcdCtrl_1_io_ready) begin
        regReadyBuf <= gcdCtrl_1_io_ready;
      end
      sbDataOutputReg <= 32'h00000000;
      if(mmioRegLogic_write) begin
        if(when_SBGCDCtrl_l31) begin
          regA <= io_sb_SBwdata;
          regResBuf <= 32'h00000000;
        end else begin
          if(when_SBGCDCtrl_l34) begin
            regB <= io_sb_SBwdata;
            regResBuf <= 32'h00000000;
          end else begin
            if(!when_SBGCDCtrl_l37) begin
              if(!when_SBGCDCtrl_l39) begin
                if(when_SBGCDCtrl_l41) begin
                  regValid <= (io_sb_SBwdata == 32'h00000001);
                  regResBuf <= 32'h00000000;
                end
              end
            end
          end
        end
      end else begin
        if(mmioRegLogic_read) begin
          if(when_SBGCDCtrl_l46) begin
            sbDataOutputReg <= regA;
          end else begin
            if(when_SBGCDCtrl_l48) begin
              sbDataOutputReg <= regB;
            end else begin
              if(when_SBGCDCtrl_l50) begin
                sbDataOutputReg <= regResBuf;
                regReadyBuf <= 1'b0;
              end else begin
                if(when_SBGCDCtrl_l54) begin
                  sbDataOutputReg <= {31'd0, _zz_sbDataOutputReg};
                end
              end
            end
          end
        end
      end
    end
  end


endmodule

module SimpleBusSlaveController (
  input               io_valid,
  output              io_ready,
  input               io_select,
  input               clk,
  input               reset
);
  localparam busStateMachine_enumDef_BOOT = 2'd0;
  localparam busStateMachine_enumDef_idle = 2'd1;
  localparam busStateMachine_enumDef_handleRequest = 2'd2;

  wire                busStateMachine_wantExit;
  reg                 busStateMachine_wantStart;
  wire                busStateMachine_wantKill;
  reg                 busStateMachine_readyFlag;
  reg        [1:0]    busStateMachine_stateReg;
  reg        [1:0]    busStateMachine_stateNext;
  reg                 io_valid_regNext;
  wire                when_SimpleBusSlaveController_l22;
  `ifndef SYNTHESIS
  reg [103:0] busStateMachine_stateReg_string;
  reg [103:0] busStateMachine_stateNext_string;
  `endif


  `ifndef SYNTHESIS
  always @(*) begin
    case(busStateMachine_stateReg)
      busStateMachine_enumDef_BOOT : busStateMachine_stateReg_string = "BOOT         ";
      busStateMachine_enumDef_idle : busStateMachine_stateReg_string = "idle         ";
      busStateMachine_enumDef_handleRequest : busStateMachine_stateReg_string = "handleRequest";
      default : busStateMachine_stateReg_string = "?????????????";
    endcase
  end
  always @(*) begin
    case(busStateMachine_stateNext)
      busStateMachine_enumDef_BOOT : busStateMachine_stateNext_string = "BOOT         ";
      busStateMachine_enumDef_idle : busStateMachine_stateNext_string = "idle         ";
      busStateMachine_enumDef_handleRequest : busStateMachine_stateNext_string = "handleRequest";
      default : busStateMachine_stateNext_string = "?????????????";
    endcase
  end
  `endif

  assign busStateMachine_wantExit = 1'b0;
  always @(*) begin
    busStateMachine_wantStart = 1'b0;
    case(busStateMachine_stateReg)
      busStateMachine_enumDef_idle : begin
      end
      busStateMachine_enumDef_handleRequest : begin
      end
      default : begin
        busStateMachine_wantStart = 1'b1;
      end
    endcase
  end

  assign busStateMachine_wantKill = 1'b0;
  assign io_ready = busStateMachine_readyFlag;
  always @(*) begin
    busStateMachine_stateNext = busStateMachine_stateReg;
    case(busStateMachine_stateReg)
      busStateMachine_enumDef_idle : begin
        if(when_SimpleBusSlaveController_l22) begin
          busStateMachine_stateNext = busStateMachine_enumDef_handleRequest;
        end
      end
      busStateMachine_enumDef_handleRequest : begin
        busStateMachine_stateNext = busStateMachine_enumDef_idle;
      end
      default : begin
      end
    endcase
    if(busStateMachine_wantStart) begin
      busStateMachine_stateNext = busStateMachine_enumDef_idle;
    end
    if(busStateMachine_wantKill) begin
      busStateMachine_stateNext = busStateMachine_enumDef_BOOT;
    end
  end

  assign when_SimpleBusSlaveController_l22 = (io_select && (io_valid && (! io_valid_regNext)));
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      busStateMachine_readyFlag <= 1'b0;
      busStateMachine_stateReg <= busStateMachine_enumDef_BOOT;
    end else begin
      busStateMachine_stateReg <= busStateMachine_stateNext;
      case(busStateMachine_stateReg)
        busStateMachine_enumDef_idle : begin
          if(when_SimpleBusSlaveController_l22) begin
            busStateMachine_readyFlag <= 1'b1;
          end
        end
        busStateMachine_enumDef_handleRequest : begin
          busStateMachine_readyFlag <= 1'b0;
        end
        default : begin
        end
      endcase
    end
  end

  always @(posedge clk) begin
    io_valid_regNext <= io_valid;
  end


endmodule

module GCDTop (
  input               io_valid,
  output              io_ready,
  input      [31:0]   io_a,
  input      [31:0]   io_b,
  output     [31:0]   io_res,
  input               clk,
  input               reset
);

  wire                gcdCtr_io_ready;
  wire                gcdCtr_io_dataCtrl_loadA;
  wire                gcdCtr_io_dataCtrl_loadB;
  wire                gcdCtr_io_dataCtrl_selL;
  wire                gcdCtr_io_dataCtrl_selR;
  wire                gcdCtr_io_dataCtrl_init;
  wire       [31:0]   gcdDat_io_res;
  wire                gcdDat_io_dataCtrl_cmpAgtB;
  wire                gcdDat_io_dataCtrl_cmpAltB;

  GCDCtrl gcdCtr (
    .io_valid            (io_valid                  ), //i
    .io_ready            (gcdCtr_io_ready           ), //o
    .io_dataCtrl_cmpAgtB (gcdDat_io_dataCtrl_cmpAgtB), //i
    .io_dataCtrl_cmpAltB (gcdDat_io_dataCtrl_cmpAltB), //i
    .io_dataCtrl_loadA   (gcdCtr_io_dataCtrl_loadA  ), //o
    .io_dataCtrl_loadB   (gcdCtr_io_dataCtrl_loadB  ), //o
    .io_dataCtrl_init    (gcdCtr_io_dataCtrl_init   ), //o
    .io_dataCtrl_selL    (gcdCtr_io_dataCtrl_selL   ), //o
    .io_dataCtrl_selR    (gcdCtr_io_dataCtrl_selR   ), //o
    .clk                 (clk                       ), //i
    .reset               (reset                     )  //i
  );
  GCDData gcdDat (
    .io_a                (io_a[31:0]                ), //i
    .io_b                (io_b[31:0]                ), //i
    .io_res              (gcdDat_io_res[31:0]       ), //o
    .io_dataCtrl_cmpAgtB (gcdDat_io_dataCtrl_cmpAgtB), //o
    .io_dataCtrl_cmpAltB (gcdDat_io_dataCtrl_cmpAltB), //o
    .io_dataCtrl_loadA   (gcdCtr_io_dataCtrl_loadA  ), //i
    .io_dataCtrl_loadB   (gcdCtr_io_dataCtrl_loadB  ), //i
    .io_dataCtrl_init    (gcdCtr_io_dataCtrl_init   ), //i
    .io_dataCtrl_selL    (gcdCtr_io_dataCtrl_selL   ), //i
    .io_dataCtrl_selR    (gcdCtr_io_dataCtrl_selR   ), //i
    .clk                 (clk                       ), //i
    .reset               (reset                     )  //i
  );
  assign io_ready = gcdCtr_io_ready;
  assign io_res = gcdDat_io_res;

endmodule

module GCDData (
  input      [31:0]   io_a,
  input      [31:0]   io_b,
  output     [31:0]   io_res,
  output              io_dataCtrl_cmpAgtB,
  output              io_dataCtrl_cmpAltB,
  input               io_dataCtrl_loadA,
  input               io_dataCtrl_loadB,
  input               io_dataCtrl_init,
  input               io_dataCtrl_selL,
  input               io_dataCtrl_selR,
  input               clk,
  input               reset
);

  reg        [31:0]   regA;
  reg        [31:0]   regB;
  wire                xGTy;
  wire                xLTy;
  wire       [31:0]   chX;
  wire       [31:0]   chY;
  wire       [31:0]   subXY;

  assign xGTy = (regB < regA);
  assign xLTy = (regA < regB);
  assign chX = (io_dataCtrl_selL ? regB : regA);
  assign chY = (io_dataCtrl_selR ? regB : regA);
  assign subXY = (chX - chY);
  assign io_dataCtrl_cmpAgtB = xGTy;
  assign io_dataCtrl_cmpAltB = xLTy;
  assign io_res = regA;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      regA <= 32'h00000000;
      regB <= 32'h00000000;
    end else begin
      if(io_dataCtrl_init) begin
        regA <= io_a;
        regB <= io_b;
      end
      if(io_dataCtrl_loadA) begin
        regA <= subXY;
      end
      if(io_dataCtrl_loadB) begin
        regB <= subXY;
      end
    end
  end


endmodule

module GCDCtrl (
  input               io_valid,
  output reg          io_ready,
  input               io_dataCtrl_cmpAgtB,
  input               io_dataCtrl_cmpAltB,
  output reg          io_dataCtrl_loadA,
  output reg          io_dataCtrl_loadB,
  output reg          io_dataCtrl_init,
  output reg          io_dataCtrl_selL,
  output reg          io_dataCtrl_selR,
  input               clk,
  input               reset
);
  localparam fsm_enumDef_BOOT = 3'd0;
  localparam fsm_enumDef_idle = 3'd1;
  localparam fsm_enumDef_calculate = 3'd2;
  localparam fsm_enumDef_calcA = 3'd3;
  localparam fsm_enumDef_calcB = 3'd4;
  localparam fsm_enumDef_calcDone = 3'd5;

  wire                fsm_wantExit;
  reg                 fsm_wantStart;
  wire                fsm_wantKill;
  reg        [2:0]    fsm_stateReg;
  reg        [2:0]    fsm_stateNext;
  wire                when_GCDCtrl_l37;
  `ifndef SYNTHESIS
  reg [71:0] fsm_stateReg_string;
  reg [71:0] fsm_stateNext_string;
  `endif


  `ifndef SYNTHESIS
  always @(*) begin
    case(fsm_stateReg)
      fsm_enumDef_BOOT : fsm_stateReg_string = "BOOT     ";
      fsm_enumDef_idle : fsm_stateReg_string = "idle     ";
      fsm_enumDef_calculate : fsm_stateReg_string = "calculate";
      fsm_enumDef_calcA : fsm_stateReg_string = "calcA    ";
      fsm_enumDef_calcB : fsm_stateReg_string = "calcB    ";
      fsm_enumDef_calcDone : fsm_stateReg_string = "calcDone ";
      default : fsm_stateReg_string = "?????????";
    endcase
  end
  always @(*) begin
    case(fsm_stateNext)
      fsm_enumDef_BOOT : fsm_stateNext_string = "BOOT     ";
      fsm_enumDef_idle : fsm_stateNext_string = "idle     ";
      fsm_enumDef_calculate : fsm_stateNext_string = "calculate";
      fsm_enumDef_calcA : fsm_stateNext_string = "calcA    ";
      fsm_enumDef_calcB : fsm_stateNext_string = "calcB    ";
      fsm_enumDef_calcDone : fsm_stateNext_string = "calcDone ";
      default : fsm_stateNext_string = "?????????";
    endcase
  end
  `endif

  assign fsm_wantExit = 1'b0;
  always @(*) begin
    fsm_wantStart = 1'b0;
    case(fsm_stateReg)
      fsm_enumDef_idle : begin
      end
      fsm_enumDef_calculate : begin
      end
      fsm_enumDef_calcA : begin
      end
      fsm_enumDef_calcB : begin
      end
      fsm_enumDef_calcDone : begin
      end
      default : begin
        fsm_wantStart = 1'b1;
      end
    endcase
  end

  assign fsm_wantKill = 1'b0;
  always @(*) begin
    io_dataCtrl_loadA = 1'b0;
    case(fsm_stateReg)
      fsm_enumDef_idle : begin
      end
      fsm_enumDef_calculate : begin
      end
      fsm_enumDef_calcA : begin
        io_dataCtrl_loadA = 1'b1;
      end
      fsm_enumDef_calcB : begin
      end
      fsm_enumDef_calcDone : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    io_dataCtrl_loadB = 1'b0;
    case(fsm_stateReg)
      fsm_enumDef_idle : begin
      end
      fsm_enumDef_calculate : begin
      end
      fsm_enumDef_calcA : begin
      end
      fsm_enumDef_calcB : begin
        io_dataCtrl_loadB = 1'b1;
      end
      fsm_enumDef_calcDone : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    io_dataCtrl_init = 1'b0;
    case(fsm_stateReg)
      fsm_enumDef_idle : begin
        if(io_valid) begin
          io_dataCtrl_init = 1'b1;
        end
      end
      fsm_enumDef_calculate : begin
      end
      fsm_enumDef_calcA : begin
      end
      fsm_enumDef_calcB : begin
      end
      fsm_enumDef_calcDone : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    io_dataCtrl_selL = 1'b0;
    case(fsm_stateReg)
      fsm_enumDef_idle : begin
      end
      fsm_enumDef_calculate : begin
      end
      fsm_enumDef_calcA : begin
      end
      fsm_enumDef_calcB : begin
        io_dataCtrl_selL = 1'b1;
      end
      fsm_enumDef_calcDone : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    io_dataCtrl_selR = 1'b0;
    case(fsm_stateReg)
      fsm_enumDef_idle : begin
      end
      fsm_enumDef_calculate : begin
      end
      fsm_enumDef_calcA : begin
        io_dataCtrl_selR = 1'b1;
      end
      fsm_enumDef_calcB : begin
      end
      fsm_enumDef_calcDone : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    io_ready = 1'b0;
    case(fsm_stateReg)
      fsm_enumDef_idle : begin
      end
      fsm_enumDef_calculate : begin
      end
      fsm_enumDef_calcA : begin
      end
      fsm_enumDef_calcB : begin
      end
      fsm_enumDef_calcDone : begin
        io_ready = 1'b1;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    fsm_stateNext = fsm_stateReg;
    case(fsm_stateReg)
      fsm_enumDef_idle : begin
        if(io_valid) begin
          fsm_stateNext = fsm_enumDef_calculate;
        end
      end
      fsm_enumDef_calculate : begin
        if(io_dataCtrl_cmpAgtB) begin
          fsm_stateNext = fsm_enumDef_calcA;
        end else begin
          if(io_dataCtrl_cmpAltB) begin
            fsm_stateNext = fsm_enumDef_calcB;
          end else begin
            if(when_GCDCtrl_l37) begin
              fsm_stateNext = fsm_enumDef_calcDone;
            end
          end
        end
      end
      fsm_enumDef_calcA : begin
        fsm_stateNext = fsm_enumDef_calculate;
      end
      fsm_enumDef_calcB : begin
        fsm_stateNext = fsm_enumDef_calculate;
      end
      fsm_enumDef_calcDone : begin
        fsm_stateNext = fsm_enumDef_idle;
      end
      default : begin
      end
    endcase
    if(fsm_wantStart) begin
      fsm_stateNext = fsm_enumDef_idle;
    end
    if(fsm_wantKill) begin
      fsm_stateNext = fsm_enumDef_BOOT;
    end
  end

  assign when_GCDCtrl_l37 = ((! io_dataCtrl_cmpAgtB) && (! io_dataCtrl_cmpAgtB));
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      fsm_stateReg <= fsm_enumDef_BOOT;
    end else begin
      fsm_stateReg <= fsm_stateNext;
    end
  end


endmodule
