// Generator : SpinalHDL v1.4.3    git head : adf552d8f500e7419fff395b7049228e4bc5de26
// Component : RVPLIC
// Git hash  : a523b292c0c07b109af1d30c1d4ada84350b6325



module RVPLIC (
  input      [31:0]   io_sb_SBaddress,
  input               io_sb_SBvalid,
  input      [31:0]   io_sb_SBwdata,
  input               io_sb_SBwrite,
  input      [3:0]    io_sb_SBsize,
  output              io_sb_SBready,
  output     [31:0]   io_sb_SBrdata,
  input               io_sel,
  output              io_irq_pending,
  input               io_has_pending_irq_0,
  input               io_has_pending_irq_1,
  input               io_has_pending_irq_2,
  input               io_has_pending_irq_3,
  input               io_has_pending_irq_4,
  input               io_has_pending_irq_5,
  input               io_has_pending_irq_6,
  input               io_has_pending_irq_7,
  input               io_has_pending_irq_8,
  input               io_has_pending_irq_9,
  input               io_has_pending_irq_10,
  input               io_has_pending_irq_11,
  input               io_has_pending_irq_12,
  input               io_has_pending_irq_13,
  input               io_has_pending_irq_14,
  input               io_has_pending_irq_15,
  input               io_has_pending_irq_16,
  input               io_has_pending_irq_17,
  input               io_has_pending_irq_18,
  input               io_has_pending_irq_19,
  input               io_has_pending_irq_20,
  input               io_has_pending_irq_21,
  input               io_has_pending_irq_22,
  input               io_has_pending_irq_23,
  input               io_has_pending_irq_24,
  input               io_has_pending_irq_25,
  input               io_has_pending_irq_26,
  input               io_has_pending_irq_27,
  input               io_has_pending_irq_28,
  input               io_has_pending_irq_29,
  input               io_has_pending_irq_30,
  input               io_has_pending_irq_31,
  input               io_has_pending_irq_32,
  input               io_has_pending_irq_33,
  input               io_has_pending_irq_34,
  input               io_has_pending_irq_35,
  input               io_has_pending_irq_36,
  input               io_has_pending_irq_37,
  input               io_has_pending_irq_38,
  input               io_has_pending_irq_39,
  input               io_has_pending_irq_40,
  input               io_has_pending_irq_41,
  input               io_has_pending_irq_42,
  input               io_has_pending_irq_43,
  input               io_has_pending_irq_44,
  input               io_has_pending_irq_45,
  input               io_has_pending_irq_46,
  input               io_has_pending_irq_47,
  input               io_has_pending_irq_48,
  input               io_has_pending_irq_49,
  input               io_has_pending_irq_50,
  input               io_has_pending_irq_51,
  input               io_has_pending_irq_52,
  input               clk,
  input               reset
);
  reg        [2:0]    _zz_263;
  wire       [23:0]   _zz_264;
  wire       [23:0]   _zz_265;
  wire       [23:0]   _zz_266;
  wire       [23:0]   _zz_267;
  wire       [2:0]    _zz_268;
  wire       [21:0]   _zz_269;
  wire       [5:0]    _zz_270;
  wire       [23:0]   _zz_271;
  wire       [23:0]   _zz_272;
  wire       [23:0]   _zz_273;
  wire       [23:0]   _zz_274;
  wire       [63:0]   _zz_275;
  wire       [63:0]   _zz_276;
  wire       [30:0]   _zz_277;
  wire       [62:0]   _zz_278;
  wire       [23:0]   _zz_279;
  wire       [23:0]   _zz_280;
  wire       [31:0]   _zz_281;
  wire       [63:0]   _zz_282;
  wire       [63:0]   _zz_283;
  wire       [20:0]   _zz_284;
  wire       [31:0]   _zz_285;
  wire       [23:0]   _zz_286;
  wire       [23:0]   _zz_287;
  wire       [2:0]    _zz_288;
  wire       [23:0]   _zz_289;
  wire       [23:0]   _zz_290;
  wire       [63:0]   _zz_291;
  wire       [63:0]   _zz_292;
  wire       [31:0]   _zz_293;
  wire       [63:0]   _zz_294;
  wire       [23:0]   _zz_295;
  wire       [23:0]   _zz_296;
  wire       [23:0]   _zz_297;
  wire       [23:0]   _zz_298;
  wire       [2:0]    _zz_299;
  wire       [21:0]   _zz_300;
  wire       [5:0]    _zz_301;
  wire       [23:0]   _zz_302;
  wire       [23:0]   _zz_303;
  wire       [31:0]   _zz_304;
  wire       [52:0]   _zz_305;
  wire       [23:0]   _zz_306;
  wire       [23:0]   _zz_307;
  wire       [20:0]   _zz_308;
  wire       [52:0]   _zz_309;
  wire       [23:0]   _zz_310;
  wire       [23:0]   _zz_311;
  wire       [23:0]   _zz_312;
  wire       [23:0]   _zz_313;
  wire       [31:0]   _zz_314;
  wire       [23:0]   _zz_315;
  wire       [23:0]   _zz_316;
  wire       [2:0]    _zz_317;
  wire       [23:0]   _zz_318;
  wire       [23:0]   _zz_319;
  wire       [31:0]   _zz_320;
  wire       [63:0]   _zz_321;
  wire       [62:0]   _zz_322;
  wire       [61:0]   _zz_323;
  wire       [60:0]   _zz_324;
  wire       [59:0]   _zz_325;
  wire       [58:0]   _zz_326;
  wire       [57:0]   _zz_327;
  wire       [56:0]   _zz_328;
  wire       [55:0]   _zz_329;
  wire       [54:0]   _zz_330;
  wire       [53:0]   _zz_331;
  wire       [52:0]   _zz_332;
  wire       [51:0]   _zz_333;
  wire       [50:0]   _zz_334;
  wire       [49:0]   _zz_335;
  wire       [48:0]   _zz_336;
  wire       [47:0]   _zz_337;
  wire       [46:0]   _zz_338;
  wire       [45:0]   _zz_339;
  wire       [44:0]   _zz_340;
  wire       [43:0]   _zz_341;
  wire       [42:0]   _zz_342;
  wire       [41:0]   _zz_343;
  wire       [40:0]   _zz_344;
  wire       [39:0]   _zz_345;
  wire       [38:0]   _zz_346;
  wire       [37:0]   _zz_347;
  wire       [36:0]   _zz_348;
  wire       [35:0]   _zz_349;
  wire       [34:0]   _zz_350;
  wire       [33:0]   _zz_351;
  wire       [32:0]   _zz_352;
  wire       [31:0]   _zz_353;
  wire       [30:0]   _zz_354;
  wire       [29:0]   _zz_355;
  wire       [28:0]   _zz_356;
  wire       [27:0]   _zz_357;
  wire       [26:0]   _zz_358;
  wire       [25:0]   _zz_359;
  wire       [24:0]   _zz_360;
  wire       [23:0]   _zz_361;
  wire       [22:0]   _zz_362;
  wire       [21:0]   _zz_363;
  wire       [20:0]   _zz_364;
  wire       [19:0]   _zz_365;
  wire       [18:0]   _zz_366;
  wire       [17:0]   _zz_367;
  wire       [16:0]   _zz_368;
  wire       [15:0]   _zz_369;
  wire       [14:0]   _zz_370;
  wire       [13:0]   _zz_371;
  wire       [12:0]   _zz_372;
  wire       [11:0]   _zz_373;
  wire       [0:0]    _zz_374;
  wire       [31:0]   _zz_375;
  wire       [1:0]    _zz_376;
  wire       [31:0]   _zz_377;
  wire       [1:0]    _zz_378;
  wire       [31:0]   _zz_379;
  wire       [2:0]    _zz_380;
  wire       [31:0]   _zz_381;
  wire       [2:0]    _zz_382;
  wire       [31:0]   _zz_383;
  wire       [2:0]    _zz_384;
  wire       [31:0]   _zz_385;
  wire       [2:0]    _zz_386;
  wire       [31:0]   _zz_387;
  wire       [3:0]    _zz_388;
  wire       [31:0]   _zz_389;
  wire       [3:0]    _zz_390;
  wire       [31:0]   _zz_391;
  wire       [3:0]    _zz_392;
  wire       [31:0]   _zz_393;
  wire       [3:0]    _zz_394;
  wire       [31:0]   _zz_395;
  wire       [3:0]    _zz_396;
  wire       [31:0]   _zz_397;
  wire       [3:0]    _zz_398;
  wire       [31:0]   _zz_399;
  wire       [3:0]    _zz_400;
  wire       [31:0]   _zz_401;
  wire       [3:0]    _zz_402;
  wire       [31:0]   _zz_403;
  wire       [4:0]    _zz_404;
  wire       [31:0]   _zz_405;
  wire       [4:0]    _zz_406;
  wire       [31:0]   _zz_407;
  wire       [4:0]    _zz_408;
  wire       [31:0]   _zz_409;
  wire       [4:0]    _zz_410;
  wire       [31:0]   _zz_411;
  wire       [4:0]    _zz_412;
  wire       [31:0]   _zz_413;
  wire       [4:0]    _zz_414;
  wire       [31:0]   _zz_415;
  wire       [4:0]    _zz_416;
  wire       [31:0]   _zz_417;
  wire       [4:0]    _zz_418;
  wire       [31:0]   _zz_419;
  wire       [4:0]    _zz_420;
  wire       [31:0]   _zz_421;
  wire       [4:0]    _zz_422;
  wire       [31:0]   _zz_423;
  wire       [4:0]    _zz_424;
  wire       [31:0]   _zz_425;
  wire       [4:0]    _zz_426;
  wire       [31:0]   _zz_427;
  wire       [4:0]    _zz_428;
  wire       [31:0]   _zz_429;
  wire       [4:0]    _zz_430;
  wire       [31:0]   _zz_431;
  wire       [4:0]    _zz_432;
  wire       [31:0]   _zz_433;
  wire       [4:0]    _zz_434;
  wire       [31:0]   _zz_435;
  wire       [5:0]    _zz_436;
  wire       [31:0]   _zz_437;
  wire       [5:0]    _zz_438;
  wire       [31:0]   _zz_439;
  wire       [5:0]    _zz_440;
  wire       [31:0]   _zz_441;
  wire       [5:0]    _zz_442;
  wire       [31:0]   _zz_443;
  wire       [5:0]    _zz_444;
  wire       [31:0]   _zz_445;
  wire       [5:0]    _zz_446;
  wire       [31:0]   _zz_447;
  wire       [5:0]    _zz_448;
  wire       [31:0]   _zz_449;
  wire       [5:0]    _zz_450;
  wire       [31:0]   _zz_451;
  wire       [5:0]    _zz_452;
  wire       [31:0]   _zz_453;
  wire       [5:0]    _zz_454;
  wire       [31:0]   _zz_455;
  wire       [5:0]    _zz_456;
  wire       [31:0]   _zz_457;
  wire       [5:0]    _zz_458;
  wire       [31:0]   _zz_459;
  wire       [5:0]    _zz_460;
  wire       [31:0]   _zz_461;
  wire       [5:0]    _zz_462;
  wire       [31:0]   _zz_463;
  wire       [5:0]    _zz_464;
  wire       [31:0]   _zz_465;
  wire       [5:0]    _zz_466;
  wire       [31:0]   _zz_467;
  wire       [5:0]    _zz_468;
  wire       [31:0]   _zz_469;
  wire       [5:0]    _zz_470;
  wire       [31:0]   _zz_471;
  wire       [5:0]    _zz_472;
  wire       [31:0]   _zz_473;
  wire       [5:0]    _zz_474;
  wire       [31:0]   _zz_475;
  wire       [5:0]    _zz_476;
  wire       [31:0]   _zz_477;
  wire       [0:0]    _zz_478;
  wire       [41:0]   _zz_479;
  wire       [0:0]    _zz_480;
  wire       [30:0]   _zz_481;
  wire       [0:0]    _zz_482;
  wire       [19:0]   _zz_483;
  wire       [0:0]    _zz_484;
  wire       [8:0]    _zz_485;
  wire       [0:0]    _zz_486;
  wire       [41:0]   _zz_487;
  wire       [0:0]    _zz_488;
  wire       [30:0]   _zz_489;
  wire       [0:0]    _zz_490;
  wire       [19:0]   _zz_491;
  wire       [0:0]    _zz_492;
  wire       [8:0]    _zz_493;
  wire       [31:0]   _zz_494;
  wire       [31:0]   _zz_495;
  wire       [31:0]   _zz_496;
  reg                 rdy;
  wire       [21:0]   intAddr;
  wire                read;
  wire                write;
  wire       [23:0]   SRC_PRIO_BASE;
  wire       [23:0]   SRC_PRIO_END;
  wire       [23:0]   PENDING_ARR_BASE;
  wire       [23:0]   HART0_MMODE_INT_EN_BASE;
  wire       [23:0]   HART0_MMODE_PRIO_THRES_BASE;
  wire       [23:0]   HART0_MMODE_CLAIM_BASE;
  wire       [31:0]   current_irq;
  reg        [31:0]   claim_complete;
  reg        [2:0]    interrupt_priorities_0;
  reg        [2:0]    interrupt_priorities_1;
  reg        [2:0]    interrupt_priorities_2;
  reg        [2:0]    interrupt_priorities_3;
  reg        [2:0]    interrupt_priorities_4;
  reg        [2:0]    interrupt_priorities_5;
  reg        [2:0]    interrupt_priorities_6;
  reg        [2:0]    interrupt_priorities_7;
  reg        [2:0]    interrupt_priorities_8;
  reg        [2:0]    interrupt_priorities_9;
  reg        [2:0]    interrupt_priorities_10;
  reg        [2:0]    interrupt_priorities_11;
  reg        [2:0]    interrupt_priorities_12;
  reg        [2:0]    interrupt_priorities_13;
  reg        [2:0]    interrupt_priorities_14;
  reg        [2:0]    interrupt_priorities_15;
  reg        [2:0]    interrupt_priorities_16;
  reg        [2:0]    interrupt_priorities_17;
  reg        [2:0]    interrupt_priorities_18;
  reg        [2:0]    interrupt_priorities_19;
  reg        [2:0]    interrupt_priorities_20;
  reg        [2:0]    interrupt_priorities_21;
  reg        [2:0]    interrupt_priorities_22;
  reg        [2:0]    interrupt_priorities_23;
  reg        [2:0]    interrupt_priorities_24;
  reg        [2:0]    interrupt_priorities_25;
  reg        [2:0]    interrupt_priorities_26;
  reg        [2:0]    interrupt_priorities_27;
  reg        [2:0]    interrupt_priorities_28;
  reg        [2:0]    interrupt_priorities_29;
  reg        [2:0]    interrupt_priorities_30;
  reg        [2:0]    interrupt_priorities_31;
  reg        [2:0]    interrupt_priorities_32;
  reg        [2:0]    interrupt_priorities_33;
  reg        [2:0]    interrupt_priorities_34;
  reg        [2:0]    interrupt_priorities_35;
  reg        [2:0]    interrupt_priorities_36;
  reg        [2:0]    interrupt_priorities_37;
  reg        [2:0]    interrupt_priorities_38;
  reg        [2:0]    interrupt_priorities_39;
  reg        [2:0]    interrupt_priorities_40;
  reg        [2:0]    interrupt_priorities_41;
  reg        [2:0]    interrupt_priorities_42;
  reg        [2:0]    interrupt_priorities_43;
  reg        [2:0]    interrupt_priorities_44;
  reg        [2:0]    interrupt_priorities_45;
  reg        [2:0]    interrupt_priorities_46;
  reg        [2:0]    interrupt_priorities_47;
  reg        [2:0]    interrupt_priorities_48;
  reg        [2:0]    interrupt_priorities_49;
  reg        [2:0]    interrupt_priorities_50;
  reg        [2:0]    interrupt_priorities_51;
  reg        [2:0]    interrupt_priorities_52;
  reg                 pending_interrupts_0;
  reg                 pending_interrupts_1;
  reg                 pending_interrupts_2;
  reg                 pending_interrupts_3;
  reg                 pending_interrupts_4;
  reg                 pending_interrupts_5;
  reg                 pending_interrupts_6;
  reg                 pending_interrupts_7;
  reg                 pending_interrupts_8;
  reg                 pending_interrupts_9;
  reg                 pending_interrupts_10;
  reg                 pending_interrupts_11;
  reg                 pending_interrupts_12;
  reg                 pending_interrupts_13;
  reg                 pending_interrupts_14;
  reg                 pending_interrupts_15;
  reg                 pending_interrupts_16;
  reg                 pending_interrupts_17;
  reg                 pending_interrupts_18;
  reg                 pending_interrupts_19;
  reg                 pending_interrupts_20;
  reg                 pending_interrupts_21;
  reg                 pending_interrupts_22;
  reg                 pending_interrupts_23;
  reg                 pending_interrupts_24;
  reg                 pending_interrupts_25;
  reg                 pending_interrupts_26;
  reg                 pending_interrupts_27;
  reg                 pending_interrupts_28;
  reg                 pending_interrupts_29;
  reg                 pending_interrupts_30;
  reg                 pending_interrupts_31;
  reg                 pending_interrupts_32;
  reg                 pending_interrupts_33;
  reg                 pending_interrupts_34;
  reg                 pending_interrupts_35;
  reg                 pending_interrupts_36;
  reg                 pending_interrupts_37;
  reg                 pending_interrupts_38;
  reg                 pending_interrupts_39;
  reg                 pending_interrupts_40;
  reg                 pending_interrupts_41;
  reg                 pending_interrupts_42;
  reg                 pending_interrupts_43;
  reg                 pending_interrupts_44;
  reg                 pending_interrupts_45;
  reg                 pending_interrupts_46;
  reg                 pending_interrupts_47;
  reg                 pending_interrupts_48;
  reg                 pending_interrupts_49;
  reg                 pending_interrupts_50;
  reg                 pending_interrupts_51;
  reg                 pending_interrupts_52;
  reg        [63:0]   interrupts_enabled;
  reg        [2:0]    interrupt_threshold;
  reg                 has_interrupt_pending;
  reg        [31:0]   SBPlicLogic_sbDataOutputReg;
  wire       [2:0]    _zz_1;
  wire       [63:0]   _zz_2;
  wire       [63:0]   _zz_3;
  wire       [2:0]    _zz_4;
  wire                _zz_5;
  wire       [2:0]    _zz_6;
  wire                _zz_7;
  wire       [2:0]    _zz_8;
  wire                _zz_9;
  wire       [2:0]    _zz_10;
  wire                _zz_11;
  wire       [2:0]    _zz_12;
  wire                _zz_13;
  wire       [2:0]    _zz_14;
  wire                _zz_15;
  wire       [2:0]    _zz_16;
  wire                _zz_17;
  wire       [2:0]    _zz_18;
  wire                _zz_19;
  wire       [2:0]    _zz_20;
  wire                _zz_21;
  wire       [2:0]    _zz_22;
  wire                _zz_23;
  wire       [2:0]    _zz_24;
  wire                _zz_25;
  wire       [2:0]    _zz_26;
  wire                _zz_27;
  wire       [2:0]    _zz_28;
  wire                _zz_29;
  wire       [2:0]    _zz_30;
  wire                _zz_31;
  wire       [2:0]    _zz_32;
  wire                _zz_33;
  wire       [2:0]    _zz_34;
  wire                _zz_35;
  wire       [2:0]    _zz_36;
  wire                _zz_37;
  wire       [2:0]    _zz_38;
  wire                _zz_39;
  wire       [2:0]    _zz_40;
  wire                _zz_41;
  wire       [2:0]    _zz_42;
  wire                _zz_43;
  wire       [2:0]    _zz_44;
  wire                _zz_45;
  wire       [2:0]    _zz_46;
  wire                _zz_47;
  wire       [2:0]    _zz_48;
  wire                _zz_49;
  wire       [2:0]    _zz_50;
  wire                _zz_51;
  wire       [2:0]    _zz_52;
  wire                _zz_53;
  wire       [2:0]    _zz_54;
  wire                _zz_55;
  wire       [2:0]    _zz_56;
  wire                _zz_57;
  wire       [2:0]    _zz_58;
  wire                _zz_59;
  wire       [2:0]    _zz_60;
  wire                _zz_61;
  wire       [2:0]    _zz_62;
  wire                _zz_63;
  wire       [2:0]    _zz_64;
  wire                _zz_65;
  wire       [2:0]    _zz_66;
  wire                _zz_67;
  wire       [2:0]    _zz_68;
  wire                _zz_69;
  wire       [2:0]    _zz_70;
  wire                _zz_71;
  wire       [2:0]    _zz_72;
  wire                _zz_73;
  wire       [2:0]    _zz_74;
  wire                _zz_75;
  wire       [2:0]    _zz_76;
  wire                _zz_77;
  wire       [2:0]    _zz_78;
  wire                _zz_79;
  wire       [2:0]    _zz_80;
  wire                _zz_81;
  wire       [2:0]    _zz_82;
  wire                _zz_83;
  wire       [2:0]    _zz_84;
  wire                _zz_85;
  wire       [2:0]    _zz_86;
  wire                _zz_87;
  wire       [2:0]    _zz_88;
  wire                _zz_89;
  wire       [2:0]    _zz_90;
  wire                _zz_91;
  wire       [2:0]    _zz_92;
  wire                _zz_93;
  wire       [2:0]    _zz_94;
  wire                _zz_95;
  wire       [2:0]    _zz_96;
  wire                _zz_97;
  wire       [2:0]    _zz_98;
  wire                _zz_99;
  wire       [2:0]    _zz_100;
  wire                _zz_101;
  wire       [2:0]    _zz_102;
  wire                _zz_103;
  wire       [2:0]    _zz_104;
  wire                _zz_105;
  wire       [2:0]    _zz_106;
  wire                _zz_107;
  wire                _zz_108;
  wire                _zz_109;
  wire       [2:0]    _zz_110;
  wire                _zz_111;
  wire                _zz_112;
  wire       [2:0]    _zz_113;
  wire                _zz_114;
  wire                _zz_115;
  wire       [2:0]    _zz_116;
  wire                _zz_117;
  wire                _zz_118;
  wire       [2:0]    _zz_119;
  wire                _zz_120;
  wire                _zz_121;
  wire       [2:0]    _zz_122;
  wire                _zz_123;
  wire                _zz_124;
  wire       [2:0]    _zz_125;
  wire                _zz_126;
  wire                _zz_127;
  wire       [2:0]    _zz_128;
  wire                _zz_129;
  wire                _zz_130;
  wire       [2:0]    _zz_131;
  wire                _zz_132;
  wire                _zz_133;
  wire       [2:0]    _zz_134;
  wire                _zz_135;
  wire                _zz_136;
  wire       [2:0]    _zz_137;
  wire                _zz_138;
  wire                _zz_139;
  wire       [2:0]    _zz_140;
  wire                _zz_141;
  wire                _zz_142;
  wire       [2:0]    _zz_143;
  wire                _zz_144;
  wire                _zz_145;
  wire       [2:0]    _zz_146;
  wire                _zz_147;
  wire                _zz_148;
  wire       [2:0]    _zz_149;
  wire                _zz_150;
  wire                _zz_151;
  wire       [2:0]    _zz_152;
  wire                _zz_153;
  wire                _zz_154;
  wire       [2:0]    _zz_155;
  wire                _zz_156;
  wire                _zz_157;
  wire       [2:0]    _zz_158;
  wire                _zz_159;
  wire                _zz_160;
  wire       [2:0]    _zz_161;
  wire                _zz_162;
  wire                _zz_163;
  wire       [2:0]    _zz_164;
  wire                _zz_165;
  wire                _zz_166;
  wire       [2:0]    _zz_167;
  wire                _zz_168;
  wire                _zz_169;
  wire       [2:0]    _zz_170;
  wire                _zz_171;
  wire                _zz_172;
  wire       [2:0]    _zz_173;
  wire                _zz_174;
  wire                _zz_175;
  wire       [2:0]    _zz_176;
  wire                _zz_177;
  wire                _zz_178;
  wire       [2:0]    _zz_179;
  wire                _zz_180;
  wire                _zz_181;
  wire       [2:0]    _zz_182;
  wire                _zz_183;
  wire                _zz_184;
  wire       [2:0]    _zz_185;
  wire                _zz_186;
  wire                _zz_187;
  wire       [2:0]    _zz_188;
  wire                _zz_189;
  wire                _zz_190;
  wire       [2:0]    _zz_191;
  wire                _zz_192;
  wire                _zz_193;
  wire       [2:0]    _zz_194;
  wire                _zz_195;
  wire                _zz_196;
  wire       [2:0]    _zz_197;
  wire                _zz_198;
  wire                _zz_199;
  wire       [2:0]    _zz_200;
  wire                _zz_201;
  wire                _zz_202;
  wire       [2:0]    _zz_203;
  wire                _zz_204;
  wire                _zz_205;
  wire       [2:0]    _zz_206;
  wire                _zz_207;
  wire                _zz_208;
  wire       [2:0]    _zz_209;
  wire                _zz_210;
  wire                _zz_211;
  wire       [2:0]    _zz_212;
  wire                _zz_213;
  wire                _zz_214;
  wire       [2:0]    _zz_215;
  wire                _zz_216;
  wire                _zz_217;
  wire       [2:0]    _zz_218;
  wire                _zz_219;
  wire                _zz_220;
  wire       [2:0]    _zz_221;
  wire                _zz_222;
  wire                _zz_223;
  wire       [2:0]    _zz_224;
  wire                _zz_225;
  wire                _zz_226;
  wire       [2:0]    _zz_227;
  wire                _zz_228;
  wire                _zz_229;
  wire       [2:0]    _zz_230;
  wire                _zz_231;
  wire                _zz_232;
  wire       [2:0]    _zz_233;
  wire                _zz_234;
  wire                _zz_235;
  wire       [2:0]    _zz_236;
  wire                _zz_237;
  wire                _zz_238;
  wire       [2:0]    _zz_239;
  wire                _zz_240;
  wire                _zz_241;
  wire       [2:0]    _zz_242;
  wire                _zz_243;
  wire                _zz_244;
  wire       [2:0]    _zz_245;
  wire                _zz_246;
  wire                _zz_247;
  wire       [2:0]    _zz_248;
  wire                _zz_249;
  wire                _zz_250;
  wire       [2:0]    _zz_251;
  wire                _zz_252;
  wire                _zz_253;
  wire       [2:0]    _zz_254;
  wire                _zz_255;
  wire                _zz_256;
  wire       [2:0]    _zz_257;
  wire                _zz_258;
  wire                _zz_259;
  wire                _zz_260;
  wire                _zz_261;
  wire       [31:0]   _zz_262;

  assign _zz_264 = (SRC_PRIO_BASE + 24'h0);
  assign _zz_265 = {2'd0, intAddr};
  assign _zz_266 = {2'd0, intAddr};
  assign _zz_267 = (SRC_PRIO_END + 24'h0);
  assign _zz_268 = io_sb_SBwdata[2 : 0];
  assign _zz_269 = (intAddr / 3'b100);
  assign _zz_270 = _zz_269[5:0];
  assign _zz_271 = {2'd0, intAddr};
  assign _zz_272 = (PENDING_ARR_BASE + 24'h0);
  assign _zz_273 = {2'd0, intAddr};
  assign _zz_274 = (HART0_MMODE_INT_EN_BASE + 24'h0);
  assign _zz_275 = ({32'd0,32'hffffffff} <<< 32);
  assign _zz_276 = ({1'd0,_zz_278} <<< 1);
  assign _zz_277 = io_sb_SBwdata[31 : 1];
  assign _zz_278 = {32'd0, _zz_277};
  assign _zz_279 = {2'd0, intAddr};
  assign _zz_280 = (HART0_MMODE_INT_EN_BASE + 24'h000004);
  assign _zz_281 = 32'hffffffff;
  assign _zz_282 = {32'd0, _zz_281};
  assign _zz_283 = ({32'd0,_zz_285} <<< 32);
  assign _zz_284 = io_sb_SBwdata[20 : 0];
  assign _zz_285 = {11'd0, _zz_284};
  assign _zz_286 = {2'd0, intAddr};
  assign _zz_287 = (HART0_MMODE_PRIO_THRES_BASE + 24'h0);
  assign _zz_288 = io_sb_SBwdata[2 : 0];
  assign _zz_289 = {2'd0, intAddr};
  assign _zz_290 = (HART0_MMODE_CLAIM_BASE + 24'h0);
  assign _zz_291 = (_zz_292 & 64'h0000000000000001);
  assign _zz_292 = (interrupts_enabled >>> _zz_294);
  assign _zz_293 = io_sb_SBwdata[31 : 0];
  assign _zz_294 = {32'd0, _zz_293};
  assign _zz_295 = (SRC_PRIO_BASE + 24'h0);
  assign _zz_296 = {2'd0, intAddr};
  assign _zz_297 = {2'd0, intAddr};
  assign _zz_298 = (SRC_PRIO_END + 24'h0);
  assign _zz_299 = _zz_263;
  assign _zz_300 = (intAddr / 3'b100);
  assign _zz_301 = _zz_300[5:0];
  assign _zz_302 = {2'd0, intAddr};
  assign _zz_303 = (PENDING_ARR_BASE + 24'h0);
  assign _zz_304 = _zz_305[31 : 0];
  assign _zz_305 = {pending_interrupts_52,{pending_interrupts_51,{pending_interrupts_50,{pending_interrupts_49,{pending_interrupts_48,{pending_interrupts_47,{pending_interrupts_46,{pending_interrupts_45,{pending_interrupts_44,{pending_interrupts_43,{_zz_478,_zz_479}}}}}}}}}}};
  assign _zz_306 = {2'd0, intAddr};
  assign _zz_307 = (PENDING_ARR_BASE + 24'h000004);
  assign _zz_308 = _zz_309[52 : 32];
  assign _zz_309 = {pending_interrupts_52,{pending_interrupts_51,{pending_interrupts_50,{pending_interrupts_49,{pending_interrupts_48,{pending_interrupts_47,{pending_interrupts_46,{pending_interrupts_45,{pending_interrupts_44,{pending_interrupts_43,{_zz_486,_zz_487}}}}}}}}}}};
  assign _zz_310 = {2'd0, intAddr};
  assign _zz_311 = (HART0_MMODE_INT_EN_BASE + 24'h0);
  assign _zz_312 = {2'd0, intAddr};
  assign _zz_313 = (HART0_MMODE_INT_EN_BASE + 24'h000004);
  assign _zz_314 = (interrupts_enabled >>> 32);
  assign _zz_315 = {2'd0, intAddr};
  assign _zz_316 = (HART0_MMODE_PRIO_THRES_BASE + 24'h0);
  assign _zz_317 = interrupt_threshold;
  assign _zz_318 = {2'd0, intAddr};
  assign _zz_319 = (HART0_MMODE_CLAIM_BASE + 24'h0);
  assign _zz_320 = claim_complete;
  assign _zz_321 = (interrupts_enabled >>> 0);
  assign _zz_322 = (interrupts_enabled >>> 1);
  assign _zz_323 = (interrupts_enabled >>> 2);
  assign _zz_324 = (interrupts_enabled >>> 3);
  assign _zz_325 = (interrupts_enabled >>> 4);
  assign _zz_326 = (interrupts_enabled >>> 5);
  assign _zz_327 = (interrupts_enabled >>> 6);
  assign _zz_328 = (interrupts_enabled >>> 7);
  assign _zz_329 = (interrupts_enabled >>> 8);
  assign _zz_330 = (interrupts_enabled >>> 9);
  assign _zz_331 = (interrupts_enabled >>> 10);
  assign _zz_332 = (interrupts_enabled >>> 11);
  assign _zz_333 = (interrupts_enabled >>> 12);
  assign _zz_334 = (interrupts_enabled >>> 13);
  assign _zz_335 = (interrupts_enabled >>> 14);
  assign _zz_336 = (interrupts_enabled >>> 15);
  assign _zz_337 = (interrupts_enabled >>> 16);
  assign _zz_338 = (interrupts_enabled >>> 17);
  assign _zz_339 = (interrupts_enabled >>> 18);
  assign _zz_340 = (interrupts_enabled >>> 19);
  assign _zz_341 = (interrupts_enabled >>> 20);
  assign _zz_342 = (interrupts_enabled >>> 21);
  assign _zz_343 = (interrupts_enabled >>> 22);
  assign _zz_344 = (interrupts_enabled >>> 23);
  assign _zz_345 = (interrupts_enabled >>> 24);
  assign _zz_346 = (interrupts_enabled >>> 25);
  assign _zz_347 = (interrupts_enabled >>> 26);
  assign _zz_348 = (interrupts_enabled >>> 27);
  assign _zz_349 = (interrupts_enabled >>> 28);
  assign _zz_350 = (interrupts_enabled >>> 29);
  assign _zz_351 = (interrupts_enabled >>> 30);
  assign _zz_352 = (interrupts_enabled >>> 31);
  assign _zz_353 = (interrupts_enabled >>> 32);
  assign _zz_354 = (interrupts_enabled >>> 33);
  assign _zz_355 = (interrupts_enabled >>> 34);
  assign _zz_356 = (interrupts_enabled >>> 35);
  assign _zz_357 = (interrupts_enabled >>> 36);
  assign _zz_358 = (interrupts_enabled >>> 37);
  assign _zz_359 = (interrupts_enabled >>> 38);
  assign _zz_360 = (interrupts_enabled >>> 39);
  assign _zz_361 = (interrupts_enabled >>> 40);
  assign _zz_362 = (interrupts_enabled >>> 41);
  assign _zz_363 = (interrupts_enabled >>> 42);
  assign _zz_364 = (interrupts_enabled >>> 43);
  assign _zz_365 = (interrupts_enabled >>> 44);
  assign _zz_366 = (interrupts_enabled >>> 45);
  assign _zz_367 = (interrupts_enabled >>> 46);
  assign _zz_368 = (interrupts_enabled >>> 47);
  assign _zz_369 = (interrupts_enabled >>> 48);
  assign _zz_370 = (interrupts_enabled >>> 49);
  assign _zz_371 = (interrupts_enabled >>> 50);
  assign _zz_372 = (interrupts_enabled >>> 51);
  assign _zz_373 = (interrupts_enabled >>> 52);
  assign _zz_374 = (1'b0 | 1'b1);
  assign _zz_375 = {31'd0, _zz_374};
  assign _zz_376 = (2'b00 | 2'b10);
  assign _zz_377 = {30'd0, _zz_376};
  assign _zz_378 = (2'b00 | 2'b11);
  assign _zz_379 = {30'd0, _zz_378};
  assign _zz_380 = (3'b000 | 3'b100);
  assign _zz_381 = {29'd0, _zz_380};
  assign _zz_382 = (3'b000 | 3'b101);
  assign _zz_383 = {29'd0, _zz_382};
  assign _zz_384 = (3'b000 | 3'b110);
  assign _zz_385 = {29'd0, _zz_384};
  assign _zz_386 = (3'b000 | 3'b111);
  assign _zz_387 = {29'd0, _zz_386};
  assign _zz_388 = (4'b0000 | 4'b1000);
  assign _zz_389 = {28'd0, _zz_388};
  assign _zz_390 = (4'b0000 | 4'b1001);
  assign _zz_391 = {28'd0, _zz_390};
  assign _zz_392 = (4'b0000 | 4'b1010);
  assign _zz_393 = {28'd0, _zz_392};
  assign _zz_394 = (4'b0000 | 4'b1011);
  assign _zz_395 = {28'd0, _zz_394};
  assign _zz_396 = (4'b0000 | 4'b1100);
  assign _zz_397 = {28'd0, _zz_396};
  assign _zz_398 = (4'b0000 | 4'b1101);
  assign _zz_399 = {28'd0, _zz_398};
  assign _zz_400 = (4'b0000 | 4'b1110);
  assign _zz_401 = {28'd0, _zz_400};
  assign _zz_402 = (4'b0000 | 4'b1111);
  assign _zz_403 = {28'd0, _zz_402};
  assign _zz_404 = (5'h0 | 5'h10);
  assign _zz_405 = {27'd0, _zz_404};
  assign _zz_406 = (5'h0 | 5'h11);
  assign _zz_407 = {27'd0, _zz_406};
  assign _zz_408 = (5'h0 | 5'h12);
  assign _zz_409 = {27'd0, _zz_408};
  assign _zz_410 = (5'h0 | 5'h13);
  assign _zz_411 = {27'd0, _zz_410};
  assign _zz_412 = (5'h0 | 5'h14);
  assign _zz_413 = {27'd0, _zz_412};
  assign _zz_414 = (5'h0 | 5'h15);
  assign _zz_415 = {27'd0, _zz_414};
  assign _zz_416 = (5'h0 | 5'h16);
  assign _zz_417 = {27'd0, _zz_416};
  assign _zz_418 = (5'h0 | 5'h17);
  assign _zz_419 = {27'd0, _zz_418};
  assign _zz_420 = (5'h0 | 5'h18);
  assign _zz_421 = {27'd0, _zz_420};
  assign _zz_422 = (5'h0 | 5'h19);
  assign _zz_423 = {27'd0, _zz_422};
  assign _zz_424 = (5'h0 | 5'h1a);
  assign _zz_425 = {27'd0, _zz_424};
  assign _zz_426 = (5'h0 | 5'h1b);
  assign _zz_427 = {27'd0, _zz_426};
  assign _zz_428 = (5'h0 | 5'h1c);
  assign _zz_429 = {27'd0, _zz_428};
  assign _zz_430 = (5'h0 | 5'h1d);
  assign _zz_431 = {27'd0, _zz_430};
  assign _zz_432 = (5'h0 | 5'h1e);
  assign _zz_433 = {27'd0, _zz_432};
  assign _zz_434 = (5'h0 | 5'h1f);
  assign _zz_435 = {27'd0, _zz_434};
  assign _zz_436 = (6'h0 | 6'h20);
  assign _zz_437 = {26'd0, _zz_436};
  assign _zz_438 = (6'h0 | 6'h21);
  assign _zz_439 = {26'd0, _zz_438};
  assign _zz_440 = (6'h0 | 6'h22);
  assign _zz_441 = {26'd0, _zz_440};
  assign _zz_442 = (6'h0 | 6'h23);
  assign _zz_443 = {26'd0, _zz_442};
  assign _zz_444 = (6'h0 | 6'h24);
  assign _zz_445 = {26'd0, _zz_444};
  assign _zz_446 = (6'h0 | 6'h25);
  assign _zz_447 = {26'd0, _zz_446};
  assign _zz_448 = (6'h0 | 6'h26);
  assign _zz_449 = {26'd0, _zz_448};
  assign _zz_450 = (6'h0 | 6'h27);
  assign _zz_451 = {26'd0, _zz_450};
  assign _zz_452 = (6'h0 | 6'h28);
  assign _zz_453 = {26'd0, _zz_452};
  assign _zz_454 = (6'h0 | 6'h29);
  assign _zz_455 = {26'd0, _zz_454};
  assign _zz_456 = (6'h0 | 6'h2a);
  assign _zz_457 = {26'd0, _zz_456};
  assign _zz_458 = (6'h0 | 6'h2b);
  assign _zz_459 = {26'd0, _zz_458};
  assign _zz_460 = (6'h0 | 6'h2c);
  assign _zz_461 = {26'd0, _zz_460};
  assign _zz_462 = (6'h0 | 6'h2d);
  assign _zz_463 = {26'd0, _zz_462};
  assign _zz_464 = (6'h0 | 6'h2e);
  assign _zz_465 = {26'd0, _zz_464};
  assign _zz_466 = (6'h0 | 6'h2f);
  assign _zz_467 = {26'd0, _zz_466};
  assign _zz_468 = (6'h0 | 6'h30);
  assign _zz_469 = {26'd0, _zz_468};
  assign _zz_470 = (6'h0 | 6'h31);
  assign _zz_471 = {26'd0, _zz_470};
  assign _zz_472 = (6'h0 | 6'h32);
  assign _zz_473 = {26'd0, _zz_472};
  assign _zz_474 = (6'h0 | 6'h33);
  assign _zz_475 = {26'd0, _zz_474};
  assign _zz_476 = (6'h0 | 6'h34);
  assign _zz_477 = {26'd0, _zz_476};
  assign _zz_478 = pending_interrupts_42;
  assign _zz_479 = {pending_interrupts_41,{pending_interrupts_40,{pending_interrupts_39,{pending_interrupts_38,{pending_interrupts_37,{pending_interrupts_36,{pending_interrupts_35,{pending_interrupts_34,{pending_interrupts_33,{pending_interrupts_32,{_zz_480,_zz_481}}}}}}}}}}};
  assign _zz_480 = pending_interrupts_31;
  assign _zz_481 = {pending_interrupts_30,{pending_interrupts_29,{pending_interrupts_28,{pending_interrupts_27,{pending_interrupts_26,{pending_interrupts_25,{pending_interrupts_24,{pending_interrupts_23,{pending_interrupts_22,{pending_interrupts_21,{_zz_482,_zz_483}}}}}}}}}}};
  assign _zz_482 = pending_interrupts_20;
  assign _zz_483 = {pending_interrupts_19,{pending_interrupts_18,{pending_interrupts_17,{pending_interrupts_16,{pending_interrupts_15,{pending_interrupts_14,{pending_interrupts_13,{pending_interrupts_12,{pending_interrupts_11,{pending_interrupts_10,{_zz_484,_zz_485}}}}}}}}}}};
  assign _zz_484 = pending_interrupts_9;
  assign _zz_485 = {pending_interrupts_8,{pending_interrupts_7,{pending_interrupts_6,{pending_interrupts_5,{pending_interrupts_4,{pending_interrupts_3,{pending_interrupts_2,{pending_interrupts_1,pending_interrupts_0}}}}}}}};
  assign _zz_486 = pending_interrupts_42;
  assign _zz_487 = {pending_interrupts_41,{pending_interrupts_40,{pending_interrupts_39,{pending_interrupts_38,{pending_interrupts_37,{pending_interrupts_36,{pending_interrupts_35,{pending_interrupts_34,{pending_interrupts_33,{pending_interrupts_32,{_zz_488,_zz_489}}}}}}}}}}};
  assign _zz_488 = pending_interrupts_31;
  assign _zz_489 = {pending_interrupts_30,{pending_interrupts_29,{pending_interrupts_28,{pending_interrupts_27,{pending_interrupts_26,{pending_interrupts_25,{pending_interrupts_24,{pending_interrupts_23,{pending_interrupts_22,{pending_interrupts_21,{_zz_490,_zz_491}}}}}}}}}}};
  assign _zz_490 = pending_interrupts_20;
  assign _zz_491 = {pending_interrupts_19,{pending_interrupts_18,{pending_interrupts_17,{pending_interrupts_16,{pending_interrupts_15,{pending_interrupts_14,{pending_interrupts_13,{pending_interrupts_12,{pending_interrupts_11,{pending_interrupts_10,{_zz_492,_zz_493}}}}}}}}}}};
  assign _zz_492 = pending_interrupts_9;
  assign _zz_493 = {pending_interrupts_8,{pending_interrupts_7,{pending_interrupts_6,{pending_interrupts_5,{pending_interrupts_4,{pending_interrupts_3,{pending_interrupts_2,{pending_interrupts_1,pending_interrupts_0}}}}}}}};
  assign _zz_494 = (_zz_214 ? (_zz_211 ? (_zz_208 ? (_zz_205 ? (_zz_202 ? (_zz_199 ? (_zz_196 ? (_zz_193 ? (_zz_190 ? (_zz_187 ? (_zz_184 ? (_zz_181 ? (_zz_178 ? (_zz_175 ? (_zz_172 ? (_zz_169 ? _zz_495 : _zz_415) : _zz_417) : _zz_419) : _zz_421) : _zz_423) : _zz_425) : _zz_427) : _zz_429) : _zz_431) : _zz_433) : _zz_435) : _zz_437) : _zz_439) : _zz_441) : _zz_443) : _zz_445);
  assign _zz_495 = (_zz_166 ? (_zz_163 ? (_zz_160 ? (_zz_157 ? (_zz_154 ? (_zz_151 ? (_zz_148 ? (_zz_145 ? (_zz_142 ? (_zz_139 ? (_zz_136 ? (_zz_133 ? (_zz_130 ? (_zz_127 ? (_zz_124 ? (_zz_121 ? _zz_496 : _zz_383) : _zz_385) : _zz_387) : _zz_389) : _zz_391) : _zz_393) : _zz_395) : _zz_397) : _zz_399) : _zz_401) : _zz_403) : _zz_405) : _zz_407) : _zz_409) : _zz_411) : _zz_413);
  assign _zz_496 = (_zz_118 ? (_zz_115 ? (_zz_112 ? (_zz_109 ? 32'h0 : _zz_375) : _zz_377) : _zz_379) : _zz_381);
  always @(*) begin
    case(_zz_301)
      6'b000000 : begin
        _zz_263 = interrupt_priorities_0;
      end
      6'b000001 : begin
        _zz_263 = interrupt_priorities_1;
      end
      6'b000010 : begin
        _zz_263 = interrupt_priorities_2;
      end
      6'b000011 : begin
        _zz_263 = interrupt_priorities_3;
      end
      6'b000100 : begin
        _zz_263 = interrupt_priorities_4;
      end
      6'b000101 : begin
        _zz_263 = interrupt_priorities_5;
      end
      6'b000110 : begin
        _zz_263 = interrupt_priorities_6;
      end
      6'b000111 : begin
        _zz_263 = interrupt_priorities_7;
      end
      6'b001000 : begin
        _zz_263 = interrupt_priorities_8;
      end
      6'b001001 : begin
        _zz_263 = interrupt_priorities_9;
      end
      6'b001010 : begin
        _zz_263 = interrupt_priorities_10;
      end
      6'b001011 : begin
        _zz_263 = interrupt_priorities_11;
      end
      6'b001100 : begin
        _zz_263 = interrupt_priorities_12;
      end
      6'b001101 : begin
        _zz_263 = interrupt_priorities_13;
      end
      6'b001110 : begin
        _zz_263 = interrupt_priorities_14;
      end
      6'b001111 : begin
        _zz_263 = interrupt_priorities_15;
      end
      6'b010000 : begin
        _zz_263 = interrupt_priorities_16;
      end
      6'b010001 : begin
        _zz_263 = interrupt_priorities_17;
      end
      6'b010010 : begin
        _zz_263 = interrupt_priorities_18;
      end
      6'b010011 : begin
        _zz_263 = interrupt_priorities_19;
      end
      6'b010100 : begin
        _zz_263 = interrupt_priorities_20;
      end
      6'b010101 : begin
        _zz_263 = interrupt_priorities_21;
      end
      6'b010110 : begin
        _zz_263 = interrupt_priorities_22;
      end
      6'b010111 : begin
        _zz_263 = interrupt_priorities_23;
      end
      6'b011000 : begin
        _zz_263 = interrupt_priorities_24;
      end
      6'b011001 : begin
        _zz_263 = interrupt_priorities_25;
      end
      6'b011010 : begin
        _zz_263 = interrupt_priorities_26;
      end
      6'b011011 : begin
        _zz_263 = interrupt_priorities_27;
      end
      6'b011100 : begin
        _zz_263 = interrupt_priorities_28;
      end
      6'b011101 : begin
        _zz_263 = interrupt_priorities_29;
      end
      6'b011110 : begin
        _zz_263 = interrupt_priorities_30;
      end
      6'b011111 : begin
        _zz_263 = interrupt_priorities_31;
      end
      6'b100000 : begin
        _zz_263 = interrupt_priorities_32;
      end
      6'b100001 : begin
        _zz_263 = interrupt_priorities_33;
      end
      6'b100010 : begin
        _zz_263 = interrupt_priorities_34;
      end
      6'b100011 : begin
        _zz_263 = interrupt_priorities_35;
      end
      6'b100100 : begin
        _zz_263 = interrupt_priorities_36;
      end
      6'b100101 : begin
        _zz_263 = interrupt_priorities_37;
      end
      6'b100110 : begin
        _zz_263 = interrupt_priorities_38;
      end
      6'b100111 : begin
        _zz_263 = interrupt_priorities_39;
      end
      6'b101000 : begin
        _zz_263 = interrupt_priorities_40;
      end
      6'b101001 : begin
        _zz_263 = interrupt_priorities_41;
      end
      6'b101010 : begin
        _zz_263 = interrupt_priorities_42;
      end
      6'b101011 : begin
        _zz_263 = interrupt_priorities_43;
      end
      6'b101100 : begin
        _zz_263 = interrupt_priorities_44;
      end
      6'b101101 : begin
        _zz_263 = interrupt_priorities_45;
      end
      6'b101110 : begin
        _zz_263 = interrupt_priorities_46;
      end
      6'b101111 : begin
        _zz_263 = interrupt_priorities_47;
      end
      6'b110000 : begin
        _zz_263 = interrupt_priorities_48;
      end
      6'b110001 : begin
        _zz_263 = interrupt_priorities_49;
      end
      6'b110010 : begin
        _zz_263 = interrupt_priorities_50;
      end
      6'b110011 : begin
        _zz_263 = interrupt_priorities_51;
      end
      default : begin
        _zz_263 = interrupt_priorities_52;
      end
    endcase
  end

  assign read = ((io_sb_SBvalid && io_sel) && (! io_sb_SBwrite));
  assign write = ((io_sb_SBvalid && io_sel) && io_sb_SBwrite);
  assign SRC_PRIO_BASE = 24'h000004;
  assign SRC_PRIO_END = 24'h0000d0;
  assign PENDING_ARR_BASE = 24'h001000;
  assign HART0_MMODE_INT_EN_BASE = 24'h002000;
  assign HART0_MMODE_PRIO_THRES_BASE = 24'h200000;
  assign HART0_MMODE_CLAIM_BASE = 24'h200004;
  assign current_irq = 32'h0;
  assign intAddr = io_sb_SBaddress[21 : 0];
  assign _zz_1 = _zz_268;
  assign _zz_2 = ({63'd0,1'b1} <<< _zz_270);
  assign _zz_3 = ({63'd0,1'b1} <<< claim_complete[5 : 0]);
  assign _zz_4 = interrupt_priorities_0;
  assign _zz_5 = (((interrupt_priorities_0 <= interrupt_threshold) && ((_zz_321 & 64'h0000000000000001) == 64'h0000000000000001)) && pending_interrupts_0);
  assign _zz_6 = interrupt_priorities_1;
  assign _zz_7 = (((interrupt_priorities_1 <= interrupt_threshold) && ((_zz_322 & 63'h0000000000000001) == 63'h0000000000000001)) && pending_interrupts_1);
  assign _zz_8 = interrupt_priorities_2;
  assign _zz_9 = (((interrupt_priorities_2 <= interrupt_threshold) && ((_zz_323 & 62'h0000000000000001) == 62'h0000000000000001)) && pending_interrupts_2);
  assign _zz_10 = interrupt_priorities_3;
  assign _zz_11 = (((interrupt_priorities_3 <= interrupt_threshold) && ((_zz_324 & 61'h0000000000000001) == 61'h0000000000000001)) && pending_interrupts_3);
  assign _zz_12 = interrupt_priorities_4;
  assign _zz_13 = (((interrupt_priorities_4 <= interrupt_threshold) && ((_zz_325 & 60'h000000000000001) == 60'h000000000000001)) && pending_interrupts_4);
  assign _zz_14 = interrupt_priorities_5;
  assign _zz_15 = (((interrupt_priorities_5 <= interrupt_threshold) && ((_zz_326 & 59'h000000000000001) == 59'h000000000000001)) && pending_interrupts_5);
  assign _zz_16 = interrupt_priorities_6;
  assign _zz_17 = (((interrupt_priorities_6 <= interrupt_threshold) && ((_zz_327 & 58'h000000000000001) == 58'h000000000000001)) && pending_interrupts_6);
  assign _zz_18 = interrupt_priorities_7;
  assign _zz_19 = (((interrupt_priorities_7 <= interrupt_threshold) && ((_zz_328 & 57'h000000000000001) == 57'h000000000000001)) && pending_interrupts_7);
  assign _zz_20 = interrupt_priorities_8;
  assign _zz_21 = (((interrupt_priorities_8 <= interrupt_threshold) && ((_zz_329 & 56'h00000000000001) == 56'h00000000000001)) && pending_interrupts_8);
  assign _zz_22 = interrupt_priorities_9;
  assign _zz_23 = (((interrupt_priorities_9 <= interrupt_threshold) && ((_zz_330 & 55'h00000000000001) == 55'h00000000000001)) && pending_interrupts_9);
  assign _zz_24 = interrupt_priorities_10;
  assign _zz_25 = (((interrupt_priorities_10 <= interrupt_threshold) && ((_zz_331 & 54'h00000000000001) == 54'h00000000000001)) && pending_interrupts_10);
  assign _zz_26 = interrupt_priorities_11;
  assign _zz_27 = (((interrupt_priorities_11 <= interrupt_threshold) && ((_zz_332 & 53'h00000000000001) == 53'h00000000000001)) && pending_interrupts_11);
  assign _zz_28 = interrupt_priorities_12;
  assign _zz_29 = (((interrupt_priorities_12 <= interrupt_threshold) && ((_zz_333 & 52'h0000000000001) == 52'h0000000000001)) && pending_interrupts_12);
  assign _zz_30 = interrupt_priorities_13;
  assign _zz_31 = (((interrupt_priorities_13 <= interrupt_threshold) && ((_zz_334 & 51'h0000000000001) == 51'h0000000000001)) && pending_interrupts_13);
  assign _zz_32 = interrupt_priorities_14;
  assign _zz_33 = (((interrupt_priorities_14 <= interrupt_threshold) && ((_zz_335 & 50'h0000000000001) == 50'h0000000000001)) && pending_interrupts_14);
  assign _zz_34 = interrupt_priorities_15;
  assign _zz_35 = (((interrupt_priorities_15 <= interrupt_threshold) && ((_zz_336 & 49'h0000000000001) == 49'h0000000000001)) && pending_interrupts_15);
  assign _zz_36 = interrupt_priorities_16;
  assign _zz_37 = (((interrupt_priorities_16 <= interrupt_threshold) && ((_zz_337 & 48'h000000000001) == 48'h000000000001)) && pending_interrupts_16);
  assign _zz_38 = interrupt_priorities_17;
  assign _zz_39 = (((interrupt_priorities_17 <= interrupt_threshold) && ((_zz_338 & 47'h000000000001) == 47'h000000000001)) && pending_interrupts_17);
  assign _zz_40 = interrupt_priorities_18;
  assign _zz_41 = (((interrupt_priorities_18 <= interrupt_threshold) && ((_zz_339 & 46'h000000000001) == 46'h000000000001)) && pending_interrupts_18);
  assign _zz_42 = interrupt_priorities_19;
  assign _zz_43 = (((interrupt_priorities_19 <= interrupt_threshold) && ((_zz_340 & 45'h000000000001) == 45'h000000000001)) && pending_interrupts_19);
  assign _zz_44 = interrupt_priorities_20;
  assign _zz_45 = (((interrupt_priorities_20 <= interrupt_threshold) && ((_zz_341 & 44'h00000000001) == 44'h00000000001)) && pending_interrupts_20);
  assign _zz_46 = interrupt_priorities_21;
  assign _zz_47 = (((interrupt_priorities_21 <= interrupt_threshold) && ((_zz_342 & 43'h00000000001) == 43'h00000000001)) && pending_interrupts_21);
  assign _zz_48 = interrupt_priorities_22;
  assign _zz_49 = (((interrupt_priorities_22 <= interrupt_threshold) && ((_zz_343 & 42'h00000000001) == 42'h00000000001)) && pending_interrupts_22);
  assign _zz_50 = interrupt_priorities_23;
  assign _zz_51 = (((interrupt_priorities_23 <= interrupt_threshold) && ((_zz_344 & 41'h00000000001) == 41'h00000000001)) && pending_interrupts_23);
  assign _zz_52 = interrupt_priorities_24;
  assign _zz_53 = (((interrupt_priorities_24 <= interrupt_threshold) && ((_zz_345 & 40'h0000000001) == 40'h0000000001)) && pending_interrupts_24);
  assign _zz_54 = interrupt_priorities_25;
  assign _zz_55 = (((interrupt_priorities_25 <= interrupt_threshold) && ((_zz_346 & 39'h0000000001) == 39'h0000000001)) && pending_interrupts_25);
  assign _zz_56 = interrupt_priorities_26;
  assign _zz_57 = (((interrupt_priorities_26 <= interrupt_threshold) && ((_zz_347 & 38'h0000000001) == 38'h0000000001)) && pending_interrupts_26);
  assign _zz_58 = interrupt_priorities_27;
  assign _zz_59 = (((interrupt_priorities_27 <= interrupt_threshold) && ((_zz_348 & 37'h0000000001) == 37'h0000000001)) && pending_interrupts_27);
  assign _zz_60 = interrupt_priorities_28;
  assign _zz_61 = (((interrupt_priorities_28 <= interrupt_threshold) && ((_zz_349 & 36'h000000001) == 36'h000000001)) && pending_interrupts_28);
  assign _zz_62 = interrupt_priorities_29;
  assign _zz_63 = (((interrupt_priorities_29 <= interrupt_threshold) && ((_zz_350 & 35'h000000001) == 35'h000000001)) && pending_interrupts_29);
  assign _zz_64 = interrupt_priorities_30;
  assign _zz_65 = (((interrupt_priorities_30 <= interrupt_threshold) && ((_zz_351 & 34'h000000001) == 34'h000000001)) && pending_interrupts_30);
  assign _zz_66 = interrupt_priorities_31;
  assign _zz_67 = (((interrupt_priorities_31 <= interrupt_threshold) && ((_zz_352 & 33'h000000001) == 33'h000000001)) && pending_interrupts_31);
  assign _zz_68 = interrupt_priorities_32;
  assign _zz_69 = (((interrupt_priorities_32 <= interrupt_threshold) && ((_zz_353 & 32'h00000001) == 32'h00000001)) && pending_interrupts_32);
  assign _zz_70 = interrupt_priorities_33;
  assign _zz_71 = (((interrupt_priorities_33 <= interrupt_threshold) && ((_zz_354 & 31'h00000001) == 31'h00000001)) && pending_interrupts_33);
  assign _zz_72 = interrupt_priorities_34;
  assign _zz_73 = (((interrupt_priorities_34 <= interrupt_threshold) && ((_zz_355 & 30'h00000001) == 30'h00000001)) && pending_interrupts_34);
  assign _zz_74 = interrupt_priorities_35;
  assign _zz_75 = (((interrupt_priorities_35 <= interrupt_threshold) && ((_zz_356 & 29'h00000001) == 29'h00000001)) && pending_interrupts_35);
  assign _zz_76 = interrupt_priorities_36;
  assign _zz_77 = (((interrupt_priorities_36 <= interrupt_threshold) && ((_zz_357 & 28'h0000001) == 28'h0000001)) && pending_interrupts_36);
  assign _zz_78 = interrupt_priorities_37;
  assign _zz_79 = (((interrupt_priorities_37 <= interrupt_threshold) && ((_zz_358 & 27'h0000001) == 27'h0000001)) && pending_interrupts_37);
  assign _zz_80 = interrupt_priorities_38;
  assign _zz_81 = (((interrupt_priorities_38 <= interrupt_threshold) && ((_zz_359 & 26'h0000001) == 26'h0000001)) && pending_interrupts_38);
  assign _zz_82 = interrupt_priorities_39;
  assign _zz_83 = (((interrupt_priorities_39 <= interrupt_threshold) && ((_zz_360 & 25'h0000001) == 25'h0000001)) && pending_interrupts_39);
  assign _zz_84 = interrupt_priorities_40;
  assign _zz_85 = (((interrupt_priorities_40 <= interrupt_threshold) && ((_zz_361 & 24'h000001) == 24'h000001)) && pending_interrupts_40);
  assign _zz_86 = interrupt_priorities_41;
  assign _zz_87 = (((interrupt_priorities_41 <= interrupt_threshold) && ((_zz_362 & 23'h000001) == 23'h000001)) && pending_interrupts_41);
  assign _zz_88 = interrupt_priorities_42;
  assign _zz_89 = (((interrupt_priorities_42 <= interrupt_threshold) && ((_zz_363 & 22'h000001) == 22'h000001)) && pending_interrupts_42);
  assign _zz_90 = interrupt_priorities_43;
  assign _zz_91 = (((interrupt_priorities_43 <= interrupt_threshold) && ((_zz_364 & 21'h000001) == 21'h000001)) && pending_interrupts_43);
  assign _zz_92 = interrupt_priorities_44;
  assign _zz_93 = (((interrupt_priorities_44 <= interrupt_threshold) && ((_zz_365 & 20'h00001) == 20'h00001)) && pending_interrupts_44);
  assign _zz_94 = interrupt_priorities_45;
  assign _zz_95 = (((interrupt_priorities_45 <= interrupt_threshold) && ((_zz_366 & 19'h00001) == 19'h00001)) && pending_interrupts_45);
  assign _zz_96 = interrupt_priorities_46;
  assign _zz_97 = (((interrupt_priorities_46 <= interrupt_threshold) && ((_zz_367 & 18'h00001) == 18'h00001)) && pending_interrupts_46);
  assign _zz_98 = interrupt_priorities_47;
  assign _zz_99 = (((interrupt_priorities_47 <= interrupt_threshold) && ((_zz_368 & 17'h00001) == 17'h00001)) && pending_interrupts_47);
  assign _zz_100 = interrupt_priorities_48;
  assign _zz_101 = (((interrupt_priorities_48 <= interrupt_threshold) && ((_zz_369 & 16'h0001) == 16'h0001)) && pending_interrupts_48);
  assign _zz_102 = interrupt_priorities_49;
  assign _zz_103 = (((interrupt_priorities_49 <= interrupt_threshold) && ((_zz_370 & 15'h0001) == 15'h0001)) && pending_interrupts_49);
  assign _zz_104 = interrupt_priorities_50;
  assign _zz_105 = (((interrupt_priorities_50 <= interrupt_threshold) && ((_zz_371 & 14'h0001) == 14'h0001)) && pending_interrupts_50);
  assign _zz_106 = interrupt_priorities_51;
  assign _zz_107 = (((interrupt_priorities_51 <= interrupt_threshold) && ((_zz_372 & 13'h0001) == 13'h0001)) && pending_interrupts_51);
  assign _zz_108 = (((interrupt_priorities_52 <= interrupt_threshold) && ((_zz_373 & 12'h001) == 12'h001)) && pending_interrupts_52);
  assign _zz_109 = ((! _zz_7) || (_zz_5 && (_zz_6 <= _zz_4)));
  assign _zz_110 = (_zz_109 ? _zz_4 : _zz_6);
  assign _zz_111 = (_zz_109 ? _zz_5 : _zz_7);
  assign _zz_112 = ((! _zz_9) || (_zz_111 && (_zz_8 <= _zz_110)));
  assign _zz_113 = (_zz_112 ? _zz_110 : _zz_8);
  assign _zz_114 = (_zz_112 ? _zz_111 : _zz_9);
  assign _zz_115 = ((! _zz_11) || (_zz_114 && (_zz_10 <= _zz_113)));
  assign _zz_116 = (_zz_115 ? _zz_113 : _zz_10);
  assign _zz_117 = (_zz_115 ? _zz_114 : _zz_11);
  assign _zz_118 = ((! _zz_13) || (_zz_117 && (_zz_12 <= _zz_116)));
  assign _zz_119 = (_zz_118 ? _zz_116 : _zz_12);
  assign _zz_120 = (_zz_118 ? _zz_117 : _zz_13);
  assign _zz_121 = ((! _zz_15) || (_zz_120 && (_zz_14 <= _zz_119)));
  assign _zz_122 = (_zz_121 ? _zz_119 : _zz_14);
  assign _zz_123 = (_zz_121 ? _zz_120 : _zz_15);
  assign _zz_124 = ((! _zz_17) || (_zz_123 && (_zz_16 <= _zz_122)));
  assign _zz_125 = (_zz_124 ? _zz_122 : _zz_16);
  assign _zz_126 = (_zz_124 ? _zz_123 : _zz_17);
  assign _zz_127 = ((! _zz_19) || (_zz_126 && (_zz_18 <= _zz_125)));
  assign _zz_128 = (_zz_127 ? _zz_125 : _zz_18);
  assign _zz_129 = (_zz_127 ? _zz_126 : _zz_19);
  assign _zz_130 = ((! _zz_21) || (_zz_129 && (_zz_20 <= _zz_128)));
  assign _zz_131 = (_zz_130 ? _zz_128 : _zz_20);
  assign _zz_132 = (_zz_130 ? _zz_129 : _zz_21);
  assign _zz_133 = ((! _zz_23) || (_zz_132 && (_zz_22 <= _zz_131)));
  assign _zz_134 = (_zz_133 ? _zz_131 : _zz_22);
  assign _zz_135 = (_zz_133 ? _zz_132 : _zz_23);
  assign _zz_136 = ((! _zz_25) || (_zz_135 && (_zz_24 <= _zz_134)));
  assign _zz_137 = (_zz_136 ? _zz_134 : _zz_24);
  assign _zz_138 = (_zz_136 ? _zz_135 : _zz_25);
  assign _zz_139 = ((! _zz_27) || (_zz_138 && (_zz_26 <= _zz_137)));
  assign _zz_140 = (_zz_139 ? _zz_137 : _zz_26);
  assign _zz_141 = (_zz_139 ? _zz_138 : _zz_27);
  assign _zz_142 = ((! _zz_29) || (_zz_141 && (_zz_28 <= _zz_140)));
  assign _zz_143 = (_zz_142 ? _zz_140 : _zz_28);
  assign _zz_144 = (_zz_142 ? _zz_141 : _zz_29);
  assign _zz_145 = ((! _zz_31) || (_zz_144 && (_zz_30 <= _zz_143)));
  assign _zz_146 = (_zz_145 ? _zz_143 : _zz_30);
  assign _zz_147 = (_zz_145 ? _zz_144 : _zz_31);
  assign _zz_148 = ((! _zz_33) || (_zz_147 && (_zz_32 <= _zz_146)));
  assign _zz_149 = (_zz_148 ? _zz_146 : _zz_32);
  assign _zz_150 = (_zz_148 ? _zz_147 : _zz_33);
  assign _zz_151 = ((! _zz_35) || (_zz_150 && (_zz_34 <= _zz_149)));
  assign _zz_152 = (_zz_151 ? _zz_149 : _zz_34);
  assign _zz_153 = (_zz_151 ? _zz_150 : _zz_35);
  assign _zz_154 = ((! _zz_37) || (_zz_153 && (_zz_36 <= _zz_152)));
  assign _zz_155 = (_zz_154 ? _zz_152 : _zz_36);
  assign _zz_156 = (_zz_154 ? _zz_153 : _zz_37);
  assign _zz_157 = ((! _zz_39) || (_zz_156 && (_zz_38 <= _zz_155)));
  assign _zz_158 = (_zz_157 ? _zz_155 : _zz_38);
  assign _zz_159 = (_zz_157 ? _zz_156 : _zz_39);
  assign _zz_160 = ((! _zz_41) || (_zz_159 && (_zz_40 <= _zz_158)));
  assign _zz_161 = (_zz_160 ? _zz_158 : _zz_40);
  assign _zz_162 = (_zz_160 ? _zz_159 : _zz_41);
  assign _zz_163 = ((! _zz_43) || (_zz_162 && (_zz_42 <= _zz_161)));
  assign _zz_164 = (_zz_163 ? _zz_161 : _zz_42);
  assign _zz_165 = (_zz_163 ? _zz_162 : _zz_43);
  assign _zz_166 = ((! _zz_45) || (_zz_165 && (_zz_44 <= _zz_164)));
  assign _zz_167 = (_zz_166 ? _zz_164 : _zz_44);
  assign _zz_168 = (_zz_166 ? _zz_165 : _zz_45);
  assign _zz_169 = ((! _zz_47) || (_zz_168 && (_zz_46 <= _zz_167)));
  assign _zz_170 = (_zz_169 ? _zz_167 : _zz_46);
  assign _zz_171 = (_zz_169 ? _zz_168 : _zz_47);
  assign _zz_172 = ((! _zz_49) || (_zz_171 && (_zz_48 <= _zz_170)));
  assign _zz_173 = (_zz_172 ? _zz_170 : _zz_48);
  assign _zz_174 = (_zz_172 ? _zz_171 : _zz_49);
  assign _zz_175 = ((! _zz_51) || (_zz_174 && (_zz_50 <= _zz_173)));
  assign _zz_176 = (_zz_175 ? _zz_173 : _zz_50);
  assign _zz_177 = (_zz_175 ? _zz_174 : _zz_51);
  assign _zz_178 = ((! _zz_53) || (_zz_177 && (_zz_52 <= _zz_176)));
  assign _zz_179 = (_zz_178 ? _zz_176 : _zz_52);
  assign _zz_180 = (_zz_178 ? _zz_177 : _zz_53);
  assign _zz_181 = ((! _zz_55) || (_zz_180 && (_zz_54 <= _zz_179)));
  assign _zz_182 = (_zz_181 ? _zz_179 : _zz_54);
  assign _zz_183 = (_zz_181 ? _zz_180 : _zz_55);
  assign _zz_184 = ((! _zz_57) || (_zz_183 && (_zz_56 <= _zz_182)));
  assign _zz_185 = (_zz_184 ? _zz_182 : _zz_56);
  assign _zz_186 = (_zz_184 ? _zz_183 : _zz_57);
  assign _zz_187 = ((! _zz_59) || (_zz_186 && (_zz_58 <= _zz_185)));
  assign _zz_188 = (_zz_187 ? _zz_185 : _zz_58);
  assign _zz_189 = (_zz_187 ? _zz_186 : _zz_59);
  assign _zz_190 = ((! _zz_61) || (_zz_189 && (_zz_60 <= _zz_188)));
  assign _zz_191 = (_zz_190 ? _zz_188 : _zz_60);
  assign _zz_192 = (_zz_190 ? _zz_189 : _zz_61);
  assign _zz_193 = ((! _zz_63) || (_zz_192 && (_zz_62 <= _zz_191)));
  assign _zz_194 = (_zz_193 ? _zz_191 : _zz_62);
  assign _zz_195 = (_zz_193 ? _zz_192 : _zz_63);
  assign _zz_196 = ((! _zz_65) || (_zz_195 && (_zz_64 <= _zz_194)));
  assign _zz_197 = (_zz_196 ? _zz_194 : _zz_64);
  assign _zz_198 = (_zz_196 ? _zz_195 : _zz_65);
  assign _zz_199 = ((! _zz_67) || (_zz_198 && (_zz_66 <= _zz_197)));
  assign _zz_200 = (_zz_199 ? _zz_197 : _zz_66);
  assign _zz_201 = (_zz_199 ? _zz_198 : _zz_67);
  assign _zz_202 = ((! _zz_69) || (_zz_201 && (_zz_68 <= _zz_200)));
  assign _zz_203 = (_zz_202 ? _zz_200 : _zz_68);
  assign _zz_204 = (_zz_202 ? _zz_201 : _zz_69);
  assign _zz_205 = ((! _zz_71) || (_zz_204 && (_zz_70 <= _zz_203)));
  assign _zz_206 = (_zz_205 ? _zz_203 : _zz_70);
  assign _zz_207 = (_zz_205 ? _zz_204 : _zz_71);
  assign _zz_208 = ((! _zz_73) || (_zz_207 && (_zz_72 <= _zz_206)));
  assign _zz_209 = (_zz_208 ? _zz_206 : _zz_72);
  assign _zz_210 = (_zz_208 ? _zz_207 : _zz_73);
  assign _zz_211 = ((! _zz_75) || (_zz_210 && (_zz_74 <= _zz_209)));
  assign _zz_212 = (_zz_211 ? _zz_209 : _zz_74);
  assign _zz_213 = (_zz_211 ? _zz_210 : _zz_75);
  assign _zz_214 = ((! _zz_77) || (_zz_213 && (_zz_76 <= _zz_212)));
  assign _zz_215 = (_zz_214 ? _zz_212 : _zz_76);
  assign _zz_216 = (_zz_214 ? _zz_213 : _zz_77);
  assign _zz_217 = ((! _zz_79) || (_zz_216 && (_zz_78 <= _zz_215)));
  assign _zz_218 = (_zz_217 ? _zz_215 : _zz_78);
  assign _zz_219 = (_zz_217 ? _zz_216 : _zz_79);
  assign _zz_220 = ((! _zz_81) || (_zz_219 && (_zz_80 <= _zz_218)));
  assign _zz_221 = (_zz_220 ? _zz_218 : _zz_80);
  assign _zz_222 = (_zz_220 ? _zz_219 : _zz_81);
  assign _zz_223 = ((! _zz_83) || (_zz_222 && (_zz_82 <= _zz_221)));
  assign _zz_224 = (_zz_223 ? _zz_221 : _zz_82);
  assign _zz_225 = (_zz_223 ? _zz_222 : _zz_83);
  assign _zz_226 = ((! _zz_85) || (_zz_225 && (_zz_84 <= _zz_224)));
  assign _zz_227 = (_zz_226 ? _zz_224 : _zz_84);
  assign _zz_228 = (_zz_226 ? _zz_225 : _zz_85);
  assign _zz_229 = ((! _zz_87) || (_zz_228 && (_zz_86 <= _zz_227)));
  assign _zz_230 = (_zz_229 ? _zz_227 : _zz_86);
  assign _zz_231 = (_zz_229 ? _zz_228 : _zz_87);
  assign _zz_232 = ((! _zz_89) || (_zz_231 && (_zz_88 <= _zz_230)));
  assign _zz_233 = (_zz_232 ? _zz_230 : _zz_88);
  assign _zz_234 = (_zz_232 ? _zz_231 : _zz_89);
  assign _zz_235 = ((! _zz_91) || (_zz_234 && (_zz_90 <= _zz_233)));
  assign _zz_236 = (_zz_235 ? _zz_233 : _zz_90);
  assign _zz_237 = (_zz_235 ? _zz_234 : _zz_91);
  assign _zz_238 = ((! _zz_93) || (_zz_237 && (_zz_92 <= _zz_236)));
  assign _zz_239 = (_zz_238 ? _zz_236 : _zz_92);
  assign _zz_240 = (_zz_238 ? _zz_237 : _zz_93);
  assign _zz_241 = ((! _zz_95) || (_zz_240 && (_zz_94 <= _zz_239)));
  assign _zz_242 = (_zz_241 ? _zz_239 : _zz_94);
  assign _zz_243 = (_zz_241 ? _zz_240 : _zz_95);
  assign _zz_244 = ((! _zz_97) || (_zz_243 && (_zz_96 <= _zz_242)));
  assign _zz_245 = (_zz_244 ? _zz_242 : _zz_96);
  assign _zz_246 = (_zz_244 ? _zz_243 : _zz_97);
  assign _zz_247 = ((! _zz_99) || (_zz_246 && (_zz_98 <= _zz_245)));
  assign _zz_248 = (_zz_247 ? _zz_245 : _zz_98);
  assign _zz_249 = (_zz_247 ? _zz_246 : _zz_99);
  assign _zz_250 = ((! _zz_101) || (_zz_249 && (_zz_100 <= _zz_248)));
  assign _zz_251 = (_zz_250 ? _zz_248 : _zz_100);
  assign _zz_252 = (_zz_250 ? _zz_249 : _zz_101);
  assign _zz_253 = ((! _zz_103) || (_zz_252 && (_zz_102 <= _zz_251)));
  assign _zz_254 = (_zz_253 ? _zz_251 : _zz_102);
  assign _zz_255 = (_zz_253 ? _zz_252 : _zz_103);
  assign _zz_256 = ((! _zz_105) || (_zz_255 && (_zz_104 <= _zz_254)));
  assign _zz_257 = (_zz_256 ? _zz_254 : _zz_104);
  assign _zz_258 = (_zz_256 ? _zz_255 : _zz_105);
  assign _zz_259 = ((! _zz_107) || (_zz_258 && (_zz_106 <= _zz_257)));
  assign _zz_260 = (_zz_259 ? _zz_258 : _zz_107);
  assign _zz_261 = ((! _zz_108) || (_zz_260 && (interrupt_priorities_52 <= (_zz_259 ? _zz_257 : _zz_106))));
  assign _zz_262 = (_zz_261 ? (_zz_259 ? (_zz_256 ? (_zz_253 ? (_zz_250 ? (_zz_247 ? (_zz_244 ? (_zz_241 ? (_zz_238 ? (_zz_235 ? (_zz_232 ? (_zz_229 ? (_zz_226 ? (_zz_223 ? (_zz_220 ? (_zz_217 ? _zz_494 : _zz_447) : _zz_449) : _zz_451) : _zz_453) : _zz_455) : _zz_457) : _zz_459) : _zz_461) : _zz_463) : _zz_465) : _zz_467) : _zz_469) : _zz_471) : _zz_473) : _zz_475) : _zz_477);
  assign io_sb_SBready = rdy;
  assign io_sb_SBrdata = SBPlicLogic_sbDataOutputReg;
  assign io_irq_pending = has_interrupt_pending;
  always @ (posedge clk or posedge reset) begin
    if (reset) begin
      rdy <= 1'b0;
      claim_complete <= 32'h0;
      interrupt_priorities_0 <= 3'b000;
      interrupt_priorities_1 <= 3'b000;
      interrupt_priorities_2 <= 3'b000;
      interrupt_priorities_3 <= 3'b000;
      interrupt_priorities_4 <= 3'b000;
      interrupt_priorities_5 <= 3'b000;
      interrupt_priorities_6 <= 3'b000;
      interrupt_priorities_7 <= 3'b000;
      interrupt_priorities_8 <= 3'b000;
      interrupt_priorities_9 <= 3'b000;
      interrupt_priorities_10 <= 3'b000;
      interrupt_priorities_11 <= 3'b000;
      interrupt_priorities_12 <= 3'b000;
      interrupt_priorities_13 <= 3'b000;
      interrupt_priorities_14 <= 3'b000;
      interrupt_priorities_15 <= 3'b000;
      interrupt_priorities_16 <= 3'b000;
      interrupt_priorities_17 <= 3'b000;
      interrupt_priorities_18 <= 3'b000;
      interrupt_priorities_19 <= 3'b000;
      interrupt_priorities_20 <= 3'b000;
      interrupt_priorities_21 <= 3'b000;
      interrupt_priorities_22 <= 3'b000;
      interrupt_priorities_23 <= 3'b000;
      interrupt_priorities_24 <= 3'b000;
      interrupt_priorities_25 <= 3'b000;
      interrupt_priorities_26 <= 3'b000;
      interrupt_priorities_27 <= 3'b000;
      interrupt_priorities_28 <= 3'b000;
      interrupt_priorities_29 <= 3'b000;
      interrupt_priorities_30 <= 3'b000;
      interrupt_priorities_31 <= 3'b000;
      interrupt_priorities_32 <= 3'b000;
      interrupt_priorities_33 <= 3'b000;
      interrupt_priorities_34 <= 3'b000;
      interrupt_priorities_35 <= 3'b000;
      interrupt_priorities_36 <= 3'b000;
      interrupt_priorities_37 <= 3'b000;
      interrupt_priorities_38 <= 3'b000;
      interrupt_priorities_39 <= 3'b000;
      interrupt_priorities_40 <= 3'b000;
      interrupt_priorities_41 <= 3'b000;
      interrupt_priorities_42 <= 3'b000;
      interrupt_priorities_43 <= 3'b000;
      interrupt_priorities_44 <= 3'b000;
      interrupt_priorities_45 <= 3'b000;
      interrupt_priorities_46 <= 3'b000;
      interrupt_priorities_47 <= 3'b000;
      interrupt_priorities_48 <= 3'b000;
      interrupt_priorities_49 <= 3'b000;
      interrupt_priorities_50 <= 3'b000;
      interrupt_priorities_51 <= 3'b000;
      interrupt_priorities_52 <= 3'b000;
      pending_interrupts_0 <= 1'b0;
      pending_interrupts_1 <= 1'b0;
      pending_interrupts_2 <= 1'b0;
      pending_interrupts_3 <= 1'b0;
      pending_interrupts_4 <= 1'b0;
      pending_interrupts_5 <= 1'b0;
      pending_interrupts_6 <= 1'b0;
      pending_interrupts_7 <= 1'b0;
      pending_interrupts_8 <= 1'b0;
      pending_interrupts_9 <= 1'b0;
      pending_interrupts_10 <= 1'b0;
      pending_interrupts_11 <= 1'b0;
      pending_interrupts_12 <= 1'b0;
      pending_interrupts_13 <= 1'b0;
      pending_interrupts_14 <= 1'b0;
      pending_interrupts_15 <= 1'b0;
      pending_interrupts_16 <= 1'b0;
      pending_interrupts_17 <= 1'b0;
      pending_interrupts_18 <= 1'b0;
      pending_interrupts_19 <= 1'b0;
      pending_interrupts_20 <= 1'b0;
      pending_interrupts_21 <= 1'b0;
      pending_interrupts_22 <= 1'b0;
      pending_interrupts_23 <= 1'b0;
      pending_interrupts_24 <= 1'b0;
      pending_interrupts_25 <= 1'b0;
      pending_interrupts_26 <= 1'b0;
      pending_interrupts_27 <= 1'b0;
      pending_interrupts_28 <= 1'b0;
      pending_interrupts_29 <= 1'b0;
      pending_interrupts_30 <= 1'b0;
      pending_interrupts_31 <= 1'b0;
      pending_interrupts_32 <= 1'b0;
      pending_interrupts_33 <= 1'b0;
      pending_interrupts_34 <= 1'b0;
      pending_interrupts_35 <= 1'b0;
      pending_interrupts_36 <= 1'b0;
      pending_interrupts_37 <= 1'b0;
      pending_interrupts_38 <= 1'b0;
      pending_interrupts_39 <= 1'b0;
      pending_interrupts_40 <= 1'b0;
      pending_interrupts_41 <= 1'b0;
      pending_interrupts_42 <= 1'b0;
      pending_interrupts_43 <= 1'b0;
      pending_interrupts_44 <= 1'b0;
      pending_interrupts_45 <= 1'b0;
      pending_interrupts_46 <= 1'b0;
      pending_interrupts_47 <= 1'b0;
      pending_interrupts_48 <= 1'b0;
      pending_interrupts_49 <= 1'b0;
      pending_interrupts_50 <= 1'b0;
      pending_interrupts_51 <= 1'b0;
      pending_interrupts_52 <= 1'b0;
      interrupts_enabled <= 64'h0;
      interrupt_threshold <= 3'b111;
      has_interrupt_pending <= 1'b0;
      SBPlicLogic_sbDataOutputReg <= 32'h0;
    end else begin
      if(io_has_pending_irq_0)begin
        pending_interrupts_0 <= 1'b1;
      end
      if(io_has_pending_irq_1)begin
        pending_interrupts_1 <= 1'b1;
      end
      if(io_has_pending_irq_2)begin
        pending_interrupts_2 <= 1'b1;
      end
      if(io_has_pending_irq_3)begin
        pending_interrupts_3 <= 1'b1;
      end
      if(io_has_pending_irq_4)begin
        pending_interrupts_4 <= 1'b1;
      end
      if(io_has_pending_irq_5)begin
        pending_interrupts_5 <= 1'b1;
      end
      if(io_has_pending_irq_6)begin
        pending_interrupts_6 <= 1'b1;
      end
      if(io_has_pending_irq_7)begin
        pending_interrupts_7 <= 1'b1;
      end
      if(io_has_pending_irq_8)begin
        pending_interrupts_8 <= 1'b1;
      end
      if(io_has_pending_irq_9)begin
        pending_interrupts_9 <= 1'b1;
      end
      if(io_has_pending_irq_10)begin
        pending_interrupts_10 <= 1'b1;
      end
      if(io_has_pending_irq_11)begin
        pending_interrupts_11 <= 1'b1;
      end
      if(io_has_pending_irq_12)begin
        pending_interrupts_12 <= 1'b1;
      end
      if(io_has_pending_irq_13)begin
        pending_interrupts_13 <= 1'b1;
      end
      if(io_has_pending_irq_14)begin
        pending_interrupts_14 <= 1'b1;
      end
      if(io_has_pending_irq_15)begin
        pending_interrupts_15 <= 1'b1;
      end
      if(io_has_pending_irq_16)begin
        pending_interrupts_16 <= 1'b1;
      end
      if(io_has_pending_irq_17)begin
        pending_interrupts_17 <= 1'b1;
      end
      if(io_has_pending_irq_18)begin
        pending_interrupts_18 <= 1'b1;
      end
      if(io_has_pending_irq_19)begin
        pending_interrupts_19 <= 1'b1;
      end
      if(io_has_pending_irq_20)begin
        pending_interrupts_20 <= 1'b1;
      end
      if(io_has_pending_irq_21)begin
        pending_interrupts_21 <= 1'b1;
      end
      if(io_has_pending_irq_22)begin
        pending_interrupts_22 <= 1'b1;
      end
      if(io_has_pending_irq_23)begin
        pending_interrupts_23 <= 1'b1;
      end
      if(io_has_pending_irq_24)begin
        pending_interrupts_24 <= 1'b1;
      end
      if(io_has_pending_irq_25)begin
        pending_interrupts_25 <= 1'b1;
      end
      if(io_has_pending_irq_26)begin
        pending_interrupts_26 <= 1'b1;
      end
      if(io_has_pending_irq_27)begin
        pending_interrupts_27 <= 1'b1;
      end
      if(io_has_pending_irq_28)begin
        pending_interrupts_28 <= 1'b1;
      end
      if(io_has_pending_irq_29)begin
        pending_interrupts_29 <= 1'b1;
      end
      if(io_has_pending_irq_30)begin
        pending_interrupts_30 <= 1'b1;
      end
      if(io_has_pending_irq_31)begin
        pending_interrupts_31 <= 1'b1;
      end
      if(io_has_pending_irq_32)begin
        pending_interrupts_32 <= 1'b1;
      end
      if(io_has_pending_irq_33)begin
        pending_interrupts_33 <= 1'b1;
      end
      if(io_has_pending_irq_34)begin
        pending_interrupts_34 <= 1'b1;
      end
      if(io_has_pending_irq_35)begin
        pending_interrupts_35 <= 1'b1;
      end
      if(io_has_pending_irq_36)begin
        pending_interrupts_36 <= 1'b1;
      end
      if(io_has_pending_irq_37)begin
        pending_interrupts_37 <= 1'b1;
      end
      if(io_has_pending_irq_38)begin
        pending_interrupts_38 <= 1'b1;
      end
      if(io_has_pending_irq_39)begin
        pending_interrupts_39 <= 1'b1;
      end
      if(io_has_pending_irq_40)begin
        pending_interrupts_40 <= 1'b1;
      end
      if(io_has_pending_irq_41)begin
        pending_interrupts_41 <= 1'b1;
      end
      if(io_has_pending_irq_42)begin
        pending_interrupts_42 <= 1'b1;
      end
      if(io_has_pending_irq_43)begin
        pending_interrupts_43 <= 1'b1;
      end
      if(io_has_pending_irq_44)begin
        pending_interrupts_44 <= 1'b1;
      end
      if(io_has_pending_irq_45)begin
        pending_interrupts_45 <= 1'b1;
      end
      if(io_has_pending_irq_46)begin
        pending_interrupts_46 <= 1'b1;
      end
      if(io_has_pending_irq_47)begin
        pending_interrupts_47 <= 1'b1;
      end
      if(io_has_pending_irq_48)begin
        pending_interrupts_48 <= 1'b1;
      end
      if(io_has_pending_irq_49)begin
        pending_interrupts_49 <= 1'b1;
      end
      if(io_has_pending_irq_50)begin
        pending_interrupts_50 <= 1'b1;
      end
      if(io_has_pending_irq_51)begin
        pending_interrupts_51 <= 1'b1;
      end
      if(io_has_pending_irq_52)begin
        pending_interrupts_52 <= 1'b1;
      end
      if(write)begin
        if(((_zz_264 <= _zz_265) && (_zz_266 <= _zz_267)))begin
          if(_zz_2[0])begin
            interrupt_priorities_0 <= _zz_1;
          end
          if(_zz_2[1])begin
            interrupt_priorities_1 <= _zz_1;
          end
          if(_zz_2[2])begin
            interrupt_priorities_2 <= _zz_1;
          end
          if(_zz_2[3])begin
            interrupt_priorities_3 <= _zz_1;
          end
          if(_zz_2[4])begin
            interrupt_priorities_4 <= _zz_1;
          end
          if(_zz_2[5])begin
            interrupt_priorities_5 <= _zz_1;
          end
          if(_zz_2[6])begin
            interrupt_priorities_6 <= _zz_1;
          end
          if(_zz_2[7])begin
            interrupt_priorities_7 <= _zz_1;
          end
          if(_zz_2[8])begin
            interrupt_priorities_8 <= _zz_1;
          end
          if(_zz_2[9])begin
            interrupt_priorities_9 <= _zz_1;
          end
          if(_zz_2[10])begin
            interrupt_priorities_10 <= _zz_1;
          end
          if(_zz_2[11])begin
            interrupt_priorities_11 <= _zz_1;
          end
          if(_zz_2[12])begin
            interrupt_priorities_12 <= _zz_1;
          end
          if(_zz_2[13])begin
            interrupt_priorities_13 <= _zz_1;
          end
          if(_zz_2[14])begin
            interrupt_priorities_14 <= _zz_1;
          end
          if(_zz_2[15])begin
            interrupt_priorities_15 <= _zz_1;
          end
          if(_zz_2[16])begin
            interrupt_priorities_16 <= _zz_1;
          end
          if(_zz_2[17])begin
            interrupt_priorities_17 <= _zz_1;
          end
          if(_zz_2[18])begin
            interrupt_priorities_18 <= _zz_1;
          end
          if(_zz_2[19])begin
            interrupt_priorities_19 <= _zz_1;
          end
          if(_zz_2[20])begin
            interrupt_priorities_20 <= _zz_1;
          end
          if(_zz_2[21])begin
            interrupt_priorities_21 <= _zz_1;
          end
          if(_zz_2[22])begin
            interrupt_priorities_22 <= _zz_1;
          end
          if(_zz_2[23])begin
            interrupt_priorities_23 <= _zz_1;
          end
          if(_zz_2[24])begin
            interrupt_priorities_24 <= _zz_1;
          end
          if(_zz_2[25])begin
            interrupt_priorities_25 <= _zz_1;
          end
          if(_zz_2[26])begin
            interrupt_priorities_26 <= _zz_1;
          end
          if(_zz_2[27])begin
            interrupt_priorities_27 <= _zz_1;
          end
          if(_zz_2[28])begin
            interrupt_priorities_28 <= _zz_1;
          end
          if(_zz_2[29])begin
            interrupt_priorities_29 <= _zz_1;
          end
          if(_zz_2[30])begin
            interrupt_priorities_30 <= _zz_1;
          end
          if(_zz_2[31])begin
            interrupt_priorities_31 <= _zz_1;
          end
          if(_zz_2[32])begin
            interrupt_priorities_32 <= _zz_1;
          end
          if(_zz_2[33])begin
            interrupt_priorities_33 <= _zz_1;
          end
          if(_zz_2[34])begin
            interrupt_priorities_34 <= _zz_1;
          end
          if(_zz_2[35])begin
            interrupt_priorities_35 <= _zz_1;
          end
          if(_zz_2[36])begin
            interrupt_priorities_36 <= _zz_1;
          end
          if(_zz_2[37])begin
            interrupt_priorities_37 <= _zz_1;
          end
          if(_zz_2[38])begin
            interrupt_priorities_38 <= _zz_1;
          end
          if(_zz_2[39])begin
            interrupt_priorities_39 <= _zz_1;
          end
          if(_zz_2[40])begin
            interrupt_priorities_40 <= _zz_1;
          end
          if(_zz_2[41])begin
            interrupt_priorities_41 <= _zz_1;
          end
          if(_zz_2[42])begin
            interrupt_priorities_42 <= _zz_1;
          end
          if(_zz_2[43])begin
            interrupt_priorities_43 <= _zz_1;
          end
          if(_zz_2[44])begin
            interrupt_priorities_44 <= _zz_1;
          end
          if(_zz_2[45])begin
            interrupt_priorities_45 <= _zz_1;
          end
          if(_zz_2[46])begin
            interrupt_priorities_46 <= _zz_1;
          end
          if(_zz_2[47])begin
            interrupt_priorities_47 <= _zz_1;
          end
          if(_zz_2[48])begin
            interrupt_priorities_48 <= _zz_1;
          end
          if(_zz_2[49])begin
            interrupt_priorities_49 <= _zz_1;
          end
          if(_zz_2[50])begin
            interrupt_priorities_50 <= _zz_1;
          end
          if(_zz_2[51])begin
            interrupt_priorities_51 <= _zz_1;
          end
          if(_zz_2[52])begin
            interrupt_priorities_52 <= _zz_1;
          end
        end else begin
          if(! (_zz_271 == _zz_272)) begin
            if((_zz_273 == _zz_274))begin
              interrupts_enabled <= ((interrupts_enabled & _zz_275) | _zz_276);
            end else begin
              if((_zz_279 == _zz_280))begin
                interrupts_enabled <= ((interrupts_enabled & _zz_282) | _zz_283);
              end else begin
                if((_zz_286 == _zz_287))begin
                  interrupt_threshold <= _zz_288;
                end else begin
                  if((_zz_289 == _zz_290))begin
                    if(_zz_291[0])begin
                      claim_complete <= 32'h0;
                      has_interrupt_pending <= 1'b0;
                    end
                  end
                end
              end
            end
          end
        end
      end else begin
        if(read)begin
          if(((_zz_295 <= _zz_296) && (_zz_297 <= _zz_298)))begin
            SBPlicLogic_sbDataOutputReg <= {29'd0, _zz_299};
          end else begin
            if((_zz_302 == _zz_303))begin
              SBPlicLogic_sbDataOutputReg <= _zz_304;
            end else begin
              if((_zz_306 == _zz_307))begin
                SBPlicLogic_sbDataOutputReg <= {11'd0, _zz_308};
              end else begin
                if((_zz_310 == _zz_311))begin
                  SBPlicLogic_sbDataOutputReg <= interrupts_enabled[31:0];
                end else begin
                  if((_zz_312 == _zz_313))begin
                    SBPlicLogic_sbDataOutputReg <= _zz_314;
                  end else begin
                    if((_zz_315 == _zz_316))begin
                      SBPlicLogic_sbDataOutputReg <= {29'd0, _zz_317};
                    end else begin
                      if((_zz_318 == _zz_319))begin
                        if((! (claim_complete == 32'h0)))begin
                          if(_zz_3[0])begin
                            pending_interrupts_0 <= 1'b0;
                          end
                          if(_zz_3[1])begin
                            pending_interrupts_1 <= 1'b0;
                          end
                          if(_zz_3[2])begin
                            pending_interrupts_2 <= 1'b0;
                          end
                          if(_zz_3[3])begin
                            pending_interrupts_3 <= 1'b0;
                          end
                          if(_zz_3[4])begin
                            pending_interrupts_4 <= 1'b0;
                          end
                          if(_zz_3[5])begin
                            pending_interrupts_5 <= 1'b0;
                          end
                          if(_zz_3[6])begin
                            pending_interrupts_6 <= 1'b0;
                          end
                          if(_zz_3[7])begin
                            pending_interrupts_7 <= 1'b0;
                          end
                          if(_zz_3[8])begin
                            pending_interrupts_8 <= 1'b0;
                          end
                          if(_zz_3[9])begin
                            pending_interrupts_9 <= 1'b0;
                          end
                          if(_zz_3[10])begin
                            pending_interrupts_10 <= 1'b0;
                          end
                          if(_zz_3[11])begin
                            pending_interrupts_11 <= 1'b0;
                          end
                          if(_zz_3[12])begin
                            pending_interrupts_12 <= 1'b0;
                          end
                          if(_zz_3[13])begin
                            pending_interrupts_13 <= 1'b0;
                          end
                          if(_zz_3[14])begin
                            pending_interrupts_14 <= 1'b0;
                          end
                          if(_zz_3[15])begin
                            pending_interrupts_15 <= 1'b0;
                          end
                          if(_zz_3[16])begin
                            pending_interrupts_16 <= 1'b0;
                          end
                          if(_zz_3[17])begin
                            pending_interrupts_17 <= 1'b0;
                          end
                          if(_zz_3[18])begin
                            pending_interrupts_18 <= 1'b0;
                          end
                          if(_zz_3[19])begin
                            pending_interrupts_19 <= 1'b0;
                          end
                          if(_zz_3[20])begin
                            pending_interrupts_20 <= 1'b0;
                          end
                          if(_zz_3[21])begin
                            pending_interrupts_21 <= 1'b0;
                          end
                          if(_zz_3[22])begin
                            pending_interrupts_22 <= 1'b0;
                          end
                          if(_zz_3[23])begin
                            pending_interrupts_23 <= 1'b0;
                          end
                          if(_zz_3[24])begin
                            pending_interrupts_24 <= 1'b0;
                          end
                          if(_zz_3[25])begin
                            pending_interrupts_25 <= 1'b0;
                          end
                          if(_zz_3[26])begin
                            pending_interrupts_26 <= 1'b0;
                          end
                          if(_zz_3[27])begin
                            pending_interrupts_27 <= 1'b0;
                          end
                          if(_zz_3[28])begin
                            pending_interrupts_28 <= 1'b0;
                          end
                          if(_zz_3[29])begin
                            pending_interrupts_29 <= 1'b0;
                          end
                          if(_zz_3[30])begin
                            pending_interrupts_30 <= 1'b0;
                          end
                          if(_zz_3[31])begin
                            pending_interrupts_31 <= 1'b0;
                          end
                          if(_zz_3[32])begin
                            pending_interrupts_32 <= 1'b0;
                          end
                          if(_zz_3[33])begin
                            pending_interrupts_33 <= 1'b0;
                          end
                          if(_zz_3[34])begin
                            pending_interrupts_34 <= 1'b0;
                          end
                          if(_zz_3[35])begin
                            pending_interrupts_35 <= 1'b0;
                          end
                          if(_zz_3[36])begin
                            pending_interrupts_36 <= 1'b0;
                          end
                          if(_zz_3[37])begin
                            pending_interrupts_37 <= 1'b0;
                          end
                          if(_zz_3[38])begin
                            pending_interrupts_38 <= 1'b0;
                          end
                          if(_zz_3[39])begin
                            pending_interrupts_39 <= 1'b0;
                          end
                          if(_zz_3[40])begin
                            pending_interrupts_40 <= 1'b0;
                          end
                          if(_zz_3[41])begin
                            pending_interrupts_41 <= 1'b0;
                          end
                          if(_zz_3[42])begin
                            pending_interrupts_42 <= 1'b0;
                          end
                          if(_zz_3[43])begin
                            pending_interrupts_43 <= 1'b0;
                          end
                          if(_zz_3[44])begin
                            pending_interrupts_44 <= 1'b0;
                          end
                          if(_zz_3[45])begin
                            pending_interrupts_45 <= 1'b0;
                          end
                          if(_zz_3[46])begin
                            pending_interrupts_46 <= 1'b0;
                          end
                          if(_zz_3[47])begin
                            pending_interrupts_47 <= 1'b0;
                          end
                          if(_zz_3[48])begin
                            pending_interrupts_48 <= 1'b0;
                          end
                          if(_zz_3[49])begin
                            pending_interrupts_49 <= 1'b0;
                          end
                          if(_zz_3[50])begin
                            pending_interrupts_50 <= 1'b0;
                          end
                          if(_zz_3[51])begin
                            pending_interrupts_51 <= 1'b0;
                          end
                          if(_zz_3[52])begin
                            pending_interrupts_52 <= 1'b0;
                          end
                        end
                        SBPlicLogic_sbDataOutputReg <= _zz_320;
                      end
                    end
                  end
                end
              end
            end
          end
        end
      end
      if((claim_complete == 32'h0))begin
        if(((_zz_262 != 32'h0) && (_zz_261 ? _zz_260 : _zz_108)))begin
          claim_complete <= _zz_262;
          has_interrupt_pending <= 1'b1;
        end
      end
      rdy <= 1'b0;
      if(((read || write) && io_sel))begin
        rdy <= 1'b1;
      end
    end
  end


endmodule
