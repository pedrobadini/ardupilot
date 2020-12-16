//#ifndef XMOLOGS_H_
//#define XMOLOGS_H_


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
      "QBBBBB","t,ivtol,ts_b,ts_a","s---","F000"}

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
      "QbBB","t,stgCond,StgBf,Stg","s---","F000"}

struct PACKED log_QAUTO_09{
     LOG_PACKET_HEADER;
     uint64_t time_us;
     int8_t flight_stage_condition;
     uint8_t flight_stage_bf;
     uint8_t flight_stage;
};

