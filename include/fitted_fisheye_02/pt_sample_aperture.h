float pred_x;
float pred_y;
float pred_dx;
float pred_dy;
float sqr_err = FLT_MAX;
for(int k=0;k<5&&sqr_err > 1e-4f;k++)
{
  const float begin_x = x + dist * dx;
  const float begin_y = y + dist * dy;
  const float begin_dx = dx;
  const float begin_dy = dy;
  __attribute__((unused)) const float begin_lambda = lambda;
  pred_x =  + 46.3231 *begin_dx + 0.713762 *begin_x + -0.203224 *begin_x*begin_lambda + -8.49003 *begin_dx*begin_lambda + 1.48432 *begin_y*begin_dx*begin_dy + 0.136162 *begin_x*lens_ipow(begin_lambda, 2) + 19.351 *begin_dx*lens_ipow(begin_dy, 2) + 0.000222426 *lens_ipow(begin_x, 3) + 0.0178375 *lens_ipow(begin_y, 2)*begin_dx + 6.06598 *begin_dx*lens_ipow(begin_lambda, 2) + 6.93669 *begin_x*lens_ipow(begin_dx, 2)*begin_lambda + 78.5921 *lens_ipow(begin_dx, 3)*begin_lambda + 0.657095 *begin_x*lens_ipow(begin_dy, 2)*begin_lambda + 0.00080037 *begin_x*lens_ipow(begin_y, 2)*begin_lambda + 0.0599381 *begin_x*begin_y*begin_dy*begin_lambda + 0.152641 *lens_ipow(begin_x, 2)*begin_dx*begin_lambda + -78.7821 *lens_ipow(begin_dx, 3)*lens_ipow(begin_lambda, 2) + -0.000697152 *begin_x*lens_ipow(begin_y, 2)*lens_ipow(begin_lambda, 2) + -6.68444 *begin_x*lens_ipow(begin_dx, 2)*lens_ipow(begin_lambda, 2) + -0.14429 *lens_ipow(begin_x, 2)*begin_dx*lens_ipow(begin_lambda, 2) + -0.0622761 *begin_x*begin_y*begin_dy*lens_ipow(begin_lambda, 3) + -1.17139 *begin_x*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 5) + 241.074 *begin_y*lens_ipow(begin_dx, 5)*lens_ipow(begin_dy, 3) + 438829 *lens_ipow(begin_dx, 9)*lens_ipow(begin_dy, 2) + 41684.5 *begin_x*lens_ipow(begin_dx, 8)*lens_ipow(begin_dy, 2) + 14.6511 *lens_ipow(begin_x, 3)*lens_ipow(begin_dx, 6)*lens_ipow(begin_dy, 2) + 57564.4 *lens_ipow(begin_dx, 5)*lens_ipow(begin_dy, 6) + 1344.32 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 7)*lens_ipow(begin_dy, 2);
  pred_y =  + 0.711668 *begin_y + 46.3848 *begin_dy + -8.46928 *begin_dy*begin_lambda + -0.193319 *begin_y*begin_lambda + 0.286513 *begin_y*lens_ipow(begin_dx, 2) + 1.47114 *begin_x*begin_dx*begin_dy + 0.0219261 *begin_x*begin_y*begin_dx + 18.7219 *lens_ipow(begin_dx, 2)*begin_dy + 0.128495 *begin_y*lens_ipow(begin_lambda, 2) + 0.000225772 *lens_ipow(begin_x, 2)*begin_y + 6.05942 *begin_dy*lens_ipow(begin_lambda, 2) + 0.000205517 *lens_ipow(begin_y, 3) + 0.0176433 *lens_ipow(begin_x, 2)*begin_dy + 6.17418 *begin_y*lens_ipow(begin_dy, 2)*begin_lambda + 63.0907 *lens_ipow(begin_dy, 3)*begin_lambda + 0.140338 *lens_ipow(begin_y, 2)*begin_dy*begin_lambda + -0.132736 *lens_ipow(begin_y, 2)*begin_dy*lens_ipow(begin_lambda, 2) + -64.8887 *lens_ipow(begin_dy, 3)*lens_ipow(begin_lambda, 2) + -5.97842 *begin_y*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 2) + 11183.1 *lens_ipow(begin_dx, 4)*lens_ipow(begin_dy, 5) + 396.191 *lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 7) + 42860.5 *lens_ipow(begin_dy, 9) + 0.0130309 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 3) + 6467.85 *begin_y*lens_ipow(begin_dy, 8) + 0.189225 *lens_ipow(begin_y, 4)*lens_ipow(begin_dy, 5) + 0.00117308 *lens_ipow(begin_y, 5)*lens_ipow(begin_dy, 4) + 12.2293 *lens_ipow(begin_y, 3)*lens_ipow(begin_dy, 6) + -24.246 *begin_x*begin_y*lens_ipow(begin_dx, 3)*lens_ipow(begin_dy, 4);
  pred_dx =  + 0.193426 *begin_dx + -0.0194105 *begin_x + -0.00757095 *begin_x*begin_lambda + -0.519864 *begin_dx*begin_lambda + 0.00295916 *lens_ipow(begin_x, 2)*begin_dx + 1.75002 *lens_ipow(begin_dx, 3) + 1.82003 *begin_dx*lens_ipow(begin_dy, 2) + 1.55421e-05 *lens_ipow(begin_x, 3) + 0.0471877 *begin_x*lens_ipow(begin_dy, 2) + 0.139162 *begin_x*lens_ipow(begin_dx, 2) + 0.000387383 *lens_ipow(begin_y, 2)*begin_dx + 0.349752 *begin_dx*lens_ipow(begin_lambda, 2) + 0.00486373 *begin_x*lens_ipow(begin_lambda, 3) + 3.33722e-05 *begin_x*lens_ipow(begin_y, 2)*begin_lambda + 0.00794281 *begin_x*begin_y*begin_dy*begin_lambda + 0.352251 *begin_y*begin_dx*begin_dy*begin_lambda + -0.321666 *begin_y*begin_dx*begin_dy*lens_ipow(begin_lambda, 2) + 0.00251438 *lens_ipow(begin_y, 2)*begin_dx*lens_ipow(begin_lambda, 2) + -0.00721483 *begin_x*begin_y*begin_dy*lens_ipow(begin_lambda, 2) + -0.00548668 *lens_ipow(begin_y, 2)*begin_dx*lens_ipow(begin_lambda, 5) + 51.0763 *begin_y*lens_ipow(begin_dx, 7)*begin_dy*begin_lambda + 0.868666 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 7)*begin_lambda + -0.000137796 *begin_x*lens_ipow(begin_y, 2)*lens_ipow(begin_lambda, 7) + 0.0285012 *begin_x*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 6)*begin_lambda + -0.0541286 *lens_ipow(begin_x, 2)*begin_y*lens_ipow(begin_dx, 5)*begin_dy*begin_lambda + 24290.7 *lens_ipow(begin_dx, 9)*lens_ipow(begin_dy, 2) + 1444.58 *begin_x*lens_ipow(begin_dx, 8)*lens_ipow(begin_dy, 2) + 21.2078 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 7)*lens_ipow(begin_dy, 2);
  pred_dy =  + -0.0168014 *begin_y + 0.265126 *begin_dy + -0.864899 *begin_dy*begin_lambda + -0.0204047 *begin_y*begin_lambda + 0.024334 *begin_y*lens_ipow(begin_dx, 2) + 0.016939 *begin_y*lens_ipow(begin_lambda, 2) + 1.80474e-05 *lens_ipow(begin_x, 2)*begin_y + 0.717785 *begin_dy*lens_ipow(begin_lambda, 2) + 0.000955023 *lens_ipow(begin_x, 2)*begin_dy + 0.677667 *begin_y*lens_ipow(begin_dy, 2)*begin_lambda + 0.0883553 *begin_y*lens_ipow(begin_dx, 2)*begin_lambda + 8.99256 *lens_ipow(begin_dx, 2)*begin_dy*begin_lambda + 8.75028 *lens_ipow(begin_dy, 3)*begin_lambda + 0.0138233 *lens_ipow(begin_y, 2)*begin_dy*begin_lambda + 5.51942e-05 *lens_ipow(begin_y, 3)*begin_lambda + 0.0100797 *begin_x*begin_y*begin_dx*begin_lambda + 0.450628 *begin_x*begin_dx*begin_dy*begin_lambda + -0.486312 *begin_x*begin_dx*begin_dy*lens_ipow(begin_lambda, 2) + -0.0146537 *lens_ipow(begin_y, 2)*begin_dy*lens_ipow(begin_lambda, 2) + -0.0108135 *begin_x*begin_y*begin_dx*lens_ipow(begin_lambda, 2) + -9.43872 *lens_ipow(begin_dy, 3)*lens_ipow(begin_lambda, 2) + -9.85376 *lens_ipow(begin_dx, 2)*begin_dy*lens_ipow(begin_lambda, 2) + -0.759634 *begin_y*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 2) + -0.137746 *begin_y*lens_ipow(begin_dx, 2)*lens_ipow(begin_lambda, 3) + -7.90994e-05 *lens_ipow(begin_y, 3)*lens_ipow(begin_lambda, 3) + 0.0770499 *begin_y*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 4) + -0.000133563 *lens_ipow(begin_x, 2)*begin_y*lens_ipow(begin_lambda, 8) + -0.00617896 *lens_ipow(begin_x, 2)*begin_dy*lens_ipow(begin_lambda, 8);
  float dx1_domega0[2][2];
  dx1_domega0[0][0] =  + 46.3231  + -8.49003 *begin_lambda + 1.48432 *begin_y*begin_dy + 19.351 *lens_ipow(begin_dy, 2) + 0.0178375 *lens_ipow(begin_y, 2) + 6.06598 *lens_ipow(begin_lambda, 2) + 13.8734 *begin_x*begin_dx*begin_lambda + 235.776 *lens_ipow(begin_dx, 2)*begin_lambda + 0.152641 *lens_ipow(begin_x, 2)*begin_lambda + -236.346 *lens_ipow(begin_dx, 2)*lens_ipow(begin_lambda, 2) + -13.3689 *begin_x*begin_dx*lens_ipow(begin_lambda, 2) + -0.14429 *lens_ipow(begin_x, 2)*lens_ipow(begin_lambda, 2) + 1205.37 *begin_y*lens_ipow(begin_dx, 4)*lens_ipow(begin_dy, 3) + 3.94946e+06 *lens_ipow(begin_dx, 8)*lens_ipow(begin_dy, 2) + 333476 *begin_x*lens_ipow(begin_dx, 7)*lens_ipow(begin_dy, 2) + 87.9067 *lens_ipow(begin_x, 3)*lens_ipow(begin_dx, 5)*lens_ipow(begin_dy, 2) + 287822 *lens_ipow(begin_dx, 4)*lens_ipow(begin_dy, 6) + 9410.21 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 6)*lens_ipow(begin_dy, 2)+0.0f;
  dx1_domega0[0][1] =  + 1.48432 *begin_y*begin_dx + 38.7021 *begin_dx*begin_dy + 1.31419 *begin_x*begin_dy*begin_lambda + 0.0599381 *begin_x*begin_y*begin_lambda + -0.0622761 *begin_x*begin_y*lens_ipow(begin_lambda, 3) + -2.34278 *begin_x*begin_dy*lens_ipow(begin_lambda, 5) + 723.221 *begin_y*lens_ipow(begin_dx, 5)*lens_ipow(begin_dy, 2) + 877658 *lens_ipow(begin_dx, 9)*begin_dy + 83369 *begin_x*lens_ipow(begin_dx, 8)*begin_dy + 29.3022 *lens_ipow(begin_x, 3)*lens_ipow(begin_dx, 6)*begin_dy + 345386 *lens_ipow(begin_dx, 5)*lens_ipow(begin_dy, 5) + 2688.63 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 7)*begin_dy+0.0f;
  dx1_domega0[1][0] =  + 0.573025 *begin_y*begin_dx + 1.47114 *begin_x*begin_dy + 0.0219261 *begin_x*begin_y + 37.4438 *begin_dx*begin_dy + 44732.5 *lens_ipow(begin_dx, 3)*lens_ipow(begin_dy, 5) + 0.0260617 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*begin_dx*lens_ipow(begin_dy, 3) + -72.738 *begin_x*begin_y*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 4)+0.0f;
  dx1_domega0[1][1] =  + 46.3848  + -8.46928 *begin_lambda + 1.47114 *begin_x*begin_dx + 18.7219 *lens_ipow(begin_dx, 2) + 6.05942 *lens_ipow(begin_lambda, 2) + 0.0176433 *lens_ipow(begin_x, 2) + 12.3484 *begin_y*begin_dy*begin_lambda + 189.272 *lens_ipow(begin_dy, 2)*begin_lambda + 0.140338 *lens_ipow(begin_y, 2)*begin_lambda + -0.132736 *lens_ipow(begin_y, 2)*lens_ipow(begin_lambda, 2) + -194.666 *lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 2) + -11.9568 *begin_y*begin_dy*lens_ipow(begin_lambda, 2) + 55915.7 *lens_ipow(begin_dx, 4)*lens_ipow(begin_dy, 4) + 2773.33 *lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 6) + 385744 *lens_ipow(begin_dy, 8) + 0.0390926 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 2) + 51742.8 *begin_y*lens_ipow(begin_dy, 7) + 0.946123 *lens_ipow(begin_y, 4)*lens_ipow(begin_dy, 4) + 0.00469234 *lens_ipow(begin_y, 5)*lens_ipow(begin_dy, 3) + 73.3758 *lens_ipow(begin_y, 3)*lens_ipow(begin_dy, 5) + -96.9839 *begin_x*begin_y*lens_ipow(begin_dx, 3)*lens_ipow(begin_dy, 3)+0.0f;
  float invJ[2][2];
  const float invdet = 1.0f/(dx1_domega0[0][0]*dx1_domega0[1][1] - dx1_domega0[0][1]*dx1_domega0[1][0]);
  invJ[0][0] =  dx1_domega0[1][1]*invdet;
  invJ[1][1] =  dx1_domega0[0][0]*invdet;
  invJ[0][1] = -dx1_domega0[0][1]*invdet;
  invJ[1][0] = -dx1_domega0[1][0]*invdet;
  const float dx1[2] = {out_x - pred_x, out_y - pred_y};
  for(int i=0;i<2;i++)
  {
    dx += invJ[0][i]*dx1[i];
    dy += invJ[1][i]*dx1[i];
  }
  sqr_err = dx1[0]*dx1[0] + dx1[1]*dx1[1];
}
out_dx = pred_dx;
out_dy = pred_dy;