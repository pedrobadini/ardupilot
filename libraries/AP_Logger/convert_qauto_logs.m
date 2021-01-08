System_SamplePeriod = 0.01;

%% QAU0 - ModeAuto Update
      qau0_time = 1e-6*QAU0(:,2);
      is_vtol_auto = [qau0_time, QAU0(:,3)];
      is_vtol_mode = [qau0_time, QAU0(:,4)];
      auto_state_vtol_mode = [qau0_time, QAU0(:,5)];
      aut_up_nav_cmd = [qau0_time, QAU0(:,6)];
      quad_control_auto = [qau0_time, QAU0(:,7)];

%% QAU1 - do_vtol_takeoff (dvto)
      qau1_time = 1e-6*QAU1(:,2);
      dvto_next_lat = [qau1_time, QAU1(:,3)];
      dvto_next_lon = [qau1_time, QAU1(:,4)];
      dvto_next_alt = [qau1_time, QAU1(:,5)];
      dvto_curr_alt = [qau1_time, QAU1(:,6)];
      dvto_plt_acc_z  = [qau1_time, QAU1(:,7)];
      dvto_plt_vel_z  = [qau1_time, QAU1(:,8)];
      dvto_curr_vel_z = [qau1_time, QAU1(:,9)];
      dvto_to_time_lmt_ms = [qau1_time, QAU1(:,10)];
      dvto_nav_cmd = [qau1_time, QAU1(:,11)];

%% QAU2 - verify_vtol_takeoff (vvto)
      qau2_time = 1e-6*QAU2(:,2);
      vvto_vtol_available = [qau2_time, QAU2(:, 3)];
      vvto_takeoff_time_limit = [qau2_time, QAU2(:, 4)];
      vvto_excessive_wind = [qau2_time, QAU2(:, 5)];
      vvto_reached_alt = [qau2_time, QAU2(:, 6)];

%% QAU3 - do_vtol_land (dvld)
      qau3_time = 1e-6*QAU3(:,2);
      dvld_next_lat = [qau3_time, QAU3(:, 3)];
      dvld_next_lon = [qau3_time, QAU3(:, 4)];
      dvld_next_alt = [qau3_time, QAU3(:, 5)];
      dvld_poscontrol_state = [qau3_time, QAU3(:, 6)];

%% QAU4 - verify_vtol_land (vvld)
      qau4_time = 1e-6*QAU4(:,2);
      vvld_next_lat = [qau4_time, QAU4(:, 3)];
      vvld_next_lon = [qau4_time, QAU4(:, 4)];
      vvld_next_alt = [qau4_time, QAU4(:, 5)];
      vvld_poscontrol_state = [qau4_time, QAU4(:, 6)];
      vvld_poscontrol_state_before = [qau4_time, QAU4(:, 7)];
      vvld_check_land_final = [qau4_time, QAU4(:, 8)];
      vvld_check_land_complete = [qau4_time, QAU4(:, 9)];
      vvld_wp_distance = [qau4_time, QAU4(:, 10)];
      
%% QAU5 - QuadPlane update_transition
      qau5_time = 1e-6*QAU5(:,2);
      qau5_transition_state0 = [qau5_time, QAU5(:, 3)];
      qau5_transition_state1 = [qau5_time, QAU5(:, 4)];
      qau5_transition_state2 = [qau5_time, QAU5(:, 5)];
      qau5_have_airspeed = [qau5_time, QAU5(:,6)];
      qau5_transition_low_airspeed_ms0 = [qau5_time, QAU5(:,7)];
      qau5_transition_low_airspeed_ms1 = [qau5_time, QAU5(:,8)];
      qau5_aspeed = [qau5_time, QAU5(:,9)];
      qau5_climb_rate_cms = [qau5_time, QAU5(:,10)];
      qau5_ahrs_get_gyro_z0 = [qau5_time, QAU5(:,11)];
      qau5_ahrs_get_gyro_z1 = [qau5_time, QAU5(:,12)];
      qau5_last_throttle0 = [qau5_time, QAU5(:,13)];
      qau5_last_throttle1 = [qau5_time, QAU5(:,14)];
      qau5_trans_time_ms = [qau5_time, QAU5(:,15)];
      qau5_transition_scale = [qau5_time, QAU5(:,16)];
      qau5_throttle_scaled = [qau5_time, QAU5(:,17)];

%% QAU6 - QuadPlane get_desired_yaw_rate_cds
      qau6_time = 1e-6*QAU6(:,2);
      qau6_assited_flight = [qau6_time, QAU6(:, 3)];
      qau6_desired_auto_yaw_rate_cds = [qau6_time, QAU6(:, 4)];
      qua6_get_pilot_input_yaw_rate_cds = [qau6_time, QAU6(:, 5)];
      qua6_get_weathervane_yaw_rate_cds = [qau6_time, QAU6(:, 6)];

%% QAU7 - QuadPlane update
      qau7_time = 1e-6*QAU7(:,2);
      qau7_in_vtol_mode = [qau7_time, QAU7(:, 3)];
      qau7_transition_state_before = [qau7_time, QAU7(:, 4)];
      qau7_transition_state = [qau7_time, QAU7(:, 5)];
      qau7_available = [qau7_time, QAU7(:, 6)];
      qau7_in_vtol_auto = [qau7_time, QAU7(:, 7)];
      qau7_des_spoolstate_af = [qau7_time, QAU7(:, 8)];

%% QAU8 - QuadPlane in_vtol_auto
      qau8_time = 1e-6*QAU8(:,2);
      qau8_condition_two = [qau8_time, QAU8(:, 3)];
      qau8_condition_three = [qau8_time, QAU8(:, 4)];
      qau8_nav_cmd_id = [qau8_time, QAU8(:, 5)];
      qau8_vtol_loiter = [qau8_time, QAU8(:, 6)];
      qau8_is_vtol_takeoff = [qau8_time, QAU8(:, 7)];
      qau8_is_vtol_land = [qau8_time, QAU8(:, 8)];

%% QAU9 - Arduplane update_flight_stage
      qau9_time = 1e-6*QAU9(:,2);
      qau9_flight_stage_condition = [qau9_time, QAU9(:, 3)];
      qau9_flight_stage_bf = [qau9_time, QAU9(:, 4)];
      qau9_flight_stage = [qau9_time, QAU9(:, 5)];
      qau9_assisted_flight = [qau9_time, QAU9(:, 6)];
      qau9_in_vtol_mode = [qau9_time, QAU9(:, 7)];

%% QA10 - Quadplane upadate_throttle_hover
      qau10_time = 1e-6*QA10(:,2);
      qau10_throttle = [qau10_time, QA10(:, 3)];
      qau10_aspeed = [qau10_time, QA10(:, 4)];
      qau10_get_z = [qau10_time, QA10(:, 5)];
      qau10_roll_sensor = [qau10_time, QA10(:, 6)];
      qau10_pitch_sensor = [qau10_time, QA10(:, 7)];
      qau10_now = [qau10_time, QA10(:, 8)];
      qau10_is_flying_vtol = [qau10_time, QA10(:, 9)];
      qau10_is_zero = [qau10_time, QA10(:, 10)];
      qau10_available = [qau10_time, QA10(:, 11)];
      qau10_armed = [qau10_time, QA10(:, 12)];
      qau10_fw_motor = [qau10_time, QA10(:, 13)];
      Q_WP_SPEED_UP = 250
      

%% QA11 - Quadplane takeoff_controller
      qau11_time = 1e-6*QA11(:,2);
      qau11_nav_roll_cd = [qau11_time, QA11(:, 3)];
      qau11_nav_pitch = [qau11_time, QA11(:, 4)];
      qau11_pc_target_x = [qau11_time, QA11(:, 5)];
      qau11_pc_target_y = [qau11_time, QA11(:, 6)];
      qau11_speed_up = [qau11_time, QA11(:, 7)];
      qau11_pilot_input_yaw_rate = [qau11_time, QA11(:, 8)];
      qau11_weathervane_yaw_rate = [qau11_time, QA11(:, 9)];

%% QA12 - Quadplane setup_target_position
      qau12_time = 1e-6*QA12(:,2);
      qau12_next_lat = [qau12_time, QA12(:, 3)];
      qau12_next_long = [qau12_time, QA12(:, 4)];
      qau12_next_alt = [qau12_time, QA12(:, 5)];
      qau12_origin_lat = [qau12_time, QA12(:, 6)];
      qau12_origin_long = [qau12_time, QA12(:, 7)];
      qau12_origin_alt = [qau12_time, QA12(:, 8)];
      qau12_poscontrol_lat = [qau12_time, QA12(:, 9)];
      qau12_poscontrol_long = [qau12_time, QA12(:, 10)];
      qau12_poscontrol_alt = [qau12_time, QA12(:, 11)];
      qau12_diff_x = [qau12_time, QA12(:, 12)];
      qau12_diff_y = [qau12_time, QA12(:, 13)];
      qau12_last_auto_tgt_lat = [qau12_time, QA12(:, 14)];
      qau12_last_auto_tgt_lng = [qau12_time, QA12(:, 15)];
      qau12_last_auto_tgt_alt = [qau12_time, QA12(:, 16)];
      qau12_enter_if = [qau12_time, QA12(:, 17)];


%% QA13 - Quadplane is_flying_vtol
      qau13_time = 1e-6*QA13(:,2);
      qau13_get_spool_state = [qau13_time, QA13(:, 3)];
      qau13_in_vtol_mode = [qau13_time, QA13(:, 4)];
      qau13_enter_if = [qau13_time, QA13(:, 5)];
      qau13_available = [qau13_time, QA13(:, 6)];

%% QA14 - MotorMulticopter upadate_throttle_hover
      qau14_time = 1e-6*QA14(:,2);
      qau14_throttle_hover_before = [qau14_time, QA14(:, 3)];
      qau14_throttle_hover_after = [qau14_time, QA14(:, 4)];
      qau14_hover_learn = [qau14_time, QA14(:, 5)];
      HOVER_LEARN_DISABLED = 0;
      ARSPD_FBW_MIN = 13;

%% QA15 - Quadplane setup_target_position
      qau15_time = 1e-6*QA15(:,2);
      qau15_force_descend = [qau15_time, QA15(:, 3)];
      qau15_limit_pos_up = [qau15_time, QA15(:, 4)];
      qau15_throttle_upper = [qau15_time, QA15(:, 5)];
      qau15_throttle_lower = [qau15_time, QA15(:, 6)];
      qau15_climb_rate = [qau15_time, QA15(:, 7)];
      qau15_dt = [qau15_time, QA15(:, 8)];
      qau15_postarget_z = [qau15_time, QA15(:, 9)];
      IC_POSTARGET_Z = qau15_postarget_z(1,:);

%% QA16 - Quadplane assistance_needed
      qau16_time = 1e-6*QA16(:,2);
      qau16_roll_limit_cd = [qau16_time, QA16(:, 3)];
      qau16_pitch_limit_max_cd = [qau16_time, QA16(:, 4)];
      qau16_pitch_limit_min_cd = [qau16_time, QA16(:, 5)];
      qau16_assist_angle = [qau16_time, QA16(:, 6)];
      qau16_nav_roll_cd = [qau16_time, QA16(:, 7)];
      qau16_nav_pitch_cd = [qau16_time, QA16(:, 8)];
      qau16_ret = [qau16_time, QA16(:, 9)];
      qau16_isAssistanceNeeded = [qau16_time, QA16(:, 10)];

%% QA17 - Quadplane assist_climb_rate_cms
      qau17_time = 1e-6*QA17(:,2);
      qau17_auto_throttle_mode = [qau17_time, QA17(:, 3)];
      qau17_fbw_climb_rate = [qau17_time, QA17(:, 4)];
      qau17_throttle_input = [qau17_time, QA17(:, 5)];
      qau17_dt_since_start = [qau17_time, QA17(:, 6)];
      qau17_altitude_error = [qau17_time, QA17(:, 7)];
      qau17_climb_rate = [qau17_time, QA17(:, 8)];

%% Padrao da Pix
is_flying = [1e-6*STAT(:,2) STAT(:,3)];
plane_armed = [1e-6*STAT(:,2) STAT(:,5)];
motors_throttle = [1e-6*RATE(:,2) RATE(:,14)];
pix_control_mode = [1e-6*MODE(:,2), MODE(:,4)];