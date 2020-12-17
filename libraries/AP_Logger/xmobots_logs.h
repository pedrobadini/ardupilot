//#ifndef XMOLOGS_H_
//#define XMOLOGS_H_


/*
Format characters in the format string for binary log messages
  a   : int16_t[32]
  b   : int8_t
  B   : uint8_t
  h   : int16_t
  H   : uint16_t
  i   : int32_t
  I   : uint32_t
  f   : float
  d   : double
  n   : char[4]
  N   : char[16]
  Z   : char[64]
  c   : int16_t * 100
  C   : uint16_t * 100
  e   : int32_t * 100
  E   : uint32_t * 100
  L   : int32_t latitude/longitude
  M   : uint8_t flight mode
  q   : int64_t
  Q   : uint64_t
 */



/***********************************************************************
 * 
 *                  QAUTO LOG STRUCTURES AND DEFINES
 * 
************************************************************************/

//QAUTO - LOG0 ==================================================================================
#define LOG_QAUTO_00_BASE(struct_enum)\
      { (struct_enum), sizeof(log_QAUTO_00), "QAU0",\
      "QBBBHB","t,Vauto,Vmode,AutSttVmode,NavCmd,Ctrl","s-----","F00000"}

struct PACKED log_QAUTO_00{
     LOG_PACKET_HEADER;
     uint64_t time_us;
     uint8_t vtol_auto;
     uint8_t vtol_mode;
     uint8_t auto_state_vtol_mode;
     uint16_t nav_cmd;
     uint8_t controller;
};

//QAUT1 - LOG1 ==================================================================================
#define LOG_QAUTO_01_BASE(struct_enum)\
      { (struct_enum), sizeof(log_QAUTO_01), "QAU1",\
      "QiiiihhfIH","t,Lat,Long,A,Alt,AccZ,VZ,CurrVZ,Tlmt,NavCmd","s---------","F000000000"}

struct PACKED log_QAUTO_01{
     LOG_PACKET_HEADER;
     uint64_t time_us;
     int32_t next_lat;
     int32_t next_lon;
     int32_t next_alt;
     int32_t curr_alt;
     int16_t pilot_acc_z;
     int16_t pilot_vel_z;
     float curr_vel_z;
     uint32_t takeoff_time_limit_ms;
     uint16_t nav_cmd;
};


//QAUT2 - LOG2 ==================================================================================
#define LOG_QAUTO_02_BASE(struct_enum)\
      { (struct_enum), sizeof(log_QAUTO_02), "QAU2",\
      "QBBBB","t,Avlb,TOLmt,ExcWnd,RchdAlt","s----","F0000"}

struct PACKED log_QAUTO_02{
     LOG_PACKET_HEADER;
     uint64_t time_us;
     uint8_t vtol_available;
     uint8_t takeoff_time_limit;
     uint8_t excessive_wind;
     uint8_t reached_alt;
};

//QAUT3 - LOG3 ==================================================================================
#define LOG_QAUTO_03_BASE(struct_enum)\
      { (struct_enum), sizeof(log_QAUTO_03), "QAU3",\
      "QiiiB","t,nlat,nlon,nalt,pc_s","s----","F0000"}

struct PACKED log_QAUTO_03{
     LOG_PACKET_HEADER;
     uint64_t time_us;
     int32_t next_lat;   
     int32_t next_lon;
     int32_t next_alt;
     uint8_t poscontrol_state;
};

//QAUT4 - LOG4 ==================================================================================
#define LOG_QAUTO_04_BASE(struct_enum)\
      { (struct_enum), sizeof(log_QAUTO_04), "QAU4",\
      "QiiiBBBBf","t,nlat,nlon,nalt,pc_s,pc_sb,clf,clc,wp_d","s--------","F00000000"}

struct PACKED log_QAUTO_04{
     LOG_PACKET_HEADER;
     uint64_t time_us;
     int32_t next_lat;
     int32_t next_lon;
     int32_t next_alt;
     uint8_t poscontrol_state;
     uint8_t poscontrol_state_before;
     uint8_t check_land_final;
     uint8_t check_land_complete;
     float wp_distance;
};


//QAUT5 - LOG5 ==================================================================================
#define LOG_QAUTO_05_BASE(struct_enum)\
      { (struct_enum), sizeof(log_QAUTO_05), "QAU5",\
      "QBBBBIIffffffffI","t,ts0,ts1,ts2,hasp,tls0,tls1,asp,crc,g0,g1,lth0,lth1,tts,tsc,now","s---------------","F000000000000000"}

struct PACKED log_QAUTO_05{
     LOG_PACKET_HEADER;
     uint64_t time_us;
//     uint8_t update_transition;
     uint8_t transition_state0;
     uint8_t transition_state1;
     uint8_t transition_state2;
     uint8_t have_airspeed;
     uint32_t transition_low_airspeed_ms0;
     uint32_t transition_low_airspeed_ms1;
     float aspeed;
     float climb_rate_cms;
     float ahrs_get_gyro_z0;
     float ahrs_get_gyro_z1;
     float last_throttle0;
     float last_throttle1;
     float trans_time_ms;
     float transition_scale;
     uint32_t ap_hal_now;
};

//QAUT6 - LOG6 ==================================================================================
#define LOG_QAUTO_06_BASE(struct_enum)\
      { (struct_enum), sizeof(log_QAUTO_06), "QAU6",\
      "QBfff","t,as_f,da_y,pi_y,wv_y","s----","F0000"}

struct PACKED log_QAUTO_06{
     LOG_PACKET_HEADER;
     uint64_t time_us;
     uint8_t assited_flight;
     float desired_auto_yaw_rate_cds;
     float get_pilot_input_yaw_rate_cds;
     float get_weathervane_yaw_rate_cds;
};

//QAUT7 - LOG7 ==================================================================================
#define LOG_QAUTO_07_BASE(struct_enum)\
      { (struct_enum), sizeof(log_QAUTO_07), "QAU7",\
      "QBBBBB","t,ivtol,ts_b,ts_a,avai,ivtola", "s-----", "F00000"}

struct PACKED log_QAUTO_07{
     LOG_PACKET_HEADER;
     uint64_t time_us;
     uint8_t log_in_vtol_mode;
     uint8_t log_transition_state_before;
     uint8_t log_transition_state;
     uint8_t log_available;
     uint8_t log_in_vtol_auto;
};

//QAUT8 - LOG8 ==================================================================================
#define LOG_QAUTO_08_BASE(struct_enum)\
      { (struct_enum), sizeof(log_QAUTO_08), "QAU8",\
      "QBBHBBB","t,c2,c3,NavId,VLtr,iVTO,iVLnd","s------","F000000"}

struct PACKED log_QAUTO_08{
     LOG_PACKET_HEADER;
     uint64_t time_us;
     uint8_t log_condition_two;
     uint8_t log_condition_three;
     uint16_t log_nav_cmd_id;
     uint8_t log_vtol_loiter;
     uint8_t log_is_vtol_takeoff;
     uint8_t log_is_vtol_land;
};


//QAUT9 - LOG9 ==================================================================================
#define LOG_QAUTO_09_BASE(struct_enum)\
      { (struct_enum), sizeof(log_QAUTO_09), "QAU9",\
      "QbBBBB","t,stgCond,StgBf,Stg,Asst,Vmode","s-----","F00000"}

struct PACKED log_QAUTO_09{
     LOG_PACKET_HEADER;
     uint64_t time_us;
     int8_t flight_stage_condition;
     uint8_t flight_stage_bf;
     uint8_t flight_stage;
     uint8_t assisted_flight;
     uint8_t in_vtol_mode;
};


//QAUT10 - LOG10 ==================================================================================
#define LOG_QAUTO_10_BASE(struct_enum)\
      { (struct_enum), sizeof(log_QAUTO_10), "QA10",\
      "QfffiiIBB","t,thr,asp,gZ,r_s,p_s,now,fvtol,is_0","s--------","F00000000"}

struct PACKED log_QAUTO_10{
     LOG_PACKET_HEADER;
     uint64_t time_us;
     float throttle;
     float aspeed;
     float get_z;
     int32_t roll_sensor;     
     int32_t picth_sensor;
     uint32_t now;
     uint8_t is_flying_vtol;
     uint8_t is_zero;
};

//QAUT11 - LOG11 ==================================================================================
#define LOG_QAUTO_11_BASE(struct_enum)\
      { (struct_enum), sizeof(log_QAUTO_11), "QA11",\
      "Qiifffff","t,nrol,npit,tar_x,tar_y,spdup,in_y,w_y","s-------","F0000000"}

struct PACKED log_QAUTO_11{
     LOG_PACKET_HEADER;
     uint64_t time_us;
     int32_t nav_roll_cd;
     int32_t nav_pitch_cd;
     float pc_target_x;
     float pc_target_y;
     float speed_up;
     float pilot_input_yaw_rate;
     float weathervane_yaw_rate;
};

//QAUT12 - LOG12 ==================================================================================
#define LOG_QAUTO_12_BASE(struct_enum)\
      { (struct_enum), sizeof(log_QAUTO_12), "QA12",\
      "QiiiiffB","t,nlat,nlon,nalt,oalt,difx,dify,if","s-------","F0000000"}

struct PACKED log_QAUTO_12{
     LOG_PACKET_HEADER;
     uint64_t time_us;
     int32_t next_lat;
     int32_t next_lon;
     int32_t next_alt;
     int32_t origin_alt;
     float diff_x;
     float diff_y;
     uint8_t enter_if;
};
