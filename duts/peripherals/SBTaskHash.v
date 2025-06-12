// Generator : SpinalHDL v1.9.3    git head : 029104c77a54c53f1edda327a3bea333f7d65fd9
// Component : SBTaskHash
// Git hash  : 7ae0e207cff4275f92117385345f4f10868f4585

`timescale 1ns/1ps

module SBTaskHash (
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

  wire       [31:0]   taskHash_1_io_hashVal;
  wire                taskHash_1_io_ready;
  wire                busCtrl_io_ready;
  wire       [0:0]    _zz_sbDataOutputReg;
  reg        [31:0]   regA;
  reg        [31:0]   regB;
  reg        [31:0]   regHashBuf;
  reg                 regValid;
  reg                 regReadyBuf;
  reg        [31:0]   sbDataOutputReg;
  wire                mmioRegLogic_read;
  wire                mmioRegLogic_write;
  wire       [7:0]    mmioRegLogic_addr;
  wire                when_SBTaskHash_l32;
  wire                when_SBTaskHash_l35;
  wire                when_SBTaskHash_l38;
  wire                when_SBTaskHash_l40;
  wire                when_SBTaskHash_l42;
  wire                when_SBTaskHash_l47;
  wire                when_SBTaskHash_l49;
  wire                when_SBTaskHash_l51;
  wire                when_SBTaskHash_l54;

  assign _zz_sbDataOutputReg = regReadyBuf;
  TaskHash taskHash_1 (
    .io_a       (regA[31:0]                 ), //i
    .io_b       (regB[31:0]                 ), //i
    .io_hashVal (taskHash_1_io_hashVal[31:0]), //o
    .io_valid   (regValid                   ), //i
    .io_ready   (taskHash_1_io_ready        ), //o
    .clk        (clk                        ), //i
    .reset      (reset                      )  //i
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
  assign when_SBTaskHash_l32 = (mmioRegLogic_addr == 8'h00);
  assign when_SBTaskHash_l35 = (mmioRegLogic_addr == 8'h04);
  assign when_SBTaskHash_l38 = (mmioRegLogic_addr == 8'h08);
  assign when_SBTaskHash_l40 = (mmioRegLogic_addr == 8'h0c);
  assign when_SBTaskHash_l42 = (mmioRegLogic_addr == 8'h10);
  assign when_SBTaskHash_l47 = (mmioRegLogic_addr == 8'h00);
  assign when_SBTaskHash_l49 = (mmioRegLogic_addr == 8'h04);
  assign when_SBTaskHash_l51 = (mmioRegLogic_addr == 8'h08);
  assign when_SBTaskHash_l54 = (mmioRegLogic_addr == 8'h0c);
  assign io_sb_SBready = busCtrl_io_ready;
  assign io_sb_SBrdata = sbDataOutputReg;
  assign io_irq = regReadyBuf;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      regA <= 32'h00000000;
      regB <= 32'h00000000;
      regHashBuf <= 32'h00000000;
      regValid <= 1'b0;
      regReadyBuf <= 1'b0;
      sbDataOutputReg <= 32'h00000000;
    end else begin
      if(taskHash_1_io_ready) begin
        regHashBuf <= taskHash_1_io_hashVal;
      end
      regValid <= 1'b0;
      if(taskHash_1_io_ready) begin
        regReadyBuf <= taskHash_1_io_ready;
      end
      sbDataOutputReg <= 32'h00000000;
      if(mmioRegLogic_write) begin
        if(when_SBTaskHash_l32) begin
          regA <= io_sb_SBwdata;
          regHashBuf <= 32'h00000000;
        end else begin
          if(when_SBTaskHash_l35) begin
            regB <= io_sb_SBwdata;
            regHashBuf <= 32'h00000000;
          end else begin
            if(!when_SBTaskHash_l38) begin
              if(!when_SBTaskHash_l40) begin
                if(when_SBTaskHash_l42) begin
                  regValid <= (io_sb_SBwdata == 32'h00000001);
                  regHashBuf <= 32'h00000000;
                end
              end
            end
          end
        end
      end else begin
        if(mmioRegLogic_read) begin
          if(when_SBTaskHash_l47) begin
            sbDataOutputReg <= regA;
          end else begin
            if(when_SBTaskHash_l49) begin
              sbDataOutputReg <= regB;
            end else begin
              if(when_SBTaskHash_l51) begin
                sbDataOutputReg <= regHashBuf;
                regReadyBuf <= 1'b0;
              end else begin
                if(when_SBTaskHash_l54) begin
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

module TaskHash (
  input      [31:0]   io_a,
  input      [31:0]   io_b,
  output     [31:0]   io_hashVal,
  input               io_valid,
  output              io_ready,
  input               clk,
  input               reset
);
  localparam ComputationState_none = 2'd0;
  localparam ComputationState_s1 = 2'd1;
  localparam ComputationState_s2 = 2'd2;
  localparam ComputationState_s3 = 2'd3;

  wire                ctrl_io_ready;
  wire                ctrl_io_datactrl_init;
  wire       [1:0]    ctrl_io_datactrl_compute;
  wire       [31:0]   data_io_hashVal;

  TaskHashControl ctrl (
    .io_valid            (io_valid                     ), //i
    .io_ready            (ctrl_io_ready                ), //o
    .io_datactrl_init    (ctrl_io_datactrl_init        ), //o
    .io_datactrl_compute (ctrl_io_datactrl_compute[1:0]), //o
    .clk                 (clk                          ), //i
    .reset               (reset                        )  //i
  );
  TaskHashData data (
    .io_a                (io_a[31:0]                   ), //i
    .io_b                (io_b[31:0]                   ), //i
    .io_hashVal          (data_io_hashVal[31:0]        ), //o
    .io_datactrl_init    (ctrl_io_datactrl_init        ), //i
    .io_datactrl_compute (ctrl_io_datactrl_compute[1:0]), //i
    .clk                 (clk                          ), //i
    .reset               (reset                        )  //i
  );
  assign io_ready = ctrl_io_ready;
  assign io_hashVal = data_io_hashVal;

endmodule

module TaskHashData (
  input      [31:0]   io_a,
  input      [31:0]   io_b,
  output     [31:0]   io_hashVal,
  input               io_datactrl_init,
  input      [1:0]    io_datactrl_compute,
  input               clk,
  input               reset
);
  localparam ComputationState_none = 2'd0;
  localparam ComputationState_s1 = 2'd1;
  localparam ComputationState_s2 = 2'd2;
  localparam ComputationState_s3 = 2'd3;

  wire       [31:0]   _zz_mulHash;
  wire       [31:0]   _zz_mulHash_1;
  wire       [31:0]   _zz_mulHash_2;
  wire       [31:0]   _zz_mulHash_3;
  wire       [31:0]   _zz_mulHash_4;
  wire       [31:0]   _zz_mulHash_5;
  wire       [31:0]   _zz_s2hash;
  wire       [31:0]   _zz_s2hash_1;
  wire       [31:0]   _zz_s2hash_2;
  wire       [31:0]   _zz_s2hash_3;
  wire       [31:0]   _zz_s3hash;
  wire       [31:0]   _zz_s3hash_1;
  wire       [31:0]   _zz_s3hash_2;
  wire       [31:0]   _zz_s3hash_3;
  reg        [31:0]   a2;
  reg        [31:0]   b2;
  reg        [31:0]   x;
  reg        [31:0]   y;
  reg        [31:0]   R_hash;
  wire       [31:0]   mulHash;
  wire       [31:0]   s2hash;
  wire       [31:0]   s3hash;
  wire                when_TaskHashData_l55;
  wire                when_TaskHashData_l62;
  wire                when_TaskHashData_l69;
  `ifndef SYNTHESIS
  reg [31:0] io_datactrl_compute_string;
  `endif


  assign _zz_mulHash = ($signed(_zz_mulHash_1) + $signed(_zz_mulHash_4));
  assign _zz_mulHash_1 = ($signed(_zz_mulHash_2) + $signed(_zz_mulHash_3));
  assign _zz_mulHash_2 = (R_hash <<< 4);
  assign _zz_mulHash_3 = (R_hash <<< 2);
  assign _zz_mulHash_4 = (R_hash <<< 1);
  assign _zz_mulHash_5 = (R_hash <<< 0);
  assign _zz_s2hash = (x ^ _zz_s2hash_1);
  assign _zz_s2hash_1 = (_zz_s2hash_2 | _zz_s2hash_3);
  assign _zz_s2hash_2 = (y <<< 13);
  assign _zz_s2hash_3 = ($signed(y) >>> 19);
  assign _zz_s3hash = (y ^ _zz_s3hash_1);
  assign _zz_s3hash_1 = (_zz_s3hash_2 | _zz_s3hash_3);
  assign _zz_s3hash_2 = (x <<< 7);
  assign _zz_s3hash_3 = ($signed(x) >>> 25);
  `ifndef SYNTHESIS
  always @(*) begin
    case(io_datactrl_compute)
      ComputationState_none : io_datactrl_compute_string = "none";
      ComputationState_s1 : io_datactrl_compute_string = "s1  ";
      ComputationState_s2 : io_datactrl_compute_string = "s2  ";
      ComputationState_s3 : io_datactrl_compute_string = "s3  ";
      default : io_datactrl_compute_string = "????";
    endcase
  end
  `endif

  assign mulHash = ($signed(_zz_mulHash) + $signed(_zz_mulHash_5));
  assign s2hash = ($signed(mulHash) + $signed(_zz_s2hash));
  assign s3hash = ($signed(mulHash) + $signed(_zz_s3hash));
  assign when_TaskHashData_l55 = (io_datactrl_compute == ComputationState_s1);
  assign when_TaskHashData_l62 = (io_datactrl_compute == ComputationState_s2);
  assign when_TaskHashData_l69 = (io_datactrl_compute == ComputationState_s3);
  assign io_hashVal = R_hash;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      a2 <= 32'h00000000;
      b2 <= 32'h00000000;
      x <= 32'h00000000;
      y <= 32'h00000000;
      R_hash <= 32'h00000011;
    end else begin
      if(io_datactrl_init) begin
        R_hash <= 32'h00000011;
        a2 <= io_a;
        b2 <= io_b;
      end else begin
        if(when_TaskHashData_l55) begin
          x <= a2;
          y <= b2;
        end else begin
          if(when_TaskHashData_l62) begin
            R_hash <= s2hash;
            a2 <= s2hash;
          end else begin
            if(when_TaskHashData_l69) begin
              R_hash <= s3hash;
              b2 <= s3hash;
            end
          end
        end
      end
    end
  end


endmodule

module TaskHashControl (
  input               io_valid,
  output reg          io_ready,
  output reg          io_datactrl_init,
  output reg [1:0]    io_datactrl_compute,
  input               clk,
  input               reset
);
  localparam ComputationState_none = 2'd0;
  localparam ComputationState_s1 = 2'd1;
  localparam ComputationState_s2 = 2'd2;
  localparam ComputationState_s3 = 2'd3;
  localparam computeFSM_enumDef_BOOT = 2'd0;
  localparam computeFSM_enumDef_step1 = 2'd1;
  localparam computeFSM_enumDef_step2 = 2'd2;
  localparam computeFSM_enumDef_step3 = 2'd3;
  localparam fsm_enumDef_BOOT = 3'd0;
  localparam fsm_enumDef_stateIdle = 3'd1;
  localparam fsm_enumDef_stateInit = 3'd2;
  localparam fsm_enumDef_stateHash = 3'd3;
  localparam fsm_enumDef_stateDone = 3'd4;

  wire       [2:0]    _zz_fsm_iCount_valueNext;
  wire       [0:0]    _zz_fsm_iCount_valueNext_1;
  wire                fsm_wantExit;
  reg                 fsm_wantStart;
  wire                fsm_wantKill;
  reg                 fsm_iCount_willIncrement;
  reg                 fsm_iCount_willClear;
  reg        [2:0]    fsm_iCount_valueNext;
  reg        [2:0]    fsm_iCount_value;
  wire                fsm_iCount_willOverflowIfInc;
  wire                fsm_iCount_willOverflow;
  reg                 computeFSM_wantExit;
  reg                 computeFSM_wantStart;
  wire                computeFSM_wantKill;
  reg        [1:0]    computeFSM_stateReg;
  reg        [1:0]    computeFSM_stateNext;
  reg        [2:0]    fsm_stateReg;
  reg        [2:0]    fsm_stateNext;
  wire                when_TaskHashControl_l25;
  wire                when_StateMachine_l253;
  `ifndef SYNTHESIS
  reg [31:0] io_datactrl_compute_string;
  reg [39:0] computeFSM_stateReg_string;
  reg [39:0] computeFSM_stateNext_string;
  reg [71:0] fsm_stateReg_string;
  reg [71:0] fsm_stateNext_string;
  `endif


  assign _zz_fsm_iCount_valueNext_1 = fsm_iCount_willIncrement;
  assign _zz_fsm_iCount_valueNext = {2'd0, _zz_fsm_iCount_valueNext_1};
  `ifndef SYNTHESIS
  always @(*) begin
    case(io_datactrl_compute)
      ComputationState_none : io_datactrl_compute_string = "none";
      ComputationState_s1 : io_datactrl_compute_string = "s1  ";
      ComputationState_s2 : io_datactrl_compute_string = "s2  ";
      ComputationState_s3 : io_datactrl_compute_string = "s3  ";
      default : io_datactrl_compute_string = "????";
    endcase
  end
  always @(*) begin
    case(computeFSM_stateReg)
      computeFSM_enumDef_BOOT : computeFSM_stateReg_string = "BOOT ";
      computeFSM_enumDef_step1 : computeFSM_stateReg_string = "step1";
      computeFSM_enumDef_step2 : computeFSM_stateReg_string = "step2";
      computeFSM_enumDef_step3 : computeFSM_stateReg_string = "step3";
      default : computeFSM_stateReg_string = "?????";
    endcase
  end
  always @(*) begin
    case(computeFSM_stateNext)
      computeFSM_enumDef_BOOT : computeFSM_stateNext_string = "BOOT ";
      computeFSM_enumDef_step1 : computeFSM_stateNext_string = "step1";
      computeFSM_enumDef_step2 : computeFSM_stateNext_string = "step2";
      computeFSM_enumDef_step3 : computeFSM_stateNext_string = "step3";
      default : computeFSM_stateNext_string = "?????";
    endcase
  end
  always @(*) begin
    case(fsm_stateReg)
      fsm_enumDef_BOOT : fsm_stateReg_string = "BOOT     ";
      fsm_enumDef_stateIdle : fsm_stateReg_string = "stateIdle";
      fsm_enumDef_stateInit : fsm_stateReg_string = "stateInit";
      fsm_enumDef_stateHash : fsm_stateReg_string = "stateHash";
      fsm_enumDef_stateDone : fsm_stateReg_string = "stateDone";
      default : fsm_stateReg_string = "?????????";
    endcase
  end
  always @(*) begin
    case(fsm_stateNext)
      fsm_enumDef_BOOT : fsm_stateNext_string = "BOOT     ";
      fsm_enumDef_stateIdle : fsm_stateNext_string = "stateIdle";
      fsm_enumDef_stateInit : fsm_stateNext_string = "stateInit";
      fsm_enumDef_stateHash : fsm_stateNext_string = "stateHash";
      fsm_enumDef_stateDone : fsm_stateNext_string = "stateDone";
      default : fsm_stateNext_string = "?????????";
    endcase
  end
  `endif

  assign fsm_wantExit = 1'b0;
  always @(*) begin
    fsm_wantStart = 1'b0;
    case(fsm_stateReg)
      fsm_enumDef_stateIdle : begin
      end
      fsm_enumDef_stateInit : begin
      end
      fsm_enumDef_stateHash : begin
      end
      fsm_enumDef_stateDone : begin
      end
      default : begin
        fsm_wantStart = 1'b1;
      end
    endcase
  end

  assign fsm_wantKill = 1'b0;
  always @(*) begin
    fsm_iCount_willIncrement = 1'b0;
    case(computeFSM_stateReg)
      computeFSM_enumDef_step1 : begin
      end
      computeFSM_enumDef_step2 : begin
      end
      computeFSM_enumDef_step3 : begin
        fsm_iCount_willIncrement = 1'b1;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    fsm_iCount_willClear = 1'b0;
    case(fsm_stateReg)
      fsm_enumDef_stateIdle : begin
      end
      fsm_enumDef_stateInit : begin
        fsm_iCount_willClear = 1'b1;
      end
      fsm_enumDef_stateHash : begin
      end
      fsm_enumDef_stateDone : begin
      end
      default : begin
      end
    endcase
  end

  assign fsm_iCount_willOverflowIfInc = (fsm_iCount_value == 3'b111);
  assign fsm_iCount_willOverflow = (fsm_iCount_willOverflowIfInc && fsm_iCount_willIncrement);
  always @(*) begin
    fsm_iCount_valueNext = (fsm_iCount_value + _zz_fsm_iCount_valueNext);
    if(fsm_iCount_willClear) begin
      fsm_iCount_valueNext = 3'b000;
    end
  end

  always @(*) begin
    io_ready = 1'b0;
    case(fsm_stateReg)
      fsm_enumDef_stateIdle : begin
      end
      fsm_enumDef_stateInit : begin
      end
      fsm_enumDef_stateHash : begin
      end
      fsm_enumDef_stateDone : begin
        io_ready = 1'b1;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    io_datactrl_init = 1'b0;
    case(fsm_stateReg)
      fsm_enumDef_stateIdle : begin
      end
      fsm_enumDef_stateInit : begin
        io_datactrl_init = 1'b1;
      end
      fsm_enumDef_stateHash : begin
      end
      fsm_enumDef_stateDone : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    io_datactrl_compute = ComputationState_none;
    case(computeFSM_stateReg)
      computeFSM_enumDef_step1 : begin
        io_datactrl_compute = ComputationState_s1;
      end
      computeFSM_enumDef_step2 : begin
        io_datactrl_compute = ComputationState_s2;
      end
      computeFSM_enumDef_step3 : begin
        io_datactrl_compute = ComputationState_s3;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    computeFSM_wantExit = 1'b0;
    case(computeFSM_stateReg)
      computeFSM_enumDef_step1 : begin
      end
      computeFSM_enumDef_step2 : begin
      end
      computeFSM_enumDef_step3 : begin
        if(fsm_iCount_willOverflow) begin
          computeFSM_wantExit = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    computeFSM_wantStart = 1'b0;
    if(when_StateMachine_l253) begin
      computeFSM_wantStart = 1'b1;
    end
  end

  assign computeFSM_wantKill = 1'b0;
  always @(*) begin
    computeFSM_stateNext = computeFSM_stateReg;
    case(computeFSM_stateReg)
      computeFSM_enumDef_step1 : begin
        computeFSM_stateNext = computeFSM_enumDef_step2;
      end
      computeFSM_enumDef_step2 : begin
        computeFSM_stateNext = computeFSM_enumDef_step3;
      end
      computeFSM_enumDef_step3 : begin
        if(fsm_iCount_willOverflow) begin
          computeFSM_stateNext = computeFSM_enumDef_BOOT;
        end else begin
          computeFSM_stateNext = computeFSM_enumDef_step1;
        end
      end
      default : begin
      end
    endcase
    if(computeFSM_wantStart) begin
      computeFSM_stateNext = computeFSM_enumDef_step1;
    end
    if(computeFSM_wantKill) begin
      computeFSM_stateNext = computeFSM_enumDef_BOOT;
    end
  end

  always @(*) begin
    fsm_stateNext = fsm_stateReg;
    case(fsm_stateReg)
      fsm_enumDef_stateIdle : begin
        if(when_TaskHashControl_l25) begin
          fsm_stateNext = fsm_enumDef_stateInit;
        end
      end
      fsm_enumDef_stateInit : begin
        fsm_stateNext = fsm_enumDef_stateHash;
      end
      fsm_enumDef_stateHash : begin
        if(computeFSM_wantExit) begin
          fsm_stateNext = fsm_enumDef_stateDone;
        end
      end
      fsm_enumDef_stateDone : begin
        fsm_stateNext = fsm_enumDef_stateIdle;
      end
      default : begin
      end
    endcase
    if(fsm_wantStart) begin
      fsm_stateNext = fsm_enumDef_stateIdle;
    end
    if(fsm_wantKill) begin
      fsm_stateNext = fsm_enumDef_BOOT;
    end
  end

  assign when_TaskHashControl_l25 = (io_valid == 1'b1);
  assign when_StateMachine_l253 = ((! (fsm_stateReg == fsm_enumDef_stateHash)) && (fsm_stateNext == fsm_enumDef_stateHash));
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      fsm_iCount_value <= 3'b000;
      computeFSM_stateReg <= computeFSM_enumDef_BOOT;
      fsm_stateReg <= fsm_enumDef_BOOT;
    end else begin
      fsm_iCount_value <= fsm_iCount_valueNext;
      computeFSM_stateReg <= computeFSM_stateNext;
      fsm_stateReg <= fsm_stateNext;
    end
  end


endmodule
