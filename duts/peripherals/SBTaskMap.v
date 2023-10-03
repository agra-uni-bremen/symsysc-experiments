// Generator : SpinalHDL v1.9.3    git head : 029104c77a54c53f1edda327a3bea333f7d65fd9
// Component : SBTaskMap
// Git hash  : fc4247793ba87b2f5c3417fc493ac25f4f7d0c29

`timescale 1ns/1ps

module SBTaskMap (
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

  wire       [31:0]   taskMap_1_io_memory_rdata;
  wire                taskMap_1_io_ready;
  wire                busCtrl_io_ready;
  wire       [0:0]    _zz_sbDataOutputReg;
  wire       [0:0]    _zz_sbDataOutputReg_1;
  wire       [0:0]    _zz_sbDataOutputReg_2;
  reg        [31:0]   sbDataOutputReg;
  reg        [2:0]    regAddr;
  reg        [31:0]   regWData;
  reg                 regWREna;
  reg                 regValid;
  reg        [31:0]   regMappingVal;
  reg                 regReadyBuf;
  wire                mmioRegLogic_read;
  wire                mmioRegLogic_write;
  wire       [7:0]    mmioRegLogic_addr;
  wire                when_SBTaskMap_l34;
  wire                when_SBTaskMap_l36;
  wire                when_SBTaskMap_l38;
  wire                when_SBTaskMap_l40;
  wire                when_SBTaskMap_l42;
  wire                when_SBTaskMap_l44;
  wire                when_SBTaskMap_l50;
  wire                when_SBTaskMap_l52;
  wire                when_SBTaskMap_l54;
  wire                when_SBTaskMap_l56;
  wire                when_SBTaskMap_l58;
  wire                when_SBTaskMap_l60;
  wire                when_SBTaskMap_l62;

  assign _zz_sbDataOutputReg = regWREna;
  assign _zz_sbDataOutputReg_1 = regValid;
  assign _zz_sbDataOutputReg_2 = regReadyBuf;
  TaskMap taskMap_1 (
    .io_memory_wdata (regWData[31:0]                 ), //i
    .io_memory_rdata (taskMap_1_io_memory_rdata[31:0]), //o
    .io_memory_addr  (regAddr[2:0]                   ), //i
    .io_memory_wrEna (regWREna                       ), //i
    .io_mappingValue (regMappingVal[31:0]            ), //i
    .io_valid        (regValid                       ), //i
    .io_ready        (taskMap_1_io_ready             ), //o
    .clk             (clk                            ), //i
    .reset           (reset                          )  //i
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
  assign when_SBTaskMap_l34 = (mmioRegLogic_addr == 8'h00);
  assign when_SBTaskMap_l36 = (mmioRegLogic_addr == 8'h04);
  assign when_SBTaskMap_l38 = (mmioRegLogic_addr == 8'h08);
  assign when_SBTaskMap_l40 = (mmioRegLogic_addr == 8'h0c);
  assign when_SBTaskMap_l42 = (mmioRegLogic_addr == 8'h10);
  assign when_SBTaskMap_l44 = (mmioRegLogic_addr == 8'h14);
  assign when_SBTaskMap_l50 = (mmioRegLogic_addr == 8'h00);
  assign when_SBTaskMap_l52 = (mmioRegLogic_addr == 8'h04);
  assign when_SBTaskMap_l54 = (mmioRegLogic_addr == 8'h08);
  assign when_SBTaskMap_l56 = (mmioRegLogic_addr == 8'h0c);
  assign when_SBTaskMap_l58 = (mmioRegLogic_addr == 8'h10);
  assign when_SBTaskMap_l60 = (mmioRegLogic_addr == 8'h14);
  assign when_SBTaskMap_l62 = (mmioRegLogic_addr == 8'h18);
  assign io_sb_SBready = busCtrl_io_ready;
  assign io_sb_SBrdata = sbDataOutputReg;
  assign io_irq = regReadyBuf;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      sbDataOutputReg <= 32'h00000000;
      regAddr <= 3'b000;
      regWData <= 32'h00000000;
      regWREna <= 1'b0;
      regValid <= 1'b0;
      regMappingVal <= 32'h00000000;
      regReadyBuf <= 1'b0;
    end else begin
      regWREna <= 1'b0;
      regValid <= 1'b0;
      if(taskMap_1_io_ready) begin
        regReadyBuf <= taskMap_1_io_ready;
      end
      sbDataOutputReg <= 32'h00000000;
      if(mmioRegLogic_write) begin
        if(when_SBTaskMap_l34) begin
          regAddr <= io_sb_SBwdata[2 : 0];
        end else begin
          if(when_SBTaskMap_l36) begin
            regWData <= io_sb_SBwdata;
          end else begin
            if(!when_SBTaskMap_l38) begin
              if(when_SBTaskMap_l40) begin
                regWREna <= (io_sb_SBwdata == 32'h00000001);
              end else begin
                if(when_SBTaskMap_l42) begin
                  regMappingVal <= io_sb_SBwdata;
                end else begin
                  if(when_SBTaskMap_l44) begin
                    regValid <= (io_sb_SBwdata == 32'h00000001);
                  end
                end
              end
            end
          end
        end
      end else begin
        if(mmioRegLogic_read) begin
          if(when_SBTaskMap_l50) begin
            sbDataOutputReg <= {29'd0, regAddr};
          end else begin
            if(when_SBTaskMap_l52) begin
              sbDataOutputReg <= regWData;
            end else begin
              if(when_SBTaskMap_l54) begin
                sbDataOutputReg <= taskMap_1_io_memory_rdata;
              end else begin
                if(when_SBTaskMap_l56) begin
                  sbDataOutputReg <= {31'd0, _zz_sbDataOutputReg};
                end else begin
                  if(when_SBTaskMap_l58) begin
                    sbDataOutputReg <= regMappingVal;
                  end else begin
                    if(when_SBTaskMap_l60) begin
                      sbDataOutputReg <= {31'd0, _zz_sbDataOutputReg_1};
                    end else begin
                      if(when_SBTaskMap_l62) begin
                        sbDataOutputReg <= {31'd0, _zz_sbDataOutputReg_2};
                        regReadyBuf <= 1'b0;
                      end
                    end
                  end
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

module TaskMap (
  input      [31:0]   io_memory_wdata,
  output     [31:0]   io_memory_rdata,
  input      [2:0]    io_memory_addr,
  input               io_memory_wrEna,
  input      [31:0]   io_mappingValue,
  input               io_valid,
  output              io_ready,
  input               clk,
  input               reset
);
  localparam MemDriver_mmio = 1'd0;
  localparam MemDriver_peripheral = 1'd1;

  wire                ctrl_io_ready;
  wire                ctrl_io_writeEna;
  wire       [0:0]    ctrl_io_memMux;
  wire                ctrl_io_datactrl_init;
  wire       [2:0]    ctrl_io_datactrl_bufElement;
  wire       [2:0]    data_io_memory_addr;
  wire       [31:0]   data_io_memory_wdata;
  wire       [31:0]   mem_io_mmioIF_rdata;
  wire       [31:0]   mem_io_innerIF_rdata;

  TaskMapControl ctrl (
    .io_valid               (io_valid                        ), //i
    .io_ready               (ctrl_io_ready                   ), //o
    .io_writeEna            (ctrl_io_writeEna                ), //o
    .io_memMux              (ctrl_io_memMux                  ), //o
    .io_datactrl_init       (ctrl_io_datactrl_init           ), //o
    .io_datactrl_bufElement (ctrl_io_datactrl_bufElement[2:0]), //o
    .clk                    (clk                             ), //i
    .reset                  (reset                           )  //i
  );
  TaskMapData data (
    .io_memory_addr         (data_io_memory_addr[2:0]        ), //o
    .io_memory_wdata        (data_io_memory_wdata[31:0]      ), //o
    .io_memory_rdata        (mem_io_innerIF_rdata[31:0]      ), //i
    .io_mappingValue        (io_mappingValue[31:0]           ), //i
    .io_datactrl_init       (ctrl_io_datactrl_init           ), //i
    .io_datactrl_bufElement (ctrl_io_datactrl_bufElement[2:0]), //i
    .clk                    (clk                             ), //i
    .reset                  (reset                           )  //i
  );
  MMIOMemory mem (
    .io_mmioIF_wdata  (io_memory_wdata[31:0]     ), //i
    .io_mmioIF_rdata  (mem_io_mmioIF_rdata[31:0] ), //o
    .io_mmioIF_addr   (io_memory_addr[2:0]       ), //i
    .io_mmioIF_wrEna  (io_memory_wrEna           ), //i
    .io_innerIF_wdata (data_io_memory_wdata[31:0]), //i
    .io_innerIF_rdata (mem_io_innerIF_rdata[31:0]), //o
    .io_innerIF_addr  (data_io_memory_addr[2:0]  ), //i
    .io_innerIF_wrEna (ctrl_io_writeEna          ), //i
    .io_ifMux         (ctrl_io_memMux            ), //i
    .clk              (clk                       ), //i
    .reset            (reset                     )  //i
  );
  assign io_ready = ctrl_io_ready;
  assign io_memory_rdata = mem_io_mmioIF_rdata;

endmodule

module MMIOMemory (
  input      [31:0]   io_mmioIF_wdata,
  output reg [31:0]   io_mmioIF_rdata,
  input      [2:0]    io_mmioIF_addr,
  input               io_mmioIF_wrEna,
  input      [31:0]   io_innerIF_wdata,
  output reg [31:0]   io_innerIF_rdata,
  input      [2:0]    io_innerIF_addr,
  input               io_innerIF_wrEna,
  input      [0:0]    io_ifMux,
  input               clk,
  input               reset
);
  localparam MemDriver_mmio = 1'd0;
  localparam MemDriver_peripheral = 1'd1;

  wire       [31:0]   _zz_memory_port0;
  reg        [2:0]    localMemAddr;
  reg        [31:0]   localMemData;
  reg                 localMemEna;
  wire       [31:0]   localRData;
  `ifndef SYNTHESIS
  reg [79:0] io_ifMux_string;
  `endif

  (* ram_style = "distributed" *) reg [31:0] memory [0:7];

  initial begin
    $readmemb("source/duts/peripherals/SBTaskMap.v_toplevel_taskMap_1_mem_memory.bin",memory);
  end
  assign _zz_memory_port0 = memory[localMemAddr];
  always @(posedge clk) begin
    if(localMemEna) begin
      memory[localMemAddr] <= localMemData;
    end
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(io_ifMux)
      MemDriver_mmio : io_ifMux_string = "mmio      ";
      MemDriver_peripheral : io_ifMux_string = "peripheral";
      default : io_ifMux_string = "??????????";
    endcase
  end
  `endif

  always @(*) begin
    case(io_ifMux)
      MemDriver_mmio : begin
        io_innerIF_rdata = 32'h00000000;
      end
      default : begin
        io_innerIF_rdata = localRData;
      end
    endcase
  end

  always @(*) begin
    case(io_ifMux)
      MemDriver_mmio : begin
        io_mmioIF_rdata = localRData;
      end
      default : begin
        io_mmioIF_rdata = 32'h00000000;
      end
    endcase
  end

  always @(*) begin
    case(io_ifMux)
      MemDriver_mmio : begin
        localMemAddr = io_mmioIF_addr;
      end
      default : begin
        localMemAddr = io_innerIF_addr;
      end
    endcase
  end

  always @(*) begin
    case(io_ifMux)
      MemDriver_mmio : begin
        localMemData = io_mmioIF_wdata;
      end
      default : begin
        localMemData = io_innerIF_wdata;
      end
    endcase
  end

  always @(*) begin
    case(io_ifMux)
      MemDriver_mmio : begin
        localMemEna = io_mmioIF_wrEna;
      end
      default : begin
        localMemEna = io_innerIF_wrEna;
      end
    endcase
  end

  assign localRData = _zz_memory_port0;

endmodule

module TaskMapData (
  output     [2:0]    io_memory_addr,
  output     [31:0]   io_memory_wdata,
  input      [31:0]   io_memory_rdata,
  input      [31:0]   io_mappingValue,
  input               io_datactrl_init,
  input      [2:0]    io_datactrl_bufElement,
  input               clk,
  input               reset
);

  wire       [31:0]   _zz_mappedValue;
  wire       [31:0]   _zz_mappedValue_1;
  reg        [31:0]   mappingValReg;
  wire       [31:0]   mappedValue;

  assign _zz_mappedValue = ($signed(_zz_mappedValue_1) + $signed(32'h00000013));
  assign _zz_mappedValue_1 = (io_memory_rdata & mappingValReg);
  assign mappedValue = _zz_mappedValue;
  assign io_memory_wdata = mappedValue;
  assign io_memory_addr = io_datactrl_bufElement;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      mappingValReg <= 32'h00000000;
    end else begin
      if(io_datactrl_init) begin
        mappingValReg <= io_mappingValue;
      end
    end
  end


endmodule

module TaskMapControl (
  input               io_valid,
  output reg          io_ready,
  output reg          io_writeEna,
  output reg [0:0]    io_memMux,
  output reg          io_datactrl_init,
  output reg [2:0]    io_datactrl_bufElement,
  input               clk,
  input               reset
);
  localparam MemDriver_mmio = 1'd0;
  localparam MemDriver_peripheral = 1'd1;
  localparam fsm_enumDef_BOOT = 3'd0;
  localparam fsm_enumDef_stateIdle = 3'd1;
  localparam fsm_enumDef_stateInit = 3'd2;
  localparam fsm_enumDef_stateGenerate = 3'd3;
  localparam fsm_enumDef_stateDone = 3'd4;

  wire       [2:0]    _zz_fsm_cnt_valueNext;
  wire       [0:0]    _zz_fsm_cnt_valueNext_1;
  wire                fsm_wantExit;
  reg                 fsm_wantStart;
  wire                fsm_wantKill;
  reg                 fsm_cnt_willIncrement;
  reg                 fsm_cnt_willClear;
  reg        [2:0]    fsm_cnt_valueNext;
  reg        [2:0]    fsm_cnt_value;
  wire                fsm_cnt_willOverflowIfInc;
  wire                fsm_cnt_willOverflow;
  reg        [2:0]    fsm_stateReg;
  reg        [2:0]    fsm_stateNext;
  wire                when_TaskMapControl_l36;
  `ifndef SYNTHESIS
  reg [79:0] io_memMux_string;
  reg [103:0] fsm_stateReg_string;
  reg [103:0] fsm_stateNext_string;
  `endif


  assign _zz_fsm_cnt_valueNext_1 = fsm_cnt_willIncrement;
  assign _zz_fsm_cnt_valueNext = {2'd0, _zz_fsm_cnt_valueNext_1};
  `ifndef SYNTHESIS
  always @(*) begin
    case(io_memMux)
      MemDriver_mmio : io_memMux_string = "mmio      ";
      MemDriver_peripheral : io_memMux_string = "peripheral";
      default : io_memMux_string = "??????????";
    endcase
  end
  always @(*) begin
    case(fsm_stateReg)
      fsm_enumDef_BOOT : fsm_stateReg_string = "BOOT         ";
      fsm_enumDef_stateIdle : fsm_stateReg_string = "stateIdle    ";
      fsm_enumDef_stateInit : fsm_stateReg_string = "stateInit    ";
      fsm_enumDef_stateGenerate : fsm_stateReg_string = "stateGenerate";
      fsm_enumDef_stateDone : fsm_stateReg_string = "stateDone    ";
      default : fsm_stateReg_string = "?????????????";
    endcase
  end
  always @(*) begin
    case(fsm_stateNext)
      fsm_enumDef_BOOT : fsm_stateNext_string = "BOOT         ";
      fsm_enumDef_stateIdle : fsm_stateNext_string = "stateIdle    ";
      fsm_enumDef_stateInit : fsm_stateNext_string = "stateInit    ";
      fsm_enumDef_stateGenerate : fsm_stateNext_string = "stateGenerate";
      fsm_enumDef_stateDone : fsm_stateNext_string = "stateDone    ";
      default : fsm_stateNext_string = "?????????????";
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
      fsm_enumDef_stateGenerate : begin
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
    fsm_cnt_willIncrement = 1'b0;
    case(fsm_stateReg)
      fsm_enumDef_stateIdle : begin
      end
      fsm_enumDef_stateInit : begin
      end
      fsm_enumDef_stateGenerate : begin
        fsm_cnt_willIncrement = 1'b1;
      end
      fsm_enumDef_stateDone : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    fsm_cnt_willClear = 1'b0;
    case(fsm_stateReg)
      fsm_enumDef_stateIdle : begin
      end
      fsm_enumDef_stateInit : begin
        fsm_cnt_willClear = 1'b1;
      end
      fsm_enumDef_stateGenerate : begin
      end
      fsm_enumDef_stateDone : begin
      end
      default : begin
      end
    endcase
  end

  assign fsm_cnt_willOverflowIfInc = (fsm_cnt_value == 3'b111);
  assign fsm_cnt_willOverflow = (fsm_cnt_willOverflowIfInc && fsm_cnt_willIncrement);
  always @(*) begin
    fsm_cnt_valueNext = (fsm_cnt_value + _zz_fsm_cnt_valueNext);
    if(fsm_cnt_willClear) begin
      fsm_cnt_valueNext = 3'b000;
    end
  end

  always @(*) begin
    io_ready = 1'b0;
    case(fsm_stateReg)
      fsm_enumDef_stateIdle : begin
      end
      fsm_enumDef_stateInit : begin
      end
      fsm_enumDef_stateGenerate : begin
      end
      fsm_enumDef_stateDone : begin
        io_ready = 1'b1;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    io_writeEna = 1'b0;
    case(fsm_stateReg)
      fsm_enumDef_stateIdle : begin
      end
      fsm_enumDef_stateInit : begin
      end
      fsm_enumDef_stateGenerate : begin
        io_writeEna = 1'b1;
      end
      fsm_enumDef_stateDone : begin
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
      fsm_enumDef_stateGenerate : begin
      end
      fsm_enumDef_stateDone : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    io_datactrl_bufElement = 3'b000;
    case(fsm_stateReg)
      fsm_enumDef_stateIdle : begin
      end
      fsm_enumDef_stateInit : begin
      end
      fsm_enumDef_stateGenerate : begin
        io_datactrl_bufElement = fsm_cnt_value;
      end
      fsm_enumDef_stateDone : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    io_memMux = MemDriver_peripheral;
    case(fsm_stateReg)
      fsm_enumDef_stateIdle : begin
        io_memMux = MemDriver_mmio;
      end
      fsm_enumDef_stateInit : begin
      end
      fsm_enumDef_stateGenerate : begin
      end
      fsm_enumDef_stateDone : begin
        io_memMux = MemDriver_mmio;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    fsm_stateNext = fsm_stateReg;
    case(fsm_stateReg)
      fsm_enumDef_stateIdle : begin
        if(when_TaskMapControl_l36) begin
          fsm_stateNext = fsm_enumDef_stateInit;
        end
      end
      fsm_enumDef_stateInit : begin
        fsm_stateNext = fsm_enumDef_stateGenerate;
      end
      fsm_enumDef_stateGenerate : begin
        if(fsm_cnt_willOverflow) begin
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

  assign when_TaskMapControl_l36 = (io_valid == 1'b1);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      fsm_cnt_value <= 3'b000;
      fsm_stateReg <= fsm_enumDef_BOOT;
    end else begin
      fsm_cnt_value <= fsm_cnt_valueNext;
      fsm_stateReg <= fsm_stateNext;
    end
  end


endmodule
