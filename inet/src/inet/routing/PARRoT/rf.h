namespace rf{
const char* classes[3] = {"friis", "nakagami", "tworay"};
int tree_0(float d_max, float d_min, float d_mean, float d_std, float rss_max, float rss_min, float rss_mean, float rss_std)
{
	if(rss_mean < -70.5974)
	{
		if(rss_min < -84.467)
		{
			if(d_max < 237.091)
			{
				if(rss_max < -70.51055)
				{
					if(d_mean < 164.6515)
					{
						if(d_std < 38.08495)
						{
							if(d_std < 22.2104)
							{
								if(rss_std < 2.15501)
									return 0;
								else
									return 1;
							}
							else
							{
								if(rss_max < -74.74725)
									return 0;
								else
								{
									if(d_max < 218.4815)
									{
										if(rss_min < -84.5565)
										{
											if(d_min < 82.2784)
											{
												if(rss_max < -73.0503)
													return 1;
												else
													return 0;
											}
											else
											{
												if(rss_std < 2.635935)
												{
													if(d_min < 114.052)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
										}
										else
											return 0;
									}
									else
									{
										if(d_max < 228.1675)
										{
											if(d_min < 89.32805)
											{
												if(rss_min < -84.67765)
												{
													if(d_min < 88.977)
														return 0;
													else
													{
														if(d_max < 223.2435)
															return 1;
														else
															return 0;
													}
												}
												else
												{
													if(rss_max < -71.7717)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(rss_min < -84.838)
													return 0;
												else
												{
													if(d_max < 222.7345)
													{
														if(rss_min < -84.7037)
														{
															if(d_max < 221.868)
																return 1;
															else
																return 0;
														}
														else
															return 0;
													}
													else
													{
														if(d_mean < 162.001)
															return 1;
														else
															return 0;
													}
												}
											}
										}
										else
										{
											if(rss_min < -84.9193)
											{
												if(rss_min < -84.98355)
													return 1;
												else
													return 0;
											}
											else
											{
												if(rss_min < -84.8837)
												{
													if(rss_mean < -77.93695)
														return 1;
													else
														return 0;
												}
												else
												{
													if(d_max < 233.075)
													{
														if(d_min < 78.69715)
															return 1;
														else
														{
															if(rss_std < 3.173355)
															{
																if(rss_max < -71.4581)
																	return 0;
																else
																	return 1;
															}
															else
															{
																if(d_min < 90.53625)
																	return 0;
																else
																	return 1;
															}
														}
													}
													else
														return 1;
												}
											}
										}
									}
								}
							}
						}
						else
						{
							if(rss_max < -71.5066)
							{
								if(d_std < 41.6578)
								{
									if(rss_max < -74.44585)
										return 0;
									else
									{
										if(d_min < 110.281)
										{
											if(rss_std < 3.04696)
											{
												if(rss_max < -73.3728)
												{
													if(d_min < 92.9229)
														return 0;
													else
														return 1;
												}
												else
												{
													if(rss_min < -84.92065)
														return 0;
													else
													{
														if(d_mean < 141.572)
															return 0;
														else
															return 1;
													}
												}
											}
											else
											{
												if(d_max < 223.6695)
												{
													if(d_max < 223.1365)
													{
														if(d_min < 82.95845)
															return 0;
														else
														{
															if(rss_mean < -79.7843)
															{
																if(rss_max < -72.78685)
																{
																	if(rss_max < -74.087)
																	{
																		if(d_max < 222.402)
																			return 0;
																		else
																			return 1;
																	}
																	else
																		return 0;
																}
																else
																	return 1;
															}
															else
																return 0;
														}
													}
													else
														return 1;
												}
												else
													return 0;
											}
										}
										else
											return 1;
									}
								}
								else
								{
									if(rss_std < 3.13812)
									{
										if(rss_max < -74.143)
											return 0;
										else
										{
											if(d_min < 87.07935)
												return 0;
											else
												return 1;
										}
									}
									else
										return 0;
								}
							}
							else
							{
								if(d_min < 79.04835)
								{
									if(d_min < 61.2444)
									{
										if(d_mean < 152.0465)
											return 1;
										else
											return 0;
									}
									else
									{
										if(d_min < 73.35345)
										{
											if(d_max < 234.923)
												return 0;
											else
											{
												if(rss_max < -70.7582)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(rss_std < 4.06263)
											{
												if(d_std < 40.54535)
													return 0;
												else
												{
													if(rss_mean < -80.05975)
														return 0;
													else
													{
														if(rss_min < -84.74455)
														{
															if(d_min < 76.33665)
															{
																if(d_mean < 136.1485)
																	return 0;
																else
																	return 1;
															}
															else
																return 0;
														}
														else
														{
															if(d_max < 216.2805)
																return 1;
															else
																return 0;
														}
													}
												}
											}
											else
												return 0;
										}
									}
								}
								else
									return 1;
							}
						}
					}
					else
					{
						if(rss_max < -75.96905)
						{
							if(d_max < 214.9655)
							{
								if(d_max < 213.488)
									return 0;
								else
								{
									if(d_min < 158.0445)
										return 0;
									else
										return 1;
								}
							}
							else
								return 0;
						}
						else
						{
							if(d_max < 219.4575)
							{
								if(d_min < 114.3135)
								{
									if(rss_min < -84.7293)
										return 1;
									else
										return 0;
								}
								else
									return 1;
							}
							else
							{
								if(d_min < 112.727)
								{
									if(rss_mean < -81.09275)
										return 0;
									else
									{
										if(rss_max < -72.7836)
											return 0;
										else
										{
											if(d_std < 38.394)
											{
												if(d_max < 224.169)
													return 0;
												else
													return 1;
											}
											else
											{
												if(rss_std < 3.648485)
												{
													if(rss_max < -71.4542)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
										}
									}
								}
								else
								{
									if(rss_mean < -82.2509)
										return 0;
									else
									{
										if(d_std < 33.02625)
										{
											if(d_mean < 177.0915)
											{
												if(rss_mean < -80.94345)
													return 0;
												else
													return 1;
											}
											else
											{
												if(d_std < 31.8611)
													return 1;
												else
												{
													if(rss_max < -73.4868)
														return 0;
													else
														return 1;
												}
											}
										}
										else
										{
											if(d_std < 33.31425)
											{
												if(d_min < 113.35)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if(d_min < 69.9001)
					{
						if(d_mean < 140.8055)
						{
							if(d_max < 218.1355)
							{
								if(rss_max < -68.2642)
								{
									if(d_max < 189.2785)
										return 0;
									else
									{
										if(d_std < 48.03495)
											return 1;
										else
										{
											if(rss_min < -84.81105)
												return 1;
											else
												return 0;
										}
									}
								}
								else
								{
									if(rss_min < -84.526)
									{
										if(d_max < 216.3205)
											return 1;
										else
										{
											if(rss_min < -84.7116)
												return 1;
											else
											{
												if(d_max < 216.7315)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(d_min < 43.02005)
											return 1;
										else
											return 0;
									}
								}
							}
							else
							{
								if(d_std < 62.5056)
								{
									if(rss_max < -66.4129)
									{
										if(d_min < 62.4961)
										{
											if(rss_mean < -78.1477)
											{
												if(rss_max < -67.95695)
												{
													if(d_max < 235.4525)
													{
														if(rss_std < 4.590395)
														{
															if(d_min < 60.36805)
																return 1;
															else
																return 0;
														}
														else
															return 0;
													}
													else
														return 1;
												}
												else
													return 1;
											}
											else
											{
												if(rss_std < 5.100195)
												{
													if(rss_max < -66.8593)
													{
														if(d_max < 220.37)
														{
															if(d_min < 52.4116)
																return 0;
															else
																return 1;
														}
														else
														{
															if(d_std < 51.70955)
																return 0;
															else
															{
																if(rss_min < -84.77975)
																	return 0;
																else
																{
																	if(rss_min < -84.7648)
																		return 1;
																	else
																		return 0;
																}
															}
														}
													}
													else
														return 1;
												}
												else
													return 0;
											}
										}
										else
										{
											if(d_std < 55.0098)
											{
												if(d_max < 218.9175)
													return 0;
												else
												{
													if(d_mean < 133.5165)
													{
														if(rss_min < -84.57685)
															return 1;
														else
															return 0;
													}
													else
													{
														if(rss_std < 4.667045)
															return 1;
														else
														{
															if(d_min < 66.34685)
															{
																if(d_std < 49.31595)
																	return 0;
																else
																	return 1;
															}
															else
																return 0;
														}
													}
												}
											}
											else
												return 0;
										}
									}
									else
									{
										if(d_max < 233.5775)
										{
											if(rss_std < 5.131975)
											{
												if(d_min < 50.4383)
												{
													if(d_std < 39.06485)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
											else
											{
												if(d_min < 46.8008)
												{
													if(rss_max < -63.2398)
													{
														if(d_max < 224.8055)
															return 0;
														else
														{
															if(d_std < 55.0198)
															{
																if(d_max < 228.3995)
																	return 1;
																else
																	return 0;
															}
															else
																return 0;
														}
													}
													else
													{
														if(rss_mean < -74.46345)
														{
															if(d_mean < 126.0705)
															{
																if(rss_max < -59.99795)
																{
																	if(d_min < 31.1432)
																		return 0;
																	else
																		return 1;
																}
																else
																	return 1;
															}
															else
																return 1;
														}
														else
															return 0;
													}
												}
												else
												{
													if(rss_max < -66.32375)
														return 0;
													else
														return 1;
												}
											}
										}
										else
											return 1;
									}
								}
								else
								{
									if(rss_mean < -77.7969)
										return 1;
									else
										return 0;
								}
							}
						}
						else
						{
							if(d_max < 216.586)
							{
								if(rss_max < -69.28855)
								{
									if(d_mean < 153.2675)
										return 0;
									else
										return 1;
								}
								else
									return 1;
							}
							else
							{
								if(d_max < 234.982)
								{
									if(rss_std < 4.640335)
									{
										if(rss_min < -84.9002)
											return 0;
										else
										{
											if(rss_max < -68.29725)
											{
												if(rss_mean < -78.7034)
												{
													if(rss_std < 3.946445)
													{
														if(d_min < 65.25015)
															return 0;
														else
															return 1;
													}
													else
													{
														if(rss_min < -84.8785)
														{
															if(d_std < 50.3257)
																return 0;
															else
																return 1;
														}
														else
															return 0;
													}
												}
												else
												{
													if(d_min < 66.20325)
														return 1;
													else
														return 0;
												}
											}
											else
											{
												if(d_std < 40.5517)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(d_mean < 147.89)
										{
											if(d_std < 56.5234)
											{
												if(rss_max < -63.21165)
												{
													if(rss_mean < -79.0117)
													{
														if(rss_mean < -79.0144)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
												else
													return 1;
											}
											else
												return 0;
										}
										else
											return 0;
									}
								}
								else
								{
									if(d_max < 235.743)
										return 1;
									else
									{
										if(rss_min < -84.85555)
											return 0;
										else
										{
											if(d_max < 236.6845)
												return 0;
											else
											{
												if(d_min < 42.5448)
													return 0;
												else
													return 1;
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if(rss_min < -84.93485)
						{
							if(rss_max < -69.6341)
							{
								if(rss_min < -84.9588)
									return 1;
								else
									return 0;
							}
							else
								return 1;
						}
						else
						{
							if(d_mean < 170.136)
							{
								if(rss_min < -84.7061)
									return 1;
								else
								{
									if(rss_min < -84.67795)
									{
										if(rss_min < -84.7003)
										{
											if(d_std < 38.6007)
												return 1;
											else
												return 0;
										}
										else
											return 0;
									}
									else
										return 1;
								}
							}
							else
							{
								if(d_std < 34.37685)
									return 0;
								else
								{
									if(rss_min < -84.79105)
										return 1;
									else
										return 0;
								}
							}
						}
					}
				}
			}
			else
			{
				if(rss_max < -73.9499)
				{
					if(d_min < 105.69)
					{
						if(d_mean < 161.346)
						{
							if(d_mean < 147.0355)
								return 0;
							else
							{
								if(rss_std < 3.145985)
									return 1;
								else
								{
									if(rss_min < -84.87025)
										return 0;
									else
										return 1;
								}
							}
						}
						else
						{
							if(d_min < 100.624)
								return 0;
							else
							{
								if(rss_max < -74.7718)
									return 0;
								else
								{
									if(d_max < 302.4995)
										return 1;
									else
										return 0;
								}
							}
						}
					}
					else
					{
						if(rss_max < -77.19235)
						{
							if(d_max < 246.495)
								return 0;
							else
							{
								if(rss_std < 1.99623)
								{
									if(rss_max < -79.2696)
									{
										if(rss_min < -84.88465)
											return 0;
										else
										{
											if(d_max < 276.729)
											{
												if(d_min < 173.4945)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
									}
									else
									{
										if(d_std < 42.72945)
										{
											if(rss_max < -78.90575)
											{
												if(d_max < 267.4685)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
										else
										{
											if(d_min < 149.475)
												return 0;
											else
												return 1;
										}
									}
								}
								else
								{
									if(rss_max < -77.70565)
										return 0;
									else
									{
										if(d_max < 257.779)
										{
											if(d_max < 249.8675)
												return 1;
											else
												return 0;
										}
										else
										{
											if(d_min < 123.7545)
												return 0;
											else
												return 1;
										}
									}
								}
							}
						}
						else
						{
							if(d_min < 115.8465)
							{
								if(rss_max < -75.01285)
								{
									if(rss_std < 2.76268)
									{
										if(d_mean < 176.16)
											return 1;
										else
										{
											if(rss_max < -75.9355)
												return 0;
											else
												return 1;
										}
									}
									else
										return 0;
								}
								else
								{
									if(rss_mean < -80.34735)
									{
										if(rss_min < -84.9432)
										{
											if(rss_mean < -80.78035)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
									else
										return 0;
								}
							}
							else
							{
								if(d_max < 242.5125)
								{
									if(d_max < 242.093)
										return 1;
									else
										return 0;
								}
								else
								{
									if(rss_std < 3.44833)
									{
										if(rss_max < -76.98155)
										{
											if(rss_max < -77.1004)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
									else
										return 0;
								}
							}
						}
					}
				}
				else
				{
					if(d_min < 78.32495)
					{
						if(d_mean < 154.676)
						{
							if(d_std < 67.4695)
							{
								if(rss_max < -67.6574)
								{
									if(rss_min < -84.81045)
									{
										if(d_min < 52.72185)
											return 0;
										else
										{
											if(rss_max < -70.23035)
											{
												if(rss_max < -70.2836)
												{
													if(d_min < 77.5608)
													{
														if(rss_mean < -79.11965)
														{
															if(d_mean < 150.8015)
																return 1;
															else
															{
																if(rss_std < 3.884195)
																	return 1;
																else
																{
																	if(d_max < 261.573)
																	{
																		if(d_std < 46.8898)
																			return 0;
																		else
																			return 1;
																	}
																	else
																		return 0;
																}
															}
														}
														else
														{
															if(d_min < 66.862)
															{
																if(rss_min < -84.9674)
																	return 1;
																else
																{
																	if(d_max < 254.922)
																		return 1;
																	else
																		return 0;
																}
															}
															else
															{
																if(rss_std < 2.878965)
																	return 0;
																else
																{
																	if(rss_mean < -79.033)
																	{
																		if(rss_std < 3.998565)
																			return 1;
																		else
																		{
																			if(d_max < 258.3155)
																				return 1;
																			else
																				return 0;
																		}
																	}
																	else
																		return 1;
																}
															}
														}
													}
													else
													{
														if(rss_min < -84.917)
															return 0;
														else
															return 1;
													}
												}
												else
													return 0;
											}
											else
											{
												if(d_min < 65.136)
												{
													if(rss_max < -68.74755)
													{
														if(d_min < 64.5456)
														{
															if(rss_max < -69.3797)
															{
																if(d_max < 269.339)
																	return 0;
																else
																	return 1;
															}
															else
																return 1;
														}
														else
															return 0;
													}
													else
														return 1;
												}
												else
													return 1;
											}
										}
									}
									else
										return 1;
								}
								else
									return 1;
							}
							else
							{
								if(d_max < 281.796)
								{
									if(d_min < 48.7477)
										return 1;
									else
										return 0;
								}
								else
								{
									if(rss_max < -69.70645)
										return 0;
									else
										return 1;
								}
							}
						}
						else
						{
							if(d_max < 241.286)
							{
								if(d_min < 70.9591)
								{
									if(rss_max < -67.9927)
										return 0;
									else
									{
										if(d_max < 240.7555)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(rss_mean < -79.47385)
									{
										if(rss_std < 3.86838)
											return 1;
										else
										{
											if(d_max < 238.869)
												return 1;
											else
												return 0;
										}
									}
									else
										return 1;
								}
							}
							else
							{
								if(rss_std < 4.82741)
								{
									if(rss_max < -70.1953)
									{
										if(rss_std < 4.152995)
										{
											if(d_std < 60.6499)
											{
												if(rss_std < 3.609695)
												{
													if(d_mean < 158.84)
													{
														if(rss_mean < -79.22305)
															return 1;
														else
															return 0;
													}
													else
														return 1;
												}
												else
												{
													if(d_min < 76.47345)
													{
														if(rss_mean < -80.09555)
														{
															if(rss_mean < -80.1914)
																return 1;
															else
															{
																if(d_std < 51.32455)
																	return 0;
																else
																	return 1;
															}
														}
														else
														{
															if(d_max < 302.442)
																return 0;
															else
																return 1;
														}
													}
													else
														return 0;
												}
											}
											else
												return 1;
										}
										else
											return 0;
									}
									else
									{
										if(d_max < 263.95)
										{
											if(d_max < 263.379)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
								}
								else
								{
									if(rss_mean < -80.2189)
										return 0;
									else
									{
										if(rss_max < -67.752)
										{
											if(d_std < 64.7252)
											{
												if(rss_mean < -79.2661)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
										else
											return 1;
									}
								}
							}
						}
					}
					else
					{
						if(rss_min < -84.91355)
						{
							if(d_min < 93.31525)
							{
								if(rss_max < -72.8062)
								{
									if(d_min < 90.7676)
										return 0;
									else
									{
										if(d_max < 258.105)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(d_std < 51.8083)
									{
										if(d_min < 80.5811)
										{
											if(rss_max < -70.33665)
											{
												if(d_mean < 151.675)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
										else
										{
											if(rss_min < -84.914)
												return 1;
											else
												return 0;
										}
									}
									else
										return 1;
								}
							}
							else
								return 1;
						}
						else
						{
							if(d_min < 82.73485)
							{
								if(rss_max < -71.8433)
								{
									if(rss_std < 3.70985)
										return 1;
									else
										return 0;
								}
								else
									return 1;
							}
							else
								return 1;
						}
					}
				}
			}
		}
		else
		{
			if(d_max < 224.2945)
			{
				if(d_mean < 131.1845)
				{
					if(rss_min < -83.74)
					{
						if(rss_max < -66.85325)
						{
							if(d_max < 199.7125)
							{
								if(d_min < 68.12565)
									return 0;
								else
									return 1;
							}
							else
							{
								if(d_std < 34.8165)
								{
									if(d_max < 214.804)
										return 0;
									else
										return 1;
								}
								else
								{
									if(rss_max < -66.8758)
										return 0;
									else
									{
										if(d_max < 209.682)
											return 1;
										else
											return 0;
									}
								}
							}
						}
						else
						{
							if(d_std < 51.2404)
							{
								if(d_max < 185.0385)
								{
									if(rss_min < -84.1401)
										return 0;
									else
										return 1;
								}
								else
								{
									if(rss_min < -83.9547)
									{
										if(rss_max < -63.13265)
										{
											if(d_max < 201.538)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
									else
									{
										if(d_min < 50.04065)
											return 0;
										else
											return 1;
									}
								}
							}
							else
							{
								if(d_max < 220.4425)
								{
									if(rss_mean < -76.877)
									{
										if(d_min < 33.1875)
											return 1;
										else
											return 0;
									}
									else
										return 0;
								}
								else
								{
									if(d_max < 221.9535)
										return 1;
									else
										return 0;
								}
							}
						}
					}
					else
					{
						if(rss_min < -82.9286)
						{
							if(d_max < 189.6485)
							{
								if(d_min < 44.26895)
									return 1;
								else
								{
									if(d_max < 157.1495)
										return 0;
									else
									{
										if(rss_min < -83.2724)
										{
											if(d_max < 181.2365)
												return 1;
											else
												return 0;
										}
										else
											return 0;
									}
								}
							}
							else
							{
								if(d_max < 216.064)
								{
									if(d_max < 195.0565)
									{
										if(rss_min < -83.31995)
										{
											if(d_min < 63.61655)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
									else
										return 0;
								}
								else
								{
									if(d_max < 218.239)
										return 1;
									else
										return 0;
								}
							}
						}
						else
						{
							if(d_std < 85.65465)
								return 0;
							else
								return 1;
						}
					}
				}
				else
				{
					if(d_mean < 146.7195)
					{
						if(rss_min < -83.6948)
						{
							if(d_std < 24.5416)
								return 1;
							else
							{
								if(d_mean < 139.118)
								{
									if(d_min < 72.25435)
									{
										if(d_max < 221.0215)
										{
											if(d_mean < 132.6495)
											{
												if(d_mean < 132.486)
												{
													if(rss_max < -66.65695)
														return 0;
													else
													{
														if(d_min < 49.60875)
															return 0;
														else
															return 1;
													}
												}
												else
												{
													if(rss_mean < -77.8714)
														return 1;
													else
														return 0;
												}
											}
											else
												return 0;
										}
										else
										{
											if(rss_mean < -76.9678)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(rss_max < -70.6776)
											return 0;
										else
										{
											if(d_min < 73.70025)
											{
												if(d_max < 212.109)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
									}
								}
								else
								{
									if(d_max < 223.664)
										return 0;
									else
									{
										if(d_max < 223.7235)
											return 1;
										else
											return 0;
									}
								}
							}
						}
						else
						{
							if(rss_max < -79.08625)
								return 1;
							else
								return 0;
						}
					}
					else
					{
						if(rss_std < 1.24853)
						{
							if(d_std < 30.6566)
								return 0;
							else
								return 1;
						}
						else
						{
							if(d_std < 11.82561)
								return 1;
							else
							{
								if(d_mean < 148.3895)
								{
									if(rss_mean < -79.94685)
									{
										if(d_min < 92.503)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
								else
									return 0;
							}
						}
					}
				}
			}
			else
			{
				if(rss_max < -70.7681)
				{
					if(rss_min < -81.91295)
					{
						if(rss_mean < -81.30785)
						{
							if(d_mean < 168.2115)
								return 1;
							else
							{
								if(rss_min < -83.03455)
								{
									if(rss_min < -83.68965)
										return 0;
									else
									{
										if(d_std < 60.51975)
											return 0;
										else
											return 1;
									}
								}
								else
									return 1;
							}
						}
						else
						{
							if(d_max < 283.5345)
							{
								if(d_max < 270.2875)
								{
									if(d_max < 264.0315)
									{
										if(rss_min < -84.34365)
											return 0;
										else
										{
											if(d_min < 122.015)
											{
												if(d_mean < 167.0645)
												{
													if(d_min < 74.0048)
														return 0;
													else
													{
														if(d_mean < 143.8165)
															return 1;
														else
														{
															if(d_max < 246.657)
															{
																if(rss_std < 2.721325)
																	return 0;
																else
																{
																	if(d_mean < 149.11)
																		return 1;
																	else
																		return 0;
																}
															}
															else
																return 1;
														}
													}
												}
												else
													return 0;
											}
											else
												return 1;
										}
									}
									else
										return 1;
								}
								else
									return 0;
							}
							else
								return 1;
						}
					}
					else
					{
						if(d_max < 304.2785)
							return 0;
						else
							return 2;
					}
				}
				else
				{
					if(d_min < 73.35855)
					{
						if(rss_max < -67.7724)
						{
							if(rss_mean < -77.3191)
								return 0;
							else
							{
								if(d_max < 233.027)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(rss_mean < -78.0622)
							{
								if(d_max < 235.696)
									return 0;
								else
									return 1;
							}
							else
								return 1;
						}
					}
					else
					{
						if(d_max < 331.5885)
							return 1;
						else
							return 2;
					}
				}
			}
		}
	}
	else
	{
		if(rss_std < 10.4978)
			return 2;
		else
		{
			if(d_std < 114.251)
				return 0;
			else
			{
				if(d_max < 349.7425)
					return 1;
				else
					return 2;
			}
		}
	}
}

int tree_1(float d_max, float d_min, float d_mean, float d_std, float rss_max, float rss_min, float rss_mean, float rss_std)
{
	if(rss_max < -61.50405)
	{
		if(d_max < 234.994)
		{
			if(rss_max < -70.5105)
			{
				if(rss_max < -74.67505)
				{
					if(rss_mean < -80.4068)
					{
						if(d_max < 228.164)
						{
							if(rss_min < -81.9739)
							{
								if(d_mean < 158.529)
								{
									if(d_std < 36.08425)
										return 0;
									else
									{
										if(rss_max < -74.93655)
										{
											if(rss_min < -84.29955)
												return 0;
											else
												return 1;
										}
										else
											return 1;
									}
								}
								else
								{
									if(d_mean < 195.494)
									{
										if(rss_max < -80.7413)
										{
											if(d_mean < 174.714)
												return 1;
											else
											{
												if(rss_mean < -83.06725)
												{
													if(d_std < 19.05615)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
										}
										else
										{
											if(d_mean < 159.167)
											{
												if(d_mean < 159.1425)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
									}
									else
									{
										if(rss_std < 1.81646)
											return 0;
										else
										{
											if(rss_max < -78.1612)
											{
												if(d_min < 170.267)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
									}
								}
							}
							else
							{
								if(d_min < 135.446)
									return 1;
								else
									return 0;
							}
						}
						else
						{
							if(rss_max < -75.9693)
							{
								if(rss_min < -84.2605)
									return 0;
								else
								{
									if(d_std < 34.3043)
										return 1;
									else
										return 0;
								}
							}
							else
							{
								if(d_std < 31.2149)
								{
									if(rss_min < -84.9211)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
						}
					}
					else
					{
						if(d_max < 229.428)
							return 0;
						else
						{
							if(d_max < 229.6065)
								return 1;
							else
								return 0;
						}
					}
				}
				else
				{
					if(d_std < 41.6007)
					{
						if(d_min < 101.675)
						{
							if(d_max < 212.76)
							{
								if(rss_min < -84.2782)
								{
									if(d_min < 74.43765)
										return 0;
									else
									{
										if(d_max < 199.935)
											return 1;
										else
										{
											if(rss_max < -72.63555)
												return 0;
											else
												return 1;
										}
									}
								}
								else
									return 0;
							}
							else
							{
								if(rss_max < -73.33985)
								{
									if(d_max < 223.0505)
									{
										if(rss_min < -84.7619)
										{
											if(d_max < 222.924)
											{
												if(d_min < 85.5798)
												{
													if(d_min < 82.8571)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
											else
												return 1;
										}
										else
											return 0;
									}
									else
										return 0;
								}
								else
								{
									if(d_min < 88.89285)
									{
										if(d_min < 77.273)
										{
											if(rss_max < -71.49725)
												return 0;
											else
											{
												if(d_min < 73.47395)
													return 0;
												else
												{
													if(d_max < 224.9615)
													{
														if(d_min < 75.521)
															return 1;
														else
															return 0;
													}
													else
													{
														if(d_min < 73.56045)
															return 1;
														else
															return 0;
													}
												}
											}
										}
										else
										{
											if(rss_min < -84.6288)
											{
												if(rss_max < -71.5634)
												{
													if(d_mean < 141.733)
														return 0;
													else
													{
														if(rss_mean < -79.12425)
														{
															if(d_min < 82.6371)
															{
																if(d_mean < 145.2995)
																{
																	if(d_max < 227.5755)
																		return 0;
																	else
																		return 1;
																}
																else
																	return 0;
															}
															else
															{
																if(d_min < 83.6751)
																{
																	if(rss_max < -72.7836)
																		return 0;
																	else
																		return 1;
																}
																else
																{
																	if(d_max < 221.325)
																		return 1;
																	else
																		return 0;
																}
															}
														}
														else
														{
															if(d_max < 227.8535)
																return 0;
															else
															{
																if(d_max < 231.006)
																	return 1;
																else
																	return 0;
															}
														}
													}
												}
												else
													return 1;
											}
											else
												return 0;
										}
									}
									else
									{
										if(d_min < 95.35725)
										{
											if(rss_std < 3.24785)
											{
												if(d_max < 225.0215)
												{
													if(rss_min < -84.0326)
														return 1;
													else
														return 0;
												}
												else
													return 0;
											}
											else
												return 1;
										}
										else
										{
											if(d_mean < 147.836)
												return 1;
											else
												return 0;
										}
									}
								}
							}
						}
						else
						{
							if(rss_min < -84.3796)
							{
								if(rss_std < 2.35364)
								{
									if(d_mean < 193.1035)
										return 0;
									else
										return 1;
								}
								else
								{
									if(d_min < 107.542)
									{
										if(rss_min < -84.93215)
											return 0;
										else
										{
											if(rss_max < -72.1878)
											{
												if(d_max < 229.76)
													return 1;
												else
													return 0;
											}
											else
											{
												if(d_max < 228.4315)
													return 0;
												else
													return 1;
											}
										}
									}
									else
										return 1;
								}
							}
							else
							{
								if(rss_mean < -79.9473)
									return 0;
								else
								{
									if(rss_min < -83.75305)
										return 1;
									else
										return 0;
								}
							}
						}
					}
					else
					{
						if(rss_max < -71.5066)
						{
							if(rss_std < 3.09771)
							{
								if(rss_min < -84.97875)
								{
									if(d_max < 231.769)
										return 1;
									else
										return 0;
								}
								else
									return 0;
							}
							else
								return 0;
						}
						else
						{
							if(rss_std < 3.666785)
							{
								if(d_min < 73.0658)
									return 0;
								else
								{
									if(d_mean < 159.13)
									{
										if(rss_max < -70.72095)
											return 1;
										else
										{
											if(d_std < 43.73645)
												return 0;
											else
												return 1;
										}
									}
									else
										return 0;
								}
							}
							else
							{
								if(d_min < 79.04835)
								{
									if(rss_mean < -78.9029)
										return 0;
									else
									{
										if(d_max < 232.7735)
										{
											if(d_min < 74.98915)
											{
												if(d_min < 74.6285)
													return 0;
												else
												{
													if(d_min < 74.7684)
														return 1;
													else
														return 0;
												}
											}
											else
											{
												if(d_min < 75.31835)
													return 1;
												else
													return 0;
											}
										}
										else
											return 1;
									}
								}
								else
								{
									if(d_mean < 153.751)
										return 1;
									else
										return 0;
								}
							}
						}
					}
				}
			}
			else
			{
				if(rss_min < -84.5288)
				{
					if(rss_std < 4.777095)
					{
						if(rss_min < -84.9187)
						{
							if(d_min < 69.642)
							{
								if(rss_max < -68.72385)
									return 0;
								else
								{
									if(d_std < 47.7457)
									{
										if(d_mean < 156.881)
										{
											if(d_min < 52.2611)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
									else
									{
										if(d_std < 51.49325)
											return 0;
										else
											return 1;
									}
								}
							}
							else
							{
								if(rss_std < 3.699575)
								{
									if(rss_min < -84.9588)
										return 1;
									else
										return 0;
								}
								else
									return 1;
							}
						}
						else
						{
							if(d_mean < 146.8675)
							{
								if(d_std < 40.0308)
									return 1;
								else
								{
									if(d_mean < 108.1565)
										return 0;
									else
									{
										if(d_min < 69.22585)
										{
											if(d_mean < 139.362)
											{
												if(rss_min < -84.85755)
												{
													if(d_mean < 127.383)
													{
														if(d_std < 47.34475)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
												else
													return 1;
											}
											else
											{
												if(rss_max < -69.4198)
													return 0;
												else
												{
													if(rss_std < 4.158335)
														return 0;
													else
														return 1;
												}
											}
										}
										else
											return 1;
									}
								}
							}
							else
							{
								if(rss_std < 4.355505)
								{
									if(d_mean < 176.1105)
									{
										if(rss_min < -84.7578)
										{
											if(d_min < 64.8644)
											{
												if(d_min < 63.39435)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
										else
										{
											if(rss_min < -84.67795)
											{
												if(d_max < 229.289)
												{
													if(d_mean < 159.5765)
													{
														if(rss_mean < -78.9089)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
												else
													return 0;
											}
											else
											{
												if(d_min < 71.3209)
													return 0;
												else
													return 1;
											}
										}
									}
									else
										return 0;
								}
								else
								{
									if(rss_max < -68.68255)
									{
										if(d_std < 40.8683)
											return 1;
										else
										{
											if(d_mean < 146.984)
											{
												if(d_min < 64.9443)
													return 1;
												else
													return 0;
											}
											else
											{
												if(rss_mean < -78.53495)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(d_max < 225.979)
										{
											if(rss_min < -84.75685)
												return 1;
											else
												return 0;
										}
										else
										{
											if(d_std < 43.6395)
												return 0;
											else
												return 1;
										}
									}
								}
							}
						}
					}
					else
					{
						if(rss_std < 6.318815)
						{
							if(d_std < 49.36495)
							{
								if(rss_mean < -75.26415)
								{
									if(d_mean < 123.43)
									{
										if(rss_max < -66.8234)
										{
											if(d_min < 52.18025)
												return 0;
											else
												return 1;
										}
										else
											return 1;
									}
									else
									{
										if(d_max < 218.2785)
											return 1;
										else
										{
											if(rss_max < -65.0292)
											{
												if(d_min < 68.6285)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
									}
								}
								else
									return 0;
							}
							else
							{
								if(rss_max < -64.98575)
								{
									if(d_max < 217.9845)
									{
										if(rss_min < -84.7993)
											return 1;
										else
										{
											if(rss_max < -67.22735)
												return 0;
											else
											{
												if(d_std < 50.5953)
													return 1;
												else
													return 0;
											}
										}
									}
									else
									{
										if(rss_std < 5.377885)
										{
											if(d_mean < 127.4595)
											{
												if(rss_max < -66.5341)
												{
													if(d_min < 61.252)
													{
														if(rss_mean < -77.22355)
															return 1;
														else
														{
															if(d_min < 51.84845)
																return 0;
															else
															{
																if(rss_std < 4.955995)
																	return 1;
																else
																	return 0;
															}
														}
													}
													else
														return 1;
												}
												else
													return 1;
											}
											else
											{
												if(d_mean < 154.4975)
												{
													if(d_max < 232.1705)
													{
														if(d_mean < 140.218)
														{
															if(rss_min < -84.85755)
																return 0;
															else
															{
																if(rss_mean < -78.0556)
																{
																	if(rss_min < -84.81335)
																		return 1;
																	else
																	{
																		if(rss_min < -84.70525)
																			return 0;
																		else
																			return 1;
																	}
																}
																else
																{
																	if(rss_min < -84.8369)
																		return 1;
																	else
																		return 0;
																}
															}
														}
														else
															return 0;
													}
													else
													{
														if(d_min < 70.42855)
															return 0;
														else
															return 1;
													}
												}
												else
													return 0;
											}
										}
										else
											return 0;
									}
								}
								else
								{
									if(d_min < 43.2946)
									{
										if(rss_max < -63.0932)
										{
											if(d_max < 216.3395)
												return 1;
											else
												return 0;
										}
										else
										{
											if(d_min < 31.1432)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(d_std < 59.94695)
											return 1;
										else
											return 0;
									}
								}
							}
						}
						else
						{
							if(d_std < 58.71535)
							{
								if(d_max < 221.9275)
									return 1;
								else
									return 0;
							}
							else
								return 0;
						}
					}
				}
				else
				{
					if(d_min < 71.0243)
					{
						if(rss_min < -83.2785)
						{
							if(rss_mean < -77.38705)
							{
								if(d_mean < 132.6605)
								{
									if(rss_max < -66.54625)
									{
										if(d_std < 34.0983)
										{
											if(d_min < 58.30265)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
									else
									{
										if(d_max < 216.9195)
											return 1;
										else
											return 0;
									}
								}
								else
									return 0;
							}
							else
							{
								if(d_min < 66.19425)
								{
									if(rss_max < -62.89085)
									{
										if(d_std < 49.20475)
										{
											if(rss_max < -66.8758)
												return 0;
											else
											{
												if(d_min < 46.5273)
												{
													if(d_std < 41.6908)
													{
														if(rss_max < -64.3743)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
												else
												{
													if(d_max < 181.998)
														return 0;
													else
														return 1;
												}
											}
										}
										else
											return 0;
									}
									else
									{
										if(d_std < 55.063)
										{
											if(rss_min < -83.7928)
											{
												if(d_mean < 113.5575)
													return 0;
												else
													return 1;
											}
											else
											{
												if(d_min < 39.19785)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(d_max < 220.4425)
												return 0;
											else
											{
												if(d_min < 33.78595)
													return 0;
												else
													return 1;
											}
										}
									}
								}
								else
								{
									if(rss_max < -68.9424)
										return 0;
									else
										return 1;
								}
							}
						}
						else
						{
							if(d_std < 90.7565)
								return 0;
							else
								return 1;
						}
					}
					else
					{
						if(d_mean < 136.172)
							return 1;
						else
						{
							if(d_min < 93.93255)
							{
								if(d_std < 42.1787)
									return 0;
								else
									return 1;
							}
							else
								return 1;
						}
					}
				}
			}
		}
		else
		{
			if(rss_mean < -73.7485)
			{
				if(rss_max < -76.0856)
				{
					if(d_max < 247.839)
					{
						if(d_max < 246.495)
						{
							if(d_max < 242.901)
								return 0;
							else
							{
								if(d_max < 243.1305)
									return 1;
								else
									return 0;
							}
						}
						else
						{
							if(d_max < 246.707)
								return 1;
							else
								return 0;
						}
					}
					else
					{
						if(d_min < 131.7315)
						{
							if(rss_min < -84.82995)
							{
								if(rss_max < -77.5943)
									return 0;
								else
								{
									if(rss_max < -76.9695)
									{
										if(d_mean < 181.7305)
											return 1;
										else
										{
											if(d_min < 120.5215)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(rss_std < 2.8223)
										{
											if(rss_max < -76.8752)
												return 0;
											else
											{
												if(rss_max < -76.31965)
													return 1;
												else
												{
													if(d_min < 109.2115)
														return 0;
													else
														return 1;
												}
											}
										}
										else
											return 0;
									}
								}
							}
							else
							{
								if(rss_max < -79.02985)
									return 1;
								else
								{
									if(d_max < 247.9975)
										return 1;
									else
										return 0;
								}
							}
						}
						else
						{
							if(rss_max < -78.37795)
							{
								if(rss_min < -84.89615)
									return 0;
								else
								{
									if(d_max < 286.5855)
									{
										if(rss_min < -84.7771)
											return 0;
										else
										{
											if(d_max < 272.645)
												return 1;
											else
											{
												if(d_max < 279.6095)
												{
													if(d_min < 185.5105)
														return 1;
													else
														return 0;
												}
												else
													return 0;
											}
										}
									}
									else
									{
										if(d_min < 151.263)
											return 0;
										else
											return 1;
									}
								}
							}
							else
							{
								if(rss_mean < -81.07165)
									return 1;
								else
									return 0;
							}
						}
					}
				}
				else
				{
					if(d_max < 249.19)
					{
						if(d_mean < 153.7495)
						{
							if(rss_min < -83.2069)
							{
								if(d_max < 236.4145)
								{
									if(d_max < 235.856)
										return 1;
									else
									{
										if(rss_min < -84.92415)
											return 0;
										else
										{
											if(rss_std < 3.808715)
												return 0;
											else
											{
												if(rss_max < -70.1749)
													return 0;
												else
													return 1;
											}
										}
									}
								}
								else
								{
									if(rss_min < -84.96955)
									{
										if(d_max < 241.413)
										{
											if(rss_max < -73.9836)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
									else
									{
										if(rss_std < 2.93292)
										{
											if(d_mean < 139.9485)
											{
												if(d_min < 78.6404)
													return 0;
												else
													return 1;
											}
											else
											{
												if(d_max < 239.826)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(rss_mean < -78.9952)
											{
												if(rss_std < 4.84214)
												{
													if(d_max < 246.9795)
														return 1;
													else
													{
														if(d_max < 247.3435)
															return 0;
														else
														{
															if(d_mean < 148.7785)
															{
																if(rss_std < 4.66685)
																	return 1;
																else
																	return 0;
															}
															else
																return 1;
														}
													}
												}
												else
												{
													if(d_mean < 149.5755)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(rss_max < -71.7378)
												{
													if(d_std < 36.40115)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
										}
									}
								}
							}
							else
								return 0;
						}
						else
						{
							if(rss_min < -84.91845)
							{
								if(rss_min < -84.9854)
									return 1;
								else
								{
									if(rss_std < 3.859505)
									{
										if(rss_max < -73.09785)
										{
											if(rss_min < -84.9626)
												return 0;
											else
											{
												if(rss_min < -84.96125)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(d_min < 74.5967)
												return 0;
											else
											{
												if(rss_max < -71.21345)
													return 1;
												else
												{
													if(d_mean < 156.9905)
													{
														if(d_max < 239.0555)
															return 1;
														else
															return 0;
													}
													else
													{
														if(rss_max < -70.42635)
															return 0;
														else
															return 1;
													}
												}
											}
										}
									}
									else
									{
										if(rss_mean < -79.08165)
											return 0;
										else
										{
											if(d_max < 239.7905)
												return 0;
											else
												return 1;
										}
									}
								}
							}
							else
							{
								if(d_std < 46.21915)
								{
									if(rss_mean < -79.19085)
									{
										if(d_mean < 175.3085)
											return 1;
										else
										{
											if(rss_max < -74.57865)
												return 1;
											else
											{
												if(rss_max < -73.67925)
												{
													if(d_std < 45.6788)
														return 0;
													else
													{
														if(d_max < 241.6245)
															return 1;
														else
															return 0;
													}
												}
												else
												{
													if(d_std < 43.4794)
														return 1;
													else
														return 0;
												}
											}
										}
									}
									else
										return 0;
								}
								else
								{
									if(rss_min < -84.81305)
									{
										if(rss_std < 2.638655)
										{
											if(d_min < 96.8728)
												return 0;
											else
												return 1;
										}
										else
											return 1;
									}
									else
									{
										if(d_mean < 159.702)
										{
											if(rss_mean < -79.53855)
											{
												if(d_std < 52.9147)
													return 1;
												else
													return 0;
											}
											else
											{
												if(d_std < 49.82655)
												{
													if(rss_min < -82.97245)
														return 1;
													else
														return 0;
												}
												else
												{
													if(d_max < 247.431)
													{
														if(rss_max < -66.72965)
															return 0;
														else
															return 1;
													}
													else
													{
														if(rss_std < 3.466935)
															return 0;
														else
															return 1;
													}
												}
											}
										}
										else
										{
											if(d_min < 73.07505)
											{
												if(rss_std < 4.25549)
													return 1;
												else
												{
													if(d_max < 245.9865)
														return 0;
													else
														return 1;
												}
											}
											else
												return 0;
										}
									}
								}
							}
						}
					}
					else
					{
						if(rss_min < -84.4601)
						{
							if(d_mean < 158.0235)
							{
								if(rss_max < -71.53675)
								{
									if(rss_min < -84.9256)
									{
										if(rss_mean < -79.5375)
										{
											if(rss_min < -84.94055)
												return 1;
											else
												return 0;
										}
										else
										{
											if(d_max < 267.7035)
												return 1;
											else
											{
												if(rss_min < -84.97495)
													return 1;
												else
													return 0;
											}
										}
									}
									else
										return 1;
								}
								else
								{
									if(d_min < 66.80965)
									{
										if(rss_max < -67.77655)
										{
											if(d_min < 55.8855)
											{
												if(rss_mean < -78.2746)
													return 1;
												else
													return 0;
											}
											else
											{
												if(rss_min < -84.81185)
												{
													if(d_min < 66.6906)
													{
														if(rss_min < -84.86405)
														{
															if(d_std < 45.2058)
															{
																if(d_min < 63.05685)
																{
																	if(d_std < 42.6994)
																		return 1;
																	else
																	{
																		if(rss_min < -84.96445)
																			return 1;
																		else
																			return 0;
																	}
																}
																else
																	return 1;
															}
															else
																return 1;
														}
														else
														{
															if(d_min < 64.1741)
															{
																if(rss_max < -69.3719)
																	return 0;
																else
																	return 1;
															}
															else
																return 0;
														}
													}
													else
														return 0;
												}
												else
													return 1;
											}
										}
										else
											return 1;
									}
									else
									{
										if(rss_max < -71.0621)
										{
											if(d_max < 273.335)
											{
												if(d_min < 74.08145)
												{
													if(d_min < 68.4104)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
											else
												return 1;
										}
										else
											return 1;
									}
								}
							}
							else
							{
								if(rss_std < 4.40787)
								{
									if(d_max < 277.7815)
									{
										if(rss_max < -73.96645)
										{
											if(rss_std < 3.16737)
											{
												if(d_min < 99.18035)
													return 0;
												else
												{
													if(d_min < 104.2915)
													{
														if(rss_max < -75.0849)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
											}
											else
											{
												if(d_mean < 163.4985)
													return 1;
												else
												{
													if(d_min < 115.337)
														return 0;
													else
														return 1;
												}
											}
										}
										else
										{
											if(d_min < 84.47875)
											{
												if(d_max < 263.379)
													return 1;
												else
												{
													if(d_max < 265.2465)
														return 0;
													else
													{
														if(rss_min < -84.94835)
														{
															if(rss_max < -70.9052)
																return 0;
															else
																return 1;
														}
														else
															return 1;
													}
												}
											}
											else
												return 1;
										}
									}
									else
									{
										if(rss_min < -84.9674)
										{
											if(rss_max < -73.99425)
											{
												if(rss_min < -84.975)
													return 1;
												else
													return 0;
											}
											else
											{
												if(rss_min < -84.9856)
												{
													if(d_max < 309.6965)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
										}
										else
										{
											if(d_std < 44.83405)
											{
												if(d_std < 44.8262)
												{
													if(rss_max < -75.6407)
													{
														if(d_min < 111.2085)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
												else
													return 0;
											}
											else
												return 1;
										}
									}
								}
								else
								{
									if(d_mean < 180.9065)
									{
										if(d_min < 101.5745)
										{
											if(rss_min < -84.9855)
												return 0;
											else
											{
												if(rss_min < -84.82495)
												{
													if(d_min < 66.11635)
													{
														if(rss_max < -67.785)
														{
															if(rss_std < 4.92111)
															{
																if(d_max < 319.332)
																{
																	if(rss_min < -84.85135)
																		return 0;
																	else
																	{
																		if(d_max < 291.5945)
																			return 0;
																		else
																			return 1;
																	}
																}
																else
																{
																	if(d_min < 65.1985)
																		return 1;
																	else
																		return 0;
																}
															}
															else
															{
																if(d_mean < 160.693)
																{
																	if(d_min < 59.08585)
																		return 0;
																	else
																		return 1;
																}
																else
																	return 0;
															}
														}
														else
															return 1;
													}
													else
														return 1;
												}
												else
												{
													if(rss_max < -68.0866)
													{
														if(d_std < 58.60515)
															return 1;
														else
														{
															if(d_max < 295.7845)
																return 0;
															else
																return 1;
														}
													}
													else
														return 1;
												}
											}
										}
										else
										{
											if(rss_max < -72.5412)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(rss_mean < -80.27245)
											return 0;
										else
										{
											if(d_max < 324.07)
												return 1;
											else
												return 0;
										}
									}
								}
							}
						}
						else
						{
							if(rss_mean < -78.0901)
							{
								if(d_max < 274.011)
								{
									if(d_max < 270.2875)
									{
										if(rss_min < -84.32905)
											return 0;
										else
										{
											if(d_std < 49.40925)
											{
												if(d_min < 133.901)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
									}
									else
										return 0;
								}
								else
									return 1;
							}
							else
							{
								if(rss_max < -71.26765)
									return 2;
								else
									return 1;
							}
						}
					}
				}
			}
			else
				return 2;
		}
	}
	else
	{
		if(rss_mean < -69.827)
		{
			if(rss_std < 7.02979)
			{
				if(rss_mean < -76.6477)
				{
					if(d_max < 189.8975)
						return 0;
					else
					{
						if(rss_max < -60.12625)
							return 1;
						else
						{
							if(d_mean < 128.353)
								return 1;
							else
							{
								if(rss_min < -84.4045)
									return 1;
								else
									return 0;
							}
						}
					}
				}
				else
				{
					if(d_max < 185.862)
						return 0;
					else
					{
						if(rss_min < -83.9597)
						{
							if(d_std < 54.2638)
								return 1;
							else
							{
								if(rss_max < -60.9364)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(d_std < 46.2231)
							{
								if(d_min < 31.3371)
									return 0;
								else
									return 1;
							}
							else
								return 0;
						}
					}
				}
			}
			else
			{
				if(d_max < 239.683)
				{
					if(rss_min < -84.80525)
					{
						if(d_max < 227.2545)
						{
							if(d_std < 80.4855)
								return 1;
							else
								return 0;
						}
						else
						{
							if(d_std < 50.86125)
								return 1;
							else
								return 0;
						}
					}
					else
					{
						if(rss_std < 7.315355)
						{
							if(rss_max < -56.7964)
								return 0;
							else
							{
								if(rss_max < -56.32335)
									return 1;
								else
									return 0;
							}
						}
						else
							return 0;
					}
				}
				else
					return 1;
			}
		}
		else
			return 2;
	}
}

int tree_2(float d_max, float d_min, float d_mean, float d_std, float rss_max, float rss_min, float rss_mean, float rss_std)
{
	if(rss_mean < -70.5974)
	{
		if(d_max < 234.994)
		{
			if(rss_max < -70.5105)
			{
				if(rss_min < -84.25745)
				{
					if(rss_max < -74.7407)
					{
						if(rss_min < -84.2605)
						{
							if(d_mean < 179.775)
								return 0;
							else
							{
								if(rss_mean < -81.53825)
								{
									if(d_mean < 195.488)
									{
										if(rss_max < -81.63835)
											return 1;
										else
											return 0;
									}
									else
									{
										if(rss_mean < -82.78285)
										{
											if(rss_std < 2.434055)
												return 0;
											else
											{
												if(d_mean < 204.3395)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(d_mean < 204.7475)
											{
												if(d_mean < 197.33)
												{
													if(d_max < 217.4755)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
											else
												return 0;
										}
									}
								}
								else
								{
									if(rss_max < -76.0739)
										return 0;
									else
										return 1;
								}
							}
						}
						else
						{
							if(d_max < 218.118)
								return 0;
							else
								return 1;
						}
					}
					else
					{
						if(d_min < 101.9425)
						{
							if(d_max < 218.4815)
							{
								if(d_std < 42.7928)
								{
									if(rss_min < -84.5565)
									{
										if(d_min < 88.0227)
										{
											if(rss_min < -84.85835)
											{
												if(rss_mean < -79.57545)
													return 1;
												else
													return 0;
											}
											else
											{
												if(rss_mean < -79.41825)
												{
													if(d_mean < 160.618)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
										}
										else
										{
											if(rss_min < -84.6261)
												return 1;
											else
											{
												if(d_min < 94.94535)
													return 1;
												else
													return 0;
											}
										}
									}
									else
									{
										if(rss_max < -70.7073)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(rss_max < -70.68025)
									{
										if(rss_min < -84.75825)
											return 1;
										else
											return 0;
									}
									else
									{
										if(rss_min < -84.75735)
											return 1;
										else
											return 0;
									}
								}
							}
							else
							{
								if(rss_min < -84.89845)
								{
									if(rss_min < -84.98215)
									{
										if(d_mean < 158.1405)
										{
											if(rss_min < -84.98255)
											{
												if(rss_min < -84.9836)
												{
													if(rss_max < -72.17115)
														return 0;
													else
													{
														if(d_min < 77.6125)
															return 0;
														else
															return 1;
													}
												}
												else
													return 0;
											}
											else
												return 1;
										}
										else
											return 0;
									}
									else
										return 0;
								}
								else
								{
									if(rss_std < 3.75552)
									{
										if(d_mean < 152.2355)
										{
											if(rss_mean < -79.75135)
												return 1;
											else
											{
												if(rss_max < -71.54915)
												{
													if(d_std < 39.82555)
													{
														if(d_max < 228.007)
															return 0;
														else
														{
															if(d_min < 78.69715)
															{
																if(d_max < 231.7875)
																	return 1;
																else
																	return 0;
															}
															else
															{
																if(rss_std < 3.42408)
																	return 0;
																else
																	return 1;
															}
														}
													}
													else
														return 0;
												}
												else
												{
													if(d_std < 45.5757)
													{
														if(d_min < 73.79355)
														{
															if(rss_min < -84.896)
																return 1;
															else
																return 0;
														}
														else
														{
															if(rss_std < 3.45771)
																return 1;
															else
															{
																if(rss_max < -70.72095)
																	return 1;
																else
																	return 0;
															}
														}
													}
													else
														return 1;
												}
											}
										}
										else
										{
											if(rss_std < 3.35417)
											{
												if(rss_max < -72.09455)
												{
													if(rss_min < -84.7648)
													{
														if(d_std < 39.04235)
														{
															if(rss_min < -84.77345)
															{
																if(rss_min < -84.82665)
																{
																	if(d_max < 226.4615)
																		return 1;
																	else
																		return 0;
																}
																else
																	return 0;
															}
															else
															{
																if(rss_min < -84.77055)
																	return 1;
																else
																{
																	if(d_max < 223.862)
																		return 1;
																	else
																		return 0;
																}
															}
														}
														else
															return 0;
													}
													else
														return 0;
												}
												else
												{
													if(d_max < 223.185)
														return 1;
													else
													{
														if(rss_max < -71.3117)
															return 0;
														else
															return 1;
													}
												}
											}
											else
											{
												if(d_std < 48.2915)
													return 0;
												else
												{
													if(d_std < 48.347)
														return 1;
													else
														return 0;
												}
											}
										}
									}
									else
									{
										if(rss_min < -84.89545)
										{
											if(d_mean < 138.9285)
												return 1;
											else
												return 0;
										}
										else
										{
											if(rss_std < 4.03422)
											{
												if(d_mean < 144.8405)
												{
													if(d_min < 73.2269)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
											else
												return 0;
										}
									}
								}
							}
						}
						else
						{
							if(rss_mean < -81.40955)
							{
								if(rss_max < -74.57885)
									return 1;
								else
								{
									if(d_max < 226.0665)
									{
										if(rss_mean < -81.5365)
											return 0;
										else
										{
											if(d_min < 119.909)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(d_max < 228.59)
											return 1;
										else
											return 0;
									}
								}
							}
							else
							{
								if(d_min < 107.542)
								{
									if(d_std < 24.4046)
										return 1;
									else
									{
										if(d_min < 105.306)
										{
											if(rss_max < -71.7011)
												return 0;
											else
												return 1;
										}
										else
										{
											if(d_std < 29.30245)
											{
												if(d_max < 228.4315)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
									}
								}
								else
								{
									if(rss_std < 2.41054)
										return 0;
									else
										return 1;
								}
							}
						}
					}
				}
				else
				{
					if(rss_min < -83.9036)
					{
						if(rss_min < -83.9043)
						{
							if(d_max < 230.9995)
							{
								if(rss_min < -84.06955)
									return 0;
								else
								{
									if(rss_min < -84.0692)
										return 1;
									else
									{
										if(d_std < 46.08685)
											return 0;
										else
										{
											if(rss_mean < -81.42495)
												return 1;
											else
												return 0;
										}
									}
								}
							}
							else
							{
								if(d_std < 37.24775)
									return 1;
								else
									return 0;
							}
						}
						else
						{
							if(d_max < 216.6225)
								return 0;
							else
								return 1;
						}
					}
					else
					{
						if(rss_mean < -80.5193)
						{
							if(rss_max < -80.186)
							{
								if(d_min < 124.5055)
									return 1;
								else
								{
									if(rss_std < 1.49068)
										return 0;
									else
										return 1;
								}
							}
							else
							{
								if(d_mean < 176.9115)
									return 0;
								else
								{
									if(d_std < 29.8474)
										return 0;
									else
									{
										if(d_max < 220.177)
											return 0;
										else
											return 1;
									}
								}
							}
						}
						else
							return 0;
					}
				}
			}
			else
			{
				if(d_std < 52.60545)
				{
					if(d_max < 188.9415)
					{
						if(d_min < 70.3484)
						{
							if(rss_max < -68.2665)
								return 0;
							else
							{
								if(rss_min < -84.50165)
									return 1;
								else
								{
									if(d_std < 33.36365)
									{
										if(d_min < 59.99985)
											return 0;
										else
										{
											if(rss_mean < -78.0773)
											{
												if(d_min < 61.0458)
													return 1;
												else
													return 0;
											}
											else
											{
												if(d_max < 156.723)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(rss_max < -62.83475)
											return 0;
										else
										{
											if(d_min < 36.64465)
											{
												if(rss_min < -83.2855)
												{
													if(d_mean < 115.4175)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
											else
											{
												if(rss_std < 5.13915)
													return 1;
												else
												{
													if(d_min < 38.16425)
														return 1;
													else
														return 0;
												}
											}
										}
									}
								}
							}
						}
						else
						{
							if(rss_std < 2.767205)
								return 0;
							else
								return 1;
						}
					}
					else
					{
						if(rss_min < -84.39455)
						{
							if(d_std < 48.40765)
							{
								if(d_mean < 176.134)
								{
									if(d_max < 211.494)
										return 1;
									else
									{
										if(rss_min < -84.92005)
										{
											if(d_min < 67.7042)
											{
												if(rss_mean < -78.501)
													return 0;
												else
												{
													if(rss_min < -84.9619)
													{
														if(rss_max < -68.72385)
															return 0;
														else
														{
															if(rss_mean < -75.34765)
															{
																if(d_mean < 136.713)
																	return 1;
																else
																{
																	if(d_min < 58.4022)
																		return 0;
																	else
																		return 1;
																}
															}
															else
																return 0;
														}
													}
													else
														return 0;
												}
											}
											else
											{
												if(rss_min < -84.9572)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(d_std < 38.31915)
											{
												if(d_max < 212.0165)
													return 0;
												else
												{
													if(d_min < 114.3705)
													{
														if(d_mean < 174.343)
														{
															if(rss_max < -65.7969)
															{
																if(d_std < 38.0772)
																	return 1;
																else
																{
																	if(rss_min < -84.7578)
																		return 1;
																	else
																	{
																		if(d_mean < 155.319)
																			return 1;
																		else
																			return 0;
																	}
																}
															}
															else
															{
																if(d_mean < 137.502)
																	return 1;
																else
																	return 0;
															}
														}
														else
															return 0;
													}
													else
														return 0;
												}
											}
											else
											{
												if(rss_min < -84.7578)
												{
													if(d_min < 67.4899)
													{
														if(d_max < 223.401)
															return 1;
														else
														{
															if(rss_max < -67.14565)
															{
																if(d_max < 226.8485)
																	return 0;
																else
																{
																	if(d_mean < 135.8665)
																		return 1;
																	else
																	{
																		if(d_mean < 157.817)
																			return 0;
																		else
																			return 1;
																	}
																}
															}
															else
																return 1;
														}
													}
													else
														return 1;
												}
												else
												{
													if(rss_max < -69.11525)
													{
														if(d_max < 225.1375)
															return 0;
														else
														{
															if(d_min < 66.54825)
																return 0;
															else
																return 1;
														}
													}
													else
													{
														if(d_mean < 151.7875)
														{
															if(d_std < 47.63245)
															{
																if(rss_min < -84.70805)
																	return 0;
																else
																	return 1;
															}
															else
															{
																if(d_mean < 117.451)
																	return 1;
																else
																{
																	if(rss_max < -65.49175)
																		return 0;
																	else
																		return 1;
																}
															}
														}
														else
															return 0;
													}
												}
											}
										}
									}
								}
								else
									return 0;
							}
							else
							{
								if(rss_max < -65.5929)
								{
									if(rss_std < 4.288165)
									{
										if(rss_mean < -78.0573)
											return 1;
										else
											return 0;
									}
									else
									{
										if(d_max < 227.7745)
										{
											if(d_max < 222.827)
											{
												if(d_min < 53.99715)
												{
													if(rss_max < -67.69745)
													{
														if(d_max < 214.4545)
															return 1;
														else
															return 0;
													}
													else
													{
														if(d_max < 210.005)
															return 1;
														else
															return 0;
													}
												}
												else
												{
													if(d_min < 57.0475)
													{
														if(d_mean < 132.775)
															return 0;
														else
															return 1;
													}
													else
													{
														if(rss_min < -84.81135)
														{
															if(rss_min < -84.84205)
															{
																if(d_max < 222.4535)
																	return 0;
																else
																	return 1;
															}
															else
																return 1;
														}
														else
															return 0;
													}
												}
											}
											else
											{
												if(rss_min < -84.7644)
													return 0;
												else
												{
													if(rss_max < -66.91465)
														return 0;
													else
														return 1;
												}
											}
										}
										else
										{
											if(rss_min < -84.88995)
												return 0;
											else
											{
												if(rss_min < -84.5799)
												{
													if(rss_std < 4.95549)
													{
														if(d_mean < 162.848)
														{
															if(d_max < 230.406)
																return 1;
															else
															{
																if(d_min < 66.8599)
																	return 0;
																else
																{
																	if(rss_max < -69.61505)
																		return 0;
																	else
																		return 1;
																}
															}
														}
														else
															return 0;
													}
													else
													{
														if(d_max < 228.088)
															return 1;
														else
														{
															if(d_min < 69.372)
															{
																if(d_mean < 114.0645)
																	return 1;
																else
																	return 0;
															}
															else
																return 1;
														}
													}
												}
												else
													return 0;
											}
										}
									}
								}
								else
								{
									if(rss_max < -64.10995)
									{
										if(d_mean < 119.9735)
											return 1;
										else
										{
											if(d_min < 48.46755)
											{
												if(d_mean < 134.539)
													return 0;
												else
												{
													if(d_max < 220.563)
														return 1;
													else
														return 0;
												}
											}
											else
												return 1;
										}
									}
									else
									{
										if(d_min < 22.0417)
											return 0;
										else
											return 1;
									}
								}
							}
						}
						else
						{
							if(rss_min < -83.6942)
							{
								if(rss_max < -62.95615)
								{
									if(d_min < 67.51315)
									{
										if(rss_max < -66.8544)
											return 0;
										else
										{
											if(d_max < 221.6015)
											{
												if(d_std < 40.64025)
													return 1;
												else
												{
													if(d_min < 53.3091)
													{
														if(rss_max < -64.1257)
															return 0;
														else
														{
															if(d_std < 45.8108)
																return 1;
															else
																return 0;
														}
													}
													else
													{
														if(d_max < 216.196)
															return 0;
														else
															return 1;
													}
												}
											}
											else
												return 1;
										}
									}
									else
									{
										if(rss_min < -84.32295)
											return 0;
										else
										{
											if(rss_mean < -80.11055)
												return 0;
											else
											{
												if(rss_max < -70.2217)
												{
													if(d_min < 87.36855)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
										}
									}
								}
								else
									return 1;
							}
							else
							{
								if(rss_max < -59.2415)
								{
									if(d_max < 216.196)
									{
										if(d_min < 67.4988)
											return 0;
										else
										{
											if(d_min < 67.76745)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(rss_min < -83.25325)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(d_mean < 120.459)
										return 1;
									else
										return 0;
								}
							}
						}
					}
				}
				else
				{
					if(rss_max < -57.1356)
					{
						if(rss_min < -84.575)
						{
							if(d_mean < 156.839)
							{
								if(d_max < 221.418)
								{
									if(d_mean < 125.1275)
										return 0;
									else
									{
										if(d_mean < 142.872)
										{
											if(d_min < 35.90495)
												return 0;
											else
												return 1;
										}
										else
										{
											if(d_min < 51.19565)
												return 0;
											else
											{
												if(d_max < 218.124)
													return 1;
												else
												{
													if(d_mean < 151.7655)
														return 1;
													else
														return 0;
												}
											}
										}
									}
								}
								else
								{
									if(rss_std < 4.90272)
									{
										if(rss_min < -84.7927)
										{
											if(rss_min < -84.9055)
											{
												if(d_mean < 132.3405)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
										else
										{
											if(rss_max < -69.7059)
											{
												if(rss_max < -69.8893)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
									}
									else
									{
										if(d_std < 61.0525)
										{
											if(d_max < 224.727)
												return 0;
											else
											{
												if(rss_max < -64.9728)
												{
													if(d_max < 225.2095)
													{
														if(d_mean < 136.0385)
															return 0;
														else
															return 1;
													}
													else
													{
														if(d_min < 70.42855)
															return 0;
														else
															return 1;
													}
												}
												else
												{
													if(d_min < 43.2946)
													{
														if(rss_max < -63.22125)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
											}
										}
										else
										{
											if(d_std < 61.67995)
											{
												if(d_std < 61.64375)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
									}
								}
							}
							else
							{
								if(rss_std < 4.55142)
								{
									if(d_max < 231.3705)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
						}
						else
						{
							if(rss_max < -62.2201)
							{
								if(d_std < 105.9498)
									return 0;
								else
									return 1;
							}
							else
							{
								if(d_min < 36.1628)
									return 0;
								else
									return 1;
							}
						}
					}
					else
					{
						if(rss_std < 8.033545)
						{
							if(d_mean < 124.5065)
								return 1;
							else
								return 0;
						}
						else
						{
							if(rss_std < 9.355495)
							{
								if(rss_min < -84.6556)
								{
									if(d_max < 224.7925)
										return 1;
									else
										return 0;
								}
								else
									return 0;
							}
							else
								return 0;
						}
					}
				}
			}
		}
		else
		{
			if(d_mean < 157.54)
			{
				if(rss_max < -73.5412)
				{
					if(rss_mean < -79.3524)
					{
						if(d_std < 42.51215)
						{
							if(d_max < 288.1485)
								return 0;
							else
								return 1;
						}
						else
							return 1;
					}
					else
						return 0;
				}
				else
				{
					if(rss_min < -83.15675)
					{
						if(rss_std < 10.72705)
						{
							if(rss_min < -84.91965)
							{
								if(d_max < 242.8785)
								{
									if(d_max < 236.5905)
										return 0;
									else
									{
										if(d_mean < 153.798)
										{
											if(d_max < 242.3875)
											{
												if(rss_mean < -79.0459)
												{
													if(d_std < 52.38065)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
											else
												return 0;
										}
										else
										{
											if(rss_min < -84.9512)
											{
												if(d_max < 240.7065)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
									}
								}
								else
								{
									if(rss_min < -84.94605)
									{
										if(rss_mean < -77.49375)
										{
											if(rss_std < 4.07782)
											{
												if(d_min < 73.86465)
												{
													if(rss_min < -84.9573)
														return 1;
													else
													{
														if(d_std < 58.4845)
															return 0;
														else
															return 1;
													}
												}
												else
													return 1;
											}
											else
												return 1;
										}
										else
										{
											if(d_std < 55.38175)
												return 1;
											else
											{
												if(d_max < 270.5135)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(d_max < 263.6485)
											return 1;
										else
											return 0;
									}
								}
							}
							else
							{
								if(rss_min < -84.2976)
								{
									if(d_min < 73.8984)
									{
										if(rss_max < -68.14875)
										{
											if(d_min < 66.82565)
											{
												if(d_std < 65.2911)
												{
													if(rss_min < -84.76765)
													{
														if(rss_max < -69.44745)
														{
															if(d_max < 261.647)
															{
																if(d_mean < 153.3565)
																	return 1;
																else
																	return 0;
															}
															else
																return 0;
														}
														else
														{
															if(rss_mean < -78.99335)
															{
																if(rss_std < 4.65178)
																	return 1;
																else
																	return 0;
															}
															else
																return 1;
														}
													}
													else
														return 1;
												}
												else
													return 0;
											}
											else
											{
												if(rss_std < 2.97786)
													return 0;
												else
												{
													if(rss_max < -71.2249)
													{
														if(rss_min < -84.85085)
														{
															if(d_min < 73.788)
																return 1;
															else
																return 0;
														}
														else
															return 1;
													}
													else
														return 1;
												}
											}
										}
										else
										{
											if(d_std < 82.66225)
												return 1;
											else
											{
												if(d_max < 253.698)
													return 0;
												else
													return 1;
											}
										}
									}
									else
										return 1;
								}
								else
								{
									if(rss_mean < -78.0833)
									{
										if(rss_mean < -78.7746)
											return 1;
										else
										{
											if(rss_min < -84.21455)
											{
												if(d_mean < 130.1915)
													return 1;
												else
												{
													if(d_mean < 138.934)
														return 0;
													else
													{
														if(rss_min < -84.25925)
															return 1;
														else
															return 0;
													}
												}
											}
											else
												return 1;
										}
									}
									else
										return 1;
								}
							}
						}
						else
						{
							if(d_max < 239.683)
								return 0;
							else
								return 1;
						}
					}
					else
					{
						if(d_max < 250.3805)
							return 0;
						else
							return 1;
					}
				}
			}
			else
			{
				if(d_max < 247.4035)
				{
					if(rss_min < -84.91155)
					{
						if(rss_max < -73.0521)
						{
							if(d_max < 244.8615)
								return 0;
							else
							{
								if(rss_min < -84.96585)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(d_max < 241.3295)
							{
								if(rss_std < 3.900525)
								{
									if(d_std < 46.1181)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
							else
								return 1;
						}
					}
					else
					{
						if(rss_max < -76.0856)
						{
							if(d_mean < 169.6265)
							{
								if(d_std < 39.264)
									return 0;
								else
									return 1;
							}
							else
							{
								if(d_std < 51.41765)
								{
									if(rss_max < -76.3776)
										return 0;
									else
										return 1;
								}
								else
									return 1;
							}
						}
						else
						{
							if(rss_min < -84.4624)
							{
								if(rss_std < 4.96415)
								{
									if(rss_max < -73.67925)
									{
										if(d_max < 243.7955)
										{
											if(rss_min < -84.8609)
											{
												if(rss_std < 2.162415)
													return 0;
												else
												{
													if(rss_max < -74.1075)
														return 1;
													else
														return 0;
												}
											}
											else
											{
												if(rss_max < -74.57845)
												{
													if(d_std < 40.3153)
														return 1;
													else
														return 0;
												}
												else
													return 0;
											}
										}
										else
											return 1;
									}
									else
									{
										if(d_min < 49.6406)
											return 0;
										else
										{
											if(rss_mean < -78.9355)
											{
												if(rss_std < 4.950935)
													return 1;
												else
												{
													if(d_mean < 165.6045)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(d_mean < 157.7455)
													return 0;
												else
													return 1;
											}
										}
									}
								}
								else
								{
									if(rss_min < -84.86535)
										return 1;
									else
										return 0;
								}
							}
							else
								return 0;
						}
					}
				}
				else
				{
					if(rss_max < -77.79035)
					{
						if(rss_min < -84.89615)
						{
							if(d_mean < 200.1325)
							{
								if(d_mean < 199.905)
								{
									if(d_min < 162.6015)
										return 0;
									else
										return 1;
								}
								else
									return 1;
							}
							else
								return 0;
						}
						else
						{
							if(d_max < 286.8265)
							{
								if(rss_min < -84.1072)
								{
									if(d_min < 173.4945)
										return 1;
									else
										return 0;
								}
								else
									return 0;
							}
							else
							{
								if(rss_std < 1.89863)
									return 1;
								else
									return 0;
							}
						}
					}
					else
					{
						if(rss_min < -84.47075)
						{
							if(rss_max < -73.9504)
							{
								if(d_min < 108.6105)
								{
									if(rss_std < 3.221625)
									{
										if(d_mean < 176.2965)
										{
											if(d_mean < 164.347)
											{
												if(rss_std < 3.203425)
													return 1;
												else
												{
													if(d_max < 271.069)
														return 1;
													else
														return 0;
												}
											}
											else
											{
												if(rss_mean < -80.6236)
												{
													if(d_min < 103.6905)
														return 0;
													else
													{
														if(rss_max < -75.61075)
															return 0;
														else
															return 1;
													}
												}
												else
												{
													if(d_max < 261.6585)
														return 0;
													else
														return 1;
												}
											}
										}
										else
										{
											if(rss_max < -75.72795)
												return 0;
											else
											{
												if(rss_min < -84.93575)
													return 0;
												else
													return 1;
											}
										}
									}
									else
										return 0;
								}
								else
								{
									if(rss_mean < -80.6407)
									{
										if(rss_max < -76.88205)
										{
											if(d_min < 120.5215)
												return 0;
											else
												return 1;
										}
										else
											return 1;
									}
									else
									{
										if(rss_std < 2.338695)
											return 0;
										else
										{
											if(rss_std < 3.31132)
											{
												if(d_mean < 186.57)
												{
													if(d_min < 111.103)
													{
														if(d_min < 110.7435)
															return 1;
														else
															return 0;
													}
													else
														return 1;
												}
												else
												{
													if(d_max < 290.097)
														return 0;
													else
														return 1;
												}
											}
											else
												return 0;
										}
									}
								}
							}
							else
							{
								if(rss_std < 4.5442)
								{
									if(d_max < 274.9505)
									{
										if(d_max < 274.7045)
										{
											if(d_min < 82.9071)
											{
												if(rss_max < -70.08785)
												{
													if(d_max < 263.379)
														return 1;
													else
														return 0;
												}
												else
												{
													if(d_min < 66.40855)
													{
														if(d_min < 65.4419)
															return 1;
														else
															return 0;
													}
													else
														return 1;
												}
											}
											else
												return 1;
										}
										else
											return 0;
									}
									else
									{
										if(rss_min < -84.9856)
										{
											if(rss_mean < -80.1609)
											{
												if(d_min < 87.0736)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
										else
											return 1;
									}
								}
								else
								{
									if(rss_mean < -80.2189)
									{
										if(rss_max < -68.88555)
											return 0;
										else
											return 1;
									}
									else
									{
										if(rss_max < -67.752)
										{
											if(d_max < 281.101)
											{
												if(d_min < 66.0471)
													return 0;
												else
													return 1;
											}
											else
											{
												if(d_min < 67.5583)
												{
													if(d_min < 64.5677)
														return 1;
													else
														return 0;
												}
												else
												{
													if(rss_mean < -80.1133)
														return 0;
													else
														return 1;
												}
											}
										}
										else
											return 1;
									}
								}
							}
						}
						else
						{
							if(rss_mean < -77.43085)
							{
								if(rss_min < -84.0639)
								{
									if(rss_min < -84.32755)
									{
										if(rss_std < 2.459685)
											return 0;
										else
										{
											if(d_mean < 168.202)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(d_mean < 172.6545)
											return 1;
										else
										{
											if(rss_min < -84.17035)
												return 1;
											else
												return 0;
										}
									}
								}
								else
									return 0;
							}
							else
							{
								if(d_min < 107.03795)
									return 1;
								else
									return 2;
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if(rss_std < 10.49865)
			return 2;
		else
		{
			if(d_mean < 194.146)
			{
				if(d_max < 203.3055)
					return 0;
				else
					return 1;
			}
			else
				return 2;
		}
	}
}

int tree_3(float d_max, float d_min, float d_mean, float d_std, float rss_max, float rss_min, float rss_mean, float rss_std)
{
	if(rss_max < -61.50405)
	{
		if(rss_min < -84.467)
		{
			if(d_max < 237.091)
			{
				if(rss_max < -70.51075)
				{
					if(d_max < 218.478)
					{
						if(rss_min < -84.65465)
						{
							if(d_mean < 137.3325)
							{
								if(d_max < 216.058)
								{
									if(d_min < 81.0253)
										return 0;
									else
										return 1;
								}
								else
									return 1;
							}
							else
							{
								if(d_mean < 170.881)
								{
									if(rss_max < -75.188)
										return 0;
									else
									{
										if(d_std < 38.4968)
										{
											if(rss_min < -84.7576)
												return 1;
											else
											{
												if(rss_min < -84.7511)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(rss_std < 3.435145)
											{
												if(d_max < 213.687)
													return 0;
												else
													return 1;
											}
											else
											{
												if(rss_max < -70.65)
													return 1;
												else
													return 0;
											}
										}
									}
								}
								else
								{
									if(d_mean < 187.561)
										return 0;
									else
										return 1;
								}
							}
						}
						else
						{
							if(d_mean < 146.7825)
							{
								if(d_min < 76.46635)
								{
									if(rss_std < 3.279285)
										return 0;
									else
									{
										if(d_max < 211.6295)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(d_std < 43.72905)
										return 1;
									else
										return 0;
								}
							}
							else
								return 0;
						}
					}
					else
					{
						if(rss_min < -84.91685)
						{
							if(d_max < 219.268)
							{
								if(d_max < 218.7495)
									return 0;
								else
									return 1;
							}
							else
							{
								if(rss_min < -84.98215)
								{
									if(rss_min < -84.98425)
										return 0;
									else
									{
										if(rss_min < -84.98405)
											return 1;
										else
										{
											if(d_std < 44.13575)
											{
												if(rss_max < -74.7576)
													return 0;
												else
												{
													if(rss_max < -74.12675)
														return 1;
													else
													{
														if(rss_min < -84.9836)
															return 1;
														else
														{
															if(rss_max < -71.17325)
																return 0;
															else
																return 1;
														}
													}
												}
											}
											else
												return 0;
										}
									}
								}
								else
								{
									if(rss_max < -71.4922)
										return 0;
									else
									{
										if(d_min < 90.4944)
											return 0;
										else
											return 1;
									}
								}
							}
						}
						else
						{
							if(d_mean < 152.1625)
							{
								if(rss_max < -71.5066)
								{
									if(d_min < 108.94)
									{
										if(d_std < 41.6683)
										{
											if(d_max < 228.1675)
											{
												if(rss_mean < -79.7911)
												{
													if(rss_std < 2.97994)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
											else
											{
												if(rss_std < 3.431165)
												{
													if(d_min < 77.68495)
													{
														if(d_min < 76.82275)
															return 0;
														else
															return 1;
													}
													else
													{
														if(d_mean < 141.003)
														{
															if(d_max < 235.305)
																return 0;
															else
																return 1;
														}
														else
															return 0;
													}
												}
												else
													return 1;
											}
										}
										else
											return 0;
									}
									else
									{
										if(d_max < 230.0315)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(rss_mean < -79.21315)
									{
										if(d_min < 73.99165)
										{
											if(d_mean < 146.709)
												return 1;
											else
												return 0;
										}
										else
										{
											if(rss_mean < -79.3994)
												return 1;
											else
											{
												if(d_max < 232.1295)
												{
													if(d_max < 224.945)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
										}
									}
									else
									{
										if(d_max < 232.011)
										{
											if(d_min < 80.19655)
												return 0;
											else
												return 1;
										}
										else
										{
											if(d_std < 53.91855)
											{
												if(rss_std < 3.085135)
													return 0;
												else
													return 1;
											}
											else
											{
												if(rss_std < 4.40937)
													return 1;
												else
													return 0;
											}
										}
									}
								}
							}
							else
							{
								if(rss_min < -84.8273)
								{
									if(rss_std < 3.83992)
									{
										if(rss_min < -84.83005)
										{
											if(rss_max < -75.39335)
											{
												if(rss_max < -75.98885)
													return 0;
												else
												{
													if(d_min < 133.0495)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(d_min < 105.529)
												{
													if(d_max < 234.0265)
													{
														if(rss_max < -71.16045)
															return 0;
														else
														{
															if(d_std < 45.4391)
																return 0;
															else
																return 1;
														}
													}
													else
														return 1;
												}
												else
												{
													if(rss_mean < -82.36535)
														return 0;
													else
													{
														if(rss_min < -84.899)
														{
															if(d_mean < 168.2105)
																return 1;
															else
																return 0;
														}
														else
															return 1;
													}
												}
											}
										}
										else
										{
											if(rss_max < -74.6638)
												return 0;
											else
												return 1;
										}
									}
									else
										return 0;
								}
								else
								{
									if(d_mean < 166.78)
									{
										if(d_max < 235.079)
										{
											if(rss_std < 3.107865)
											{
												if(rss_max < -74.74205)
													return 0;
												else
												{
													if(d_min < 90.761)
													{
														if(rss_std < 3.024315)
															return 0;
														else
														{
															if(d_max < 220.351)
																return 1;
															else
																return 0;
														}
													}
													else
													{
														if(d_max < 224.5045)
														{
															if(d_max < 222.7345)
															{
																if(rss_min < -84.7037)
																{
																	if(rss_max < -74.31375)
																		return 0;
																	else
																		return 1;
																}
																else
																	return 0;
															}
															else
																return 1;
														}
														else
														{
															if(rss_min < -84.7051)
																return 0;
															else
															{
																if(d_max < 227.476)
																	return 1;
																else
																	return 0;
															}
														}
													}
												}
											}
											else
												return 0;
										}
										else
											return 1;
									}
									else
									{
										if(d_mean < 197.3775)
											return 0;
										else
										{
											if(d_max < 232.5715)
												return 0;
											else
												return 1;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if(d_std < 49.02955)
					{
						if(rss_min < -84.92005)
						{
							if(d_max < 217.594)
							{
								if(d_max < 177.9465)
									return 0;
								else
									return 1;
							}
							else
							{
								if(d_min < 69.05015)
								{
									if(rss_max < -65.4325)
									{
										if(d_std < 40.45915)
										{
											if(rss_max < -68.8881)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
									else
									{
										if(d_mean < 159.7615)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(d_min < 83.5735)
										return 1;
									else
									{
										if(rss_mean < -78.88955)
										{
											if(d_min < 86.07785)
												return 0;
											else
												return 1;
										}
										else
										{
											if(d_max < 225.761)
												return 1;
											else
												return 0;
										}
									}
								}
							}
						}
						else
						{
							if(rss_mean < -81.25135)
							{
								if(d_min < 92.1799)
									return 0;
								else
									return 1;
							}
							else
							{
								if(d_min < 67.3197)
								{
									if(rss_max < -69.4572)
										return 0;
									else
									{
										if(d_max < 220.3615)
											return 1;
										else
										{
											if(rss_max < -66.81075)
											{
												if(d_min < 56.6025)
													return 0;
												else
												{
													if(rss_std < 4.363035)
													{
														if(rss_mean < -78.98345)
														{
															if(rss_max < -68.98765)
																return 0;
															else
															{
																if(rss_min < -84.8081)
																	return 1;
																else
																	return 0;
															}
														}
														else
															return 1;
													}
													else
													{
														if(d_max < 235.0355)
															return 0;
														else
															return 1;
													}
												}
											}
											else
											{
												if(d_mean < 152.029)
													return 1;
												else
													return 0;
											}
										}
									}
								}
								else
								{
									if(d_min < 114.3705)
									{
										if(rss_min < -84.7578)
										{
											if(d_min < 68.95505)
											{
												if(d_min < 68.58265)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
										else
										{
											if(d_mean < 147.7735)
												return 1;
											else
											{
												if(rss_std < 3.592585)
													return 1;
												else
												{
													if(rss_min < -84.67795)
													{
														if(d_max < 226.5725)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
											}
										}
									}
									else
									{
										if(rss_max < -68.68335)
											return 1;
										else
											return 0;
									}
								}
							}
						}
					}
					else
					{
						if(d_max < 234.982)
						{
							if(d_min < 70.05825)
							{
								if(d_mean < 138.7075)
								{
									if(rss_max < -62.5892)
									{
										if(d_max < 229.875)
										{
											if(rss_std < 4.87372)
											{
												if(d_min < 50.7227)
													return 0;
												else
												{
													if(rss_std < 4.80067)
														return 1;
													else
													{
														if(d_min < 59.7827)
															return 0;
														else
															return 1;
													}
												}
											}
											else
											{
												if(rss_max < -65.5857)
												{
													if(d_min < 58.8792)
													{
														if(rss_std < 5.20172)
														{
															if(d_min < 57.8118)
															{
																if(d_max < 220.37)
																	return 1;
																else
																{
																	if(rss_std < 5.04865)
																	{
																		if(d_mean < 108.539)
																			return 0;
																		else
																			return 1;
																	}
																	else
																		return 0;
																}
															}
															else
																return 0;
														}
														else
															return 0;
													}
													else
													{
														if(rss_max < -68.53715)
														{
															if(rss_min < -84.75635)
															{
																if(rss_max < -69.13165)
																	return 1;
																else
																	return 0;
															}
															else
																return 0;
														}
														else
															return 1;
													}
												}
												else
												{
													if(d_min < 44.78035)
													{
														if(d_std < 56.13035)
														{
															if(d_max < 214.055)
																return 1;
															else
															{
																if(d_max < 224.727)
																	return 0;
																else
																	return 1;
															}
														}
														else
															return 0;
													}
													else
														return 1;
												}
											}
										}
										else
										{
											if(rss_std < 4.764745)
											{
												if(d_min < 64.7918)
												{
													if(d_max < 230.924)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
											else
											{
												if(d_min < 33.2174)
													return 1;
												else
												{
													if(d_min < 39.91475)
													{
														if(d_mean < 120.081)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
											}
										}
									}
									else
									{
										if(rss_min < -84.5713)
											return 1;
										else
										{
											if(d_min < 34.11195)
												return 0;
											else
												return 1;
										}
									}
								}
								else
								{
									if(d_max < 216.586)
									{
										if(rss_min < -84.6757)
											return 1;
										else
											return 0;
									}
									else
									{
										if(d_std < 56.6557)
										{
											if(rss_max < -64.1739)
											{
												if(rss_min < -84.8864)
													return 0;
												else
												{
													if(rss_min < -84.8807)
														return 1;
													else
													{
														if(d_max < 231.061)
														{
															if(rss_max < -68.2086)
															{
																if(d_max < 220.1395)
																{
																	if(d_mean < 145.053)
																		return 1;
																	else
																		return 0;
																}
																else
																	return 0;
															}
															else
															{
																if(d_mean < 140.346)
																	return 1;
																else
																{
																	if(rss_std < 4.749005)
																		return 1;
																	else
																		return 0;
																}
															}
														}
														else
															return 1;
													}
												}
											}
											else
											{
												if(d_min < 42.7528)
													return 0;
												else
													return 1;
											}
										}
										else
											return 0;
									}
								}
							}
							else
							{
								if(rss_mean < -79.7127)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(d_max < 235.872)
								return 1;
							else
							{
								if(d_mean < 151.3705)
								{
									if(d_std < 49.06085)
										return 0;
									else
										return 1;
								}
								else
								{
									if(d_min < 64.8927)
									{
										if(rss_mean < -79.1826)
											return 0;
										else
											return 1;
									}
									else
										return 1;
								}
							}
						}
					}
				}
			}
			else
			{
				if(rss_max < -73.9499)
				{
					if(rss_min < -84.9162)
					{
						if(rss_max < -77.6538)
						{
							if(rss_max < -78.1798)
								return 0;
							else
							{
								if(d_min < 163.145)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(rss_min < -84.9788)
							{
								if(rss_std < 2.70758)
								{
									if(rss_max < -76.5116)
									{
										if(d_min < 122.447)
										{
											if(d_min < 110.646)
											{
												if(d_max < 319.6055)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
										else
											return 1;
									}
									else
										return 1;
								}
								else
								{
									if(rss_max < -75.0816)
									{
										if(rss_std < 2.739815)
										{
											if(d_min < 115.291)
												return 1;
											else
												return 0;
										}
										else
											return 0;
									}
									else
									{
										if(d_max < 249.0775)
											return 0;
										else
											return 1;
									}
								}
							}
							else
							{
								if(rss_std < 2.95329)
								{
									if(d_max < 299.4275)
									{
										if(d_min < 115.998)
											return 0;
										else
										{
											if(d_mean < 185.227)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(rss_min < -84.9673)
											return 0;
										else
											return 1;
									}
								}
								else
									return 0;
							}
						}
					}
					else
					{
						if(d_max < 300.797)
						{
							if(d_min < 108.7245)
							{
								if(d_mean < 163.662)
									return 1;
								else
								{
									if(rss_min < -84.8306)
									{
										if(d_mean < 185.588)
										{
											if(rss_max < -75.61075)
												return 0;
											else
											{
												if(d_min < 97.0217)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(rss_min < -84.9019)
												return 0;
											else
												return 1;
										}
									}
									else
										return 0;
								}
							}
							else
							{
								if(d_max < 275.263)
								{
									if(d_min < 173.4945)
									{
										if(rss_max < -76.67215)
										{
											if(rss_std < 1.97545)
											{
												if(rss_std < 1.36412)
												{
													if(d_max < 254.5155)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
											else
											{
												if(d_std < 36.05285)
													return 1;
												else
												{
													if(rss_min < -84.85025)
													{
														if(rss_mean < -82.1325)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
											}
										}
										else
										{
											if(d_max < 242.5125)
											{
												if(d_max < 242.093)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
									}
									else
										return 0;
								}
								else
									return 1;
							}
						}
						else
						{
							if(rss_mean < -79.8845)
								return 1;
							else
							{
								if(d_mean < 194.356)
									return 1;
								else
									return 0;
							}
						}
					}
				}
				else
				{
					if(d_mean < 213.6075)
					{
						if(d_max < 241.4465)
						{
							if(d_mean < 153.9375)
							{
								if(d_max < 241.0335)
									return 1;
								else
								{
									if(rss_mean < -79.26975)
										return 1;
									else
										return 0;
								}
							}
							else
							{
								if(rss_std < 3.90684)
								{
									if(rss_min < -84.9844)
										return 0;
									else
										return 1;
								}
								else
								{
									if(rss_min < -84.9159)
									{
										if(rss_std < 5.43247)
											return 0;
										else
										{
											if(d_max < 239.7905)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(rss_std < 4.922375)
											return 1;
										else
											return 0;
									}
								}
							}
						}
						else
						{
							if(d_min < 84.90925)
							{
								if(rss_max < -70.1979)
								{
									if(rss_std < 4.515315)
									{
										if(rss_min < -84.9115)
										{
											if(rss_min < -84.95495)
											{
												if(rss_min < -84.9855)
												{
													if(d_min < 71.6309)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
											else
											{
												if(d_max < 289.925)
												{
													if(d_max < 261.327)
														return 1;
													else
													{
														if(d_min < 83.05305)
															return 0;
														else
														{
															if(d_max < 269.656)
																return 1;
															else
																return 0;
														}
													}
												}
												else
													return 1;
											}
										}
										else
										{
											if(rss_std < 2.791415)
											{
												if(rss_mean < -79.1902)
													return 1;
												else
													return 0;
											}
											else
											{
												if(d_min < 82.6258)
													return 1;
												else
												{
													if(d_max < 264.6515)
													{
														if(d_max < 262.914)
															return 1;
														else
															return 0;
													}
													else
														return 1;
												}
											}
										}
									}
									else
									{
										if(rss_min < -84.8398)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(d_std < 68.4353)
									{
										if(rss_max < -67.6574)
										{
											if(d_max < 267.6925)
											{
												if(rss_max < -68.19915)
												{
													if(rss_std < 4.79697)
													{
														if(d_mean < 132.811)
														{
															if(rss_max < -69.5017)
															{
																if(d_min < 68.1602)
																{
																	if(d_max < 257.0685)
																		return 1;
																	else
																		return 0;
																}
																else
																	return 1;
															}
															else
																return 1;
														}
														else
														{
															if(rss_std < 4.77231)
																return 1;
															else
															{
																if(d_min < 66.70345)
																	return 0;
																else
																	return 1;
															}
														}
													}
													else
													{
														if(rss_mean < -79.11215)
														{
															if(d_max < 247.7195)
																return 1;
															else
																return 0;
														}
														else
															return 1;
													}
												}
												else
												{
													if(rss_min < -84.91215)
													{
														if(d_min < 59.08275)
															return 0;
														else
														{
															if(d_mean < 160.777)
																return 1;
															else
																return 0;
														}
													}
													else
														return 1;
												}
											}
											else
											{
												if(d_std < 61.78505)
													return 1;
												else
												{
													if(d_min < 65.48555)
													{
														if(rss_mean < -79.3945)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
											}
										}
										else
											return 1;
									}
									else
									{
										if(rss_max < -68.0053)
										{
											if(rss_std < 4.817065)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
								}
							}
							else
							{
								if(d_max < 247.1535)
								{
									if(rss_max < -73.3943)
										return 0;
									else
										return 1;
								}
								else
								{
									if(d_mean < 143.7205)
									{
										if(rss_min < -84.9261)
										{
											if(rss_max < -72.90355)
												return 0;
											else
												return 1;
										}
										else
											return 1;
									}
									else
										return 1;
								}
							}
						}
					}
					else
					{
						if(d_mean < 269.075)
							return 0;
						else
							return 2;
					}
				}
			}
		}
		else
		{
			if(d_max < 224.2945)
			{
				if(rss_max < -70.6771)
				{
					if(d_std < 24.47645)
					{
						if(rss_max < -73.3552)
						{
							if(d_std < 6.60516)
							{
								if(d_mean < 172.3265)
									return 0;
								else
									return 1;
							}
							else
								return 0;
						}
						else
						{
							if(d_max < 188.708)
								return 0;
							else
							{
								if(rss_std < 2.468775)
									return 0;
								else
									return 1;
							}
						}
					}
					else
					{
						if(rss_mean < -82.40125)
						{
							if(d_max < 220.26)
								return 1;
							else
								return 0;
						}
						else
						{
							if(rss_max < -79.9302)
								return 1;
							else
								return 0;
						}
					}
				}
				else
				{
					if(d_min < 71.0243)
					{
						if(rss_min < -83.7353)
						{
							if(rss_max < -62.5979)
							{
								if(rss_max < -66.8758)
									return 0;
								else
								{
									if(rss_max < -66.84005)
									{
										if(rss_max < -66.85325)
										{
											if(d_min < 47.8625)
												return 0;
											else
												return 1;
										}
										else
											return 1;
									}
									else
									{
										if(rss_std < 5.455375)
										{
											if(rss_max < -64.1257)
											{
												if(d_min < 53.3091)
													return 0;
												else
												{
													if(d_std < 46.86335)
													{
														if(d_mean < 113.7275)
															return 1;
														else
															return 0;
													}
													else
														return 1;
												}
											}
											else
												return 1;
										}
										else
											return 0;
									}
								}
							}
							else
							{
								if(d_std < 55.9227)
								{
									if(d_mean < 113.5575)
										return 0;
									else
										return 1;
								}
								else
								{
									if(d_min < 37.4621)
										return 0;
									else
										return 1;
								}
							}
						}
						else
						{
							if(d_max < 216.196)
							{
								if(rss_std < 4.188595)
								{
									if(rss_min < -83.27885)
									{
										if(d_max < 195.0845)
										{
											if(d_mean < 130.731)
												return 1;
											else
												return 0;
										}
										else
											return 0;
									}
									else
									{
										if(rss_std < 3.857095)
											return 0;
										else
										{
											if(d_max < 159.0965)
											{
												if(d_min < 48.3896)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
									}
								}
								else
								{
									if(d_std < 91.4056)
										return 0;
									else
										return 1;
								}
							}
							else
							{
								if(d_std < 43.82285)
									return 0;
								else
									return 1;
							}
						}
					}
					else
					{
						if(d_max < 219.019)
						{
							if(rss_min < -83.47885)
							{
								if(d_max < 207.361)
								{
									if(rss_std < 2.77191)
										return 0;
									else
										return 1;
								}
								else
								{
									if(rss_min < -83.89105)
										return 1;
									else
										return 0;
								}
							}
							else
								return 0;
						}
						else
						{
							if(d_max < 222.072)
								return 0;
							else
								return 1;
						}
					}
				}
			}
			else
			{
				if(rss_mean < -73.69515)
				{
					if(rss_max < -70.49655)
					{
						if(d_mean < 176.0495)
						{
							if(d_max < 283.5345)
							{
								if(rss_mean < -80.58125)
								{
									if(rss_min < -84.08225)
									{
										if(rss_std < 1.89834)
											return 0;
										else
										{
											if(d_max < 227.864)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(d_min < 134.2265)
										{
											if(rss_mean < -80.777)
												return 0;
											else
											{
												if(d_mean < 159.2555)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(d_max < 263.6215)
												return 1;
											else
												return 0;
										}
									}
								}
								else
								{
									if(d_std < 45.54175)
									{
										if(d_max < 244.2165)
										{
											if(rss_mean < -78.50465)
											{
												if(d_mean < 149.3575)
												{
													if(rss_mean < -78.5646)
														return 1;
													else
													{
														if(d_min < 74.0048)
															return 0;
														else
															return 1;
													}
												}
												else
												{
													if(d_min < 128.342)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(d_min < 90.8233)
												{
													if(d_max < 225.974)
														return 1;
													else
														return 0;
												}
												else
												{
													if(d_min < 104.2044)
														return 1;
													else
														return 0;
												}
											}
										}
										else
										{
											if(d_mean < 167.6015)
											{
												if(rss_max < -77.3724)
												{
													if(d_min < 121.555)
														return 0;
													else
														return 1;
												}
												else
												{
													if(d_mean < 146.1845)
													{
														if(rss_std < 3.240835)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
											}
											else
											{
												if(d_std < 30.37995)
													return 0;
												else
													return 1;
											}
										}
									}
									else
										return 0;
								}
							}
							else
							{
								if(rss_min < -80.24765)
									return 1;
								else
									return 0;
							}
						}
						else
						{
							if(rss_min < -83.18025)
							{
								if(rss_min < -83.68985)
									return 0;
								else
								{
									if(rss_max < -80.06725)
										return 1;
									else
										return 0;
								}
							}
							else
							{
								if(d_max < 337.6625)
									return 1;
								else
									return 2;
							}
						}
					}
					else
					{
						if(rss_mean < -78.6303)
						{
							if(rss_std < 4.373545)
							{
								if(d_std < 42.09785)
								{
									if(d_max < 236.591)
										return 0;
									else
										return 1;
								}
								else
									return 1;
							}
							else
								return 0;
						}
						else
						{
							if(d_min < 67.0645)
							{
								if(rss_max < -67.33905)
								{
									if(rss_min < -84.36345)
										return 1;
									else
										return 0;
								}
								else
								{
									if(rss_min < -84.31025)
									{
										if(rss_min < -84.33025)
											return 1;
										else
											return 0;
									}
									else
										return 1;
								}
							}
							else
							{
								if(d_mean < 154.4895)
									return 1;
								else
									return 0;
							}
						}
					}
				}
				else
					return 2;
			}
		}
	}
	else
	{
		if(rss_mean < -69.76235)
		{
			if(d_max < 239.683)
			{
				if(d_std < 62.4318)
				{
					if(rss_min < -83.9597)
					{
						if(rss_std < 9.495815)
						{
							if(d_max < 170.82)
								return 0;
							else
							{
								if(rss_min < -84.5671)
									return 1;
								else
								{
									if(d_std < 52.7717)
										return 1;
									else
										return 0;
								}
							}
						}
						else
							return 0;
					}
					else
					{
						if(d_min < 33.3638)
							return 0;
						else
						{
							if(rss_std < 6.16617)
								return 1;
							else
								return 0;
						}
					}
				}
				else
					return 0;
			}
			else
			{
				if(d_max < 347.189)
					return 1;
				else
					return 2;
			}
		}
		else
		{
			if(rss_std < 12.5507)
				return 2;
			else
				return 1;
		}
	}
}

int tree_4(float d_max, float d_min, float d_mean, float d_std, float rss_max, float rss_min, float rss_mean, float rss_std)
{
	if(rss_mean < -70.5974)
	{
		if(rss_min < -84.467)
		{
			if(rss_min < -84.90225)
			{
				if(d_max < 247.2505)
				{
					if(d_mean < 142.198)
					{
						if(d_max < 235.056)
						{
							if(rss_max < -70.744)
							{
								if(rss_mean < -78.8353)
								{
									if(d_max < 231.458)
										return 0;
									else
									{
										if(d_max < 233.541)
										{
											if(rss_max < -74.8149)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
								}
								else
									return 0;
							}
							else
							{
								if(d_min < 72.28225)
								{
									if(d_max < 218.081)
									{
										if(d_std < 35.6477)
											return 0;
										else
											return 1;
									}
									else
									{
										if(d_std < 54.68685)
										{
											if(rss_max < -65.03885)
											{
												if(d_std < 40.4418)
												{
													if(d_max < 225.964)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
											else
											{
												if(rss_std < 6.439085)
												{
													if(d_std < 54.4886)
														return 1;
													else
													{
														if(d_max < 228.3995)
															return 1;
														else
															return 0;
													}
												}
												else
													return 0;
											}
										}
										else
											return 0;
									}
								}
								else
								{
									if(rss_max < -70.57245)
									{
										if(rss_max < -70.7131)
											return 1;
										else
											return 0;
									}
									else
										return 1;
								}
							}
						}
						else
						{
							if(d_min < 51.8185)
							{
								if(rss_mean < -77.09075)
									return 1;
								else
									return 0;
							}
							else
								return 1;
						}
					}
					else
					{
						if(rss_mean < -81.02585)
						{
							if(rss_min < -84.9828)
							{
								if(rss_mean < -81.77175)
									return 0;
								else
								{
									if(rss_min < -84.9831)
										return 0;
									else
									{
										if(d_max < 228.1905)
											return 0;
										else
											return 1;
									}
								}
							}
							else
							{
								if(d_mean < 166.7485)
								{
									if(d_max < 237.474)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
						}
						else
						{
							if(d_max < 218.041)
								return 1;
							else
							{
								if(rss_max < -74.49375)
									return 0;
								else
								{
									if(d_max < 237.008)
									{
										if(d_max < 221.1375)
										{
											if(rss_min < -84.95555)
												return 1;
											else
												return 0;
										}
										else
										{
											if(d_std < 38.64585)
											{
												if(d_max < 230.9935)
												{
													if(rss_min < -84.9622)
													{
														if(rss_std < 3.692495)
														{
															if(d_min < 101.02765)
																return 0;
															else
																return 1;
														}
														else
															return 1;
													}
													else
														return 0;
												}
												else
												{
													if(d_max < 232.17)
														return 1;
													else
													{
														if(rss_max < -74.03035)
															return 1;
														else
															return 0;
													}
												}
											}
											else
											{
												if(d_mean < 158.4685)
												{
													if(rss_max < -70.69605)
													{
														if(rss_std < 3.32097)
														{
															if(d_mean < 144.922)
															{
																if(d_min < 90.17575)
																	return 0;
																else
																	return 1;
															}
															else
																return 0;
														}
														else
															return 0;
													}
													else
													{
														if(d_min < 75.28735)
														{
															if(rss_min < -84.91355)
																return 0;
															else
															{
																if(d_min < 60.7137)
																{
																	if(d_max < 231.5235)
																		return 0;
																	else
																		return 1;
																}
																else
																	return 0;
															}
														}
														else
														{
															if(rss_mean < -78.84415)
															{
																if(d_max < 234.3965)
																	return 1;
																else
																	return 0;
															}
															else
															{
																if(rss_std < 3.71642)
																	return 0;
																else
																	return 1;
															}
														}
													}
												}
												else
													return 0;
											}
										}
									}
									else
									{
										if(d_std < 50.50255)
										{
											if(rss_std < 3.910335)
											{
												if(rss_min < -84.97015)
												{
													if(rss_max < -73.33055)
														return 0;
													else
													{
														if(d_min < 87.2518)
														{
															if(rss_max < -69.47315)
																return 0;
															else
																return 1;
														}
														else
															return 1;
													}
												}
												else
													return 1;
											}
											else
												return 0;
										}
										else
										{
											if(rss_max < -67.2696)
												return 0;
											else
												return 1;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if(rss_mean < -82.47855)
					{
						if(rss_mean < -82.48725)
							return 0;
						else
						{
							if(d_mean < 217.998)
								return 0;
							else
								return 1;
						}
					}
					else
					{
						if(d_max < 331.263)
						{
							if(d_mean < 209.1015)
							{
								if(rss_max < -73.9504)
								{
									if(rss_min < -84.9775)
									{
										if(d_std < 52.0615)
										{
											if(rss_max < -76.5116)
											{
												if(d_min < 128.1465)
												{
													if(d_min < 110.646)
													{
														if(d_mean < 175.0535)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
												else
													return 1;
											}
											else
												return 1;
										}
										else
											return 0;
									}
									else
									{
										if(rss_min < -84.9673)
											return 0;
										else
										{
											if(d_min < 109.164)
												return 0;
											else
												return 1;
										}
									}
								}
								else
								{
									if(d_min < 85.0723)
									{
										if(rss_max < -70.182)
										{
											if(d_std < 61.5297)
											{
												if(d_mean < 161.438)
												{
													if(rss_min < -84.95595)
														return 1;
													else
													{
														if(rss_min < -84.9185)
														{
															if(rss_min < -84.94055)
															{
																if(rss_std < 3.832865)
																	return 1;
																else
																{
																	if(rss_mean < -79.8288)
																		return 1;
																	else
																		return 0;
																}
															}
															else
																return 0;
														}
														else
															return 1;
													}
												}
												else
												{
													if(rss_std < 3.61016)
													{
														if(rss_min < -84.9489)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
											}
											else
												return 1;
										}
										else
										{
											if(rss_std < 4.91295)
											{
												if(rss_min < -84.914)
												{
													if(rss_mean < -78.06775)
														return 1;
													else
													{
														if(rss_max < -69.50465)
															return 0;
														else
															return 1;
													}
												}
												else
												{
													if(d_max < 275.771)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(rss_max < -67.72365)
												{
													if(d_std < 54.23345)
														return 1;
													else
													{
														if(d_max < 305.312)
															return 0;
														else
															return 1;
													}
												}
												else
													return 1;
											}
										}
									}
									else
									{
										if(rss_mean < -78.76865)
											return 1;
										else
										{
											if(rss_max < -72.8093)
												return 0;
											else
												return 1;
										}
									}
								}
							}
							else
							{
								if(rss_max < -76.5322)
									return 0;
								else
									return 1;
							}
						}
						else
							return 1;
					}
				}
			}
			else
			{
				if(d_max < 234.1895)
				{
					if(rss_mean < -80.47855)
					{
						if(rss_max < -75.39135)
						{
							if(d_min < 169.0225)
								return 0;
							else
							{
								if(rss_std < 1.19853)
									return 0;
								else
								{
									if(d_max < 217.9995)
										return 1;
									else
										return 0;
								}
							}
						}
						else
						{
							if(d_std < 35.7671)
							{
								if(rss_min < -84.8264)
								{
									if(rss_min < -84.8994)
										return 0;
									else
									{
										if(d_max < 226.741)
										{
											if(d_min < 154.737)
												return 1;
											else
												return 0;
										}
										else
										{
											if(rss_min < -84.8735)
											{
												if(d_mean < 193.413)
													return 1;
												else
													return 0;
											}
											else
											{
												if(d_max < 230.9825)
													return 0;
												else
													return 1;
											}
										}
									}
								}
								else
								{
									if(rss_std < 2.64973)
									{
										if(d_max < 205.761)
											return 1;
										else
											return 0;
									}
									else
									{
										if(d_mean < 166.229)
										{
											if(d_std < 32.87115)
											{
												if(rss_max < -71.90375)
													return 1;
												else
												{
													if(d_min < 106.598)
														return 1;
													else
														return 0;
												}
											}
											else
											{
												if(d_max < 224.9905)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(d_std < 35.7543)
												return 0;
											else
												return 1;
										}
									}
								}
							}
							else
							{
								if(rss_max < -71.1582)
								{
									if(d_std < 38.7373)
									{
										if(rss_max < -72.98595)
										{
											if(d_mean < 159.333)
												return 1;
											else
												return 0;
										}
										else
										{
											if(d_mean < 166.624)
											{
												if(d_min < 95.2878)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
									}
									else
										return 0;
								}
								else
								{
									if(rss_std < 3.86828)
									{
										if(d_mean < 164.726)
										{
											if(d_max < 224.716)
												return 0;
											else
												return 1;
										}
										else
										{
											if(d_mean < 172.8205)
												return 1;
											else
											{
												if(d_max < 224.655)
													return 0;
												else
													return 1;
											}
										}
									}
									else
										return 0;
								}
							}
						}
					}
					else
					{
						if(d_mean < 147.0615)
						{
							if(d_max < 220.1005)
							{
								if(rss_max < -71.55455)
								{
									if(d_min < 110.8765)
									{
										if(rss_std < 3.594475)
											return 0;
										else
										{
											if(d_min < 80.5563)
												return 1;
											else
												return 0;
										}
									}
									else
										return 1;
								}
								else
								{
									if(rss_min < -84.76355)
									{
										if(d_std < 53.2073)
											return 1;
										else
										{
											if(rss_max < -68.181)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(rss_std < 4.497685)
										{
											if(d_mean < 146.921)
												return 1;
											else
												return 0;
										}
										else
										{
											if(d_std < 47.73915)
												return 1;
											else
											{
												if(rss_max < -64.5594)
												{
													if(d_std < 50.1279)
													{
														if(d_mean < 134.6565)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
												else
												{
													if(d_mean < 136.1275)
														return 1;
													else
													{
														if(d_min < 37.5368)
															return 1;
														else
														{
															if(d_max < 215.8995)
																return 1;
															else
																return 0;
														}
													}
												}
											}
										}
									}
								}
							}
							else
							{
								if(rss_max < -70.7484)
								{
									if(rss_max < -73.289)
										return 0;
									else
									{
										if(d_min < 73.32175)
											return 0;
										else
										{
											if(rss_max < -71.54825)
											{
												if(rss_min < -84.8844)
												{
													if(rss_mean < -77.9842)
														return 1;
													else
														return 0;
												}
												else
												{
													if(rss_min < -84.7191)
														return 0;
													else
													{
														if(rss_mean < -78.5627)
														{
															if(d_max < 230.728)
																return 1;
															else
																return 0;
														}
														else
															return 0;
													}
												}
											}
											else
											{
												if(d_min < 74.96335)
												{
													if(rss_mean < -78.95135)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
										}
									}
								}
								else
								{
									if(d_min < 72.35025)
									{
										if(d_mean < 138.4245)
										{
											if(rss_mean < -78.09225)
											{
												if(rss_std < 4.87995)
													return 1;
												else
												{
													if(d_max < 226.7465)
													{
														if(rss_max < -67.70645)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
											}
											else
											{
												if(rss_max < -66.4553)
												{
													if(d_min < 62.4877)
													{
														if(d_mean < 113.497)
														{
															if(d_max < 226.024)
																return 0;
															else
																return 1;
														}
														else
														{
															if(d_min < 58.8792)
																return 0;
															else
															{
																if(d_max < 229.2055)
																{
																	if(d_max < 227.6455)
																		return 0;
																	else
																		return 1;
																}
																else
																	return 0;
															}
														}
													}
													else
													{
														if(d_min < 67.72655)
														{
															if(rss_std < 4.88081)
																return 1;
															else
															{
																if(d_min < 62.99955)
																	return 1;
																else
																	return 0;
															}
														}
														else
														{
															if(rss_std < 5.12549)
															{
																if(d_mean < 122.999)
																	return 1;
																else
																	return 0;
															}
															else
																return 1;
														}
													}
												}
												else
												{
													if(d_min < 45.14865)
													{
														if(d_min < 31.1432)
														{
															if(rss_max < -52.46475)
																return 0;
															else
																return 1;
														}
														else
														{
															if(d_max < 220.932)
																return 0;
															else
															{
																if(rss_max < -63.2398)
																{
																	if(d_mean < 123.5005)
																		return 1;
																	else
																		return 0;
																}
																else
																	return 1;
															}
														}
													}
													else
														return 1;
												}
											}
										}
										else
										{
											if(d_std < 45.27905)
											{
												if(d_min < 65.49835)
													return 0;
												else
													return 1;
											}
											else
											{
												if(d_std < 57.61045)
												{
													if(rss_max < -67.06195)
													{
														if(d_max < 227.9655)
														{
															if(rss_std < 4.50227)
															{
																if(d_max < 221.418)
																	return 1;
																else
																	return 0;
															}
															else
																return 0;
														}
														else
														{
															if(d_max < 229.277)
																return 1;
															else
																return 0;
														}
													}
													else
													{
														if(d_max < 224.727)
														{
															if(d_std < 51.90575)
																return 1;
															else
																return 0;
														}
														else
														{
															if(d_max < 228.538)
																return 1;
															else
																return 0;
														}
													}
												}
												else
													return 0;
											}
										}
									}
									else
									{
										if(rss_min < -84.5598)
											return 1;
										else
											return 0;
									}
								}
							}
						}
						else
						{
							if(rss_max < -70.4982)
							{
								if(rss_std < 3.451175)
								{
									if(d_max < 212.1375)
										return 1;
									else
									{
										if(d_min < 94.958)
										{
											if(rss_max < -72.0889)
											{
												if(d_min < 94.78375)
												{
													if(d_min < 77.4468)
													{
														if(rss_min < -84.7835)
															return 1;
														else
															return 0;
													}
													else
													{
														if(d_max < 218.495)
														{
															if(d_max < 217.69)
																return 0;
															else
																return 1;
														}
														else
														{
															if(d_max < 223.6695)
															{
																if(d_max < 223.0995)
																	return 0;
																else
																	return 1;
															}
															else
																return 0;
														}
													}
												}
												else
													return 1;
											}
											else
											{
												if(d_max < 216.2465)
													return 0;
												else
												{
													if(d_min < 78.8909)
													{
														if(d_max < 232.1295)
															return 0;
														else
															return 1;
													}
													else
													{
														if(d_max < 231.8525)
															return 1;
														else
															return 0;
													}
												}
											}
										}
										else
										{
											if(rss_max < -74.0049)
												return 0;
											else
											{
												if(d_max < 216.9585)
													return 1;
												else
												{
													if(d_mean < 169.9625)
														return 0;
													else
														return 1;
												}
											}
										}
									}
								}
								else
								{
									if(rss_min < -84.8404)
									{
										if(d_max < 228.231)
											return 0;
										else
										{
											if(rss_mean < -79.68335)
												return 0;
											else
											{
												if(rss_max < -72.67315)
													return 0;
												else
												{
													if(rss_std < 4.20721)
														return 1;
													else
														return 0;
												}
											}
										}
									}
									else
									{
										if(d_mean < 148.184)
										{
											if(rss_mean < -79.35955)
											{
												if(d_max < 215.1035)
													return 0;
												else
												{
													if(d_min < 90.69355)
														return 1;
													else
														return 0;
												}
											}
											else
												return 0;
										}
										else
											return 0;
									}
								}
							}
							else
							{
								if(rss_std < 4.45462)
								{
									if(rss_min < -84.75235)
									{
										if(rss_min < -84.9002)
										{
											if(d_min < 72.61385)
												return 0;
											else
												return 1;
										}
										else
											return 1;
									}
									else
									{
										if(rss_min < -84.67795)
										{
											if(rss_mean < -79.0799)
												return 0;
											else
											{
												if(rss_mean < -78.91775)
													return 1;
												else
												{
													if(d_max < 223.4575)
														return 1;
													else
														return 0;
												}
											}
										}
										else
										{
											if(rss_std < 4.26548)
											{
												if(d_min < 69.85085)
													return 0;
												else
													return 1;
											}
											else
											{
												if(d_min < 73.98995)
													return 0;
												else
													return 1;
											}
										}
									}
								}
								else
								{
									if(d_min < 70.03745)
									{
										if(d_max < 216.127)
										{
											if(rss_min < -84.7559)
												return 1;
											else
												return 0;
										}
										else
										{
											if(rss_mean < -79.1382)
												return 0;
											else
											{
												if(d_std < 54.9594)
												{
													if(rss_min < -84.7566)
													{
														if(rss_std < 4.710005)
															return 1;
														else
														{
															if(d_min < 48.5434)
																return 1;
															else
																return 0;
														}
													}
													else
														return 0;
												}
												else
													return 0;
											}
										}
									}
									else
										return 1;
								}
							}
						}
					}
				}
				else
				{
					if(rss_max < -74.001)
					{
						if(rss_min < -84.8664)
						{
							if(d_min < 97.0217)
								return 0;
							else
							{
								if(d_max < 243.917)
								{
									if(d_mean < 188.3325)
										return 1;
									else
									{
										if(rss_min < -84.8863)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(d_std < 52.39445)
									{
										if(d_min < 109.0265)
										{
											if(rss_max < -75.50785)
												return 0;
											else
												return 1;
										}
										else
										{
											if(d_min < 203.715)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(d_max < 334.7765)
											return 0;
										else
											return 1;
									}
								}
							}
						}
						else
						{
							if(d_max < 279.129)
							{
								if(rss_std < 3.243935)
								{
									if(d_max < 239.743)
									{
										if(d_max < 235.1985)
										{
											if(d_max < 234.4045)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
									else
									{
										if(rss_max < -76.67225)
										{
											if(rss_mean < -80.72335)
											{
												if(d_min < 173.4945)
												{
													if(d_min < 124.616)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
											else
												return 0;
										}
										else
										{
											if(d_min < 95.71755)
												return 0;
											else
											{
												if(d_min < 129.3025)
												{
													if(d_mean < 183.7815)
													{
														if(d_max < 275.259)
															return 1;
														else
															return 0;
													}
													else
													{
														if(rss_min < -84.8337)
														{
															if(d_min < 126.04)
																return 1;
															else
																return 0;
														}
														else
															return 0;
													}
												}
												else
													return 1;
											}
										}
									}
								}
								else
									return 0;
							}
							else
							{
								if(rss_max < -76.08555)
								{
									if(rss_max < -76.2004)
										return 1;
									else
										return 0;
								}
								else
								{
									if(rss_std < 2.761105)
										return 1;
									else
									{
										if(rss_min < -84.75695)
											return 1;
										else
											return 0;
									}
								}
							}
						}
					}
					else
					{
						if(d_min < 67.16195)
						{
							if(rss_max < -69.44745)
							{
								if(rss_std < 4.90029)
								{
									if(d_std < 57.92085)
									{
										if(rss_min < -84.85305)
										{
											if(d_max < 254.922)
												return 1;
											else
												return 0;
										}
										else
										{
											if(d_max < 234.961)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(d_mean < 173.036)
											return 0;
										else
											return 1;
									}
								}
								else
									return 0;
							}
							else
							{
								if(d_std < 68.89475)
								{
									if(rss_mean < -79.39415)
									{
										if(d_max < 238.56)
										{
											if(d_max < 236.0495)
											{
												if(d_max < 234.961)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
										else
										{
											if(rss_max < -68.73235)
											{
												if(rss_min < -84.83885)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
									}
									else
									{
										if(rss_mean < -78.8179)
										{
											if(rss_max < -68.74755)
											{
												if(d_max < 248.101)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
										else
											return 1;
									}
								}
								else
								{
									if(d_max < 281.3565)
									{
										if(d_max < 239.683)
											return 0;
										else
										{
											if(rss_max < -65.7132)
												return 0;
											else
												return 1;
										}
									}
									else
										return 1;
								}
							}
						}
						else
						{
							if(d_max < 247.4035)
							{
								if(d_max < 246.9795)
								{
									if(d_min < 73.42665)
									{
										if(d_min < 73.39295)
										{
											if(d_mean < 178.6605)
												return 1;
											else
												return 0;
										}
										else
											return 0;
									}
									else
										return 1;
								}
								else
									return 0;
							}
							else
							{
								if(rss_min < -84.7622)
									return 1;
								else
								{
									if(rss_min < -84.7613)
									{
										if(d_mean < 155.816)
											return 1;
										else
											return 0;
									}
									else
										return 1;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			if(rss_max < -70.7453)
			{
				if(d_max < 224.2945)
				{
					if(rss_min < -84.25745)
					{
						if(d_mean < 147.6235)
						{
							if(d_max < 206.0855)
								return 1;
							else
								return 0;
						}
						else
						{
							if(rss_min < -84.2578)
							{
								if(d_mean < 148.3805)
								{
									if(d_max < 206.512)
										return 1;
									else
										return 0;
								}
								else
									return 0;
							}
							else
								return 1;
						}
					}
					else
					{
						if(rss_max < -80.186)
						{
							if(rss_max < -80.1955)
							{
								if(d_mean < 165.7435)
									return 1;
								else
									return 0;
							}
							else
								return 1;
						}
						else
						{
							if(rss_min < -84.0692)
							{
								if(rss_min < -84.06955)
								{
									if(d_mean < 145.1915)
									{
										if(d_min < 115.024)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
								else
									return 1;
							}
							else
							{
								if(d_min < 162.5865)
									return 0;
								else
									return 1;
							}
						}
					}
				}
				else
				{
					if(d_mean < 176.0495)
					{
						if(rss_min < -81.91295)
						{
							if(rss_std < 1.9926)
							{
								if(d_max < 288.1485)
								{
									if(d_max < 248.941)
									{
										if(d_min < 125.6035)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
								else
									return 1;
							}
							else
							{
								if(d_mean < 139.982)
								{
									if(d_min < 76.65925)
									{
										if(d_max < 236.881)
											return 0;
										else
										{
											if(d_max < 244.2165)
												return 1;
											else
												return 0;
										}
									}
									else
										return 0;
								}
								else
								{
									if(d_max < 283.5345)
									{
										if(rss_min < -84.3446)
											return 0;
										else
										{
											if(d_min < 120.684)
											{
												if(rss_std < 2.843775)
												{
													if(d_std < 46.1735)
													{
														if(rss_min < -83.9665)
															return 0;
														else
														{
															if(d_mean < 157.095)
																return 1;
															else
																return 0;
														}
													}
													else
														return 1;
												}
												else
												{
													if(rss_min < -83.7558)
													{
														if(rss_max < -71.46215)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
											}
											else
											{
												if(d_std < 45.5296)
													return 1;
												else
													return 0;
											}
										}
									}
									else
										return 1;
								}
							}
						}
						else
							return 0;
					}
					else
					{
						if(d_std < 69.27495)
						{
							if(rss_min < -83.18025)
							{
								if(rss_min < -83.68965)
									return 0;
								else
								{
									if(rss_min < -83.6635)
										return 1;
									else
										return 0;
								}
							}
							else
								return 1;
						}
						else
							return 1;
					}
				}
			}
			else
			{
				if(d_max < 224.815)
				{
					if(rss_min < -83.6957)
					{
						if(d_max < 205.2385)
						{
							if(d_mean < 126.4615)
							{
								if(d_max < 164.712)
									return 0;
								else
								{
									if(rss_min < -83.7326)
									{
										if(rss_std < 6.48015)
										{
											if(d_max < 173.4935)
											{
												if(d_min < 67.7242)
													return 0;
												else
													return 1;
											}
											else
											{
												if(d_std < 50.32)
													return 1;
												else
												{
													if(d_min < 35.3177)
														return 1;
													else
														return 0;
												}
											}
										}
										else
											return 0;
									}
									else
										return 0;
								}
							}
							else
							{
								if(d_std < 40.7228)
								{
									if(rss_max < -69.42255)
									{
										if(d_min < 72.28775)
											return 0;
										else
											return 1;
									}
									else
									{
										if(rss_mean < -77.33675)
											return 0;
										else
											return 1;
									}
								}
								else
									return 0;
							}
						}
						else
						{
							if(rss_max < -62.89085)
							{
								if(d_std < 36.2958)
								{
									if(d_max < 212.804)
									{
										if(rss_max < -68.5986)
											return 0;
										else
										{
											if(d_max < 206.93)
												return 0;
											else
												return 1;
										}
									}
									else
										return 1;
								}
								else
								{
									if(d_min < 71.92165)
									{
										if(rss_max < -66.8758)
											return 0;
										else
										{
											if(d_min < 54.23555)
											{
												if(rss_max < -66.86535)
													return 1;
												else
												{
													if(d_mean < 119.8935)
													{
														if(rss_mean < -76.86905)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
											}
											else
											{
												if(d_min < 54.8996)
													return 1;
												else
													return 0;
											}
										}
									}
									else
									{
										if(d_max < 207.361)
											return 1;
										else
										{
											if(rss_max < -68.95725)
												return 0;
											else
												return 1;
										}
									}
								}
							}
							else
							{
								if(rss_std < 6.396335)
									return 1;
								else
									return 0;
							}
						}
					}
					else
					{
						if(d_mean < 124.9145)
						{
							if(rss_max < -68.2586)
								return 0;
							else
							{
								if(rss_min < -82.9277)
								{
									if(rss_std < 4.34643)
										return 1;
									else
									{
										if(rss_min < -82.9387)
										{
											if(d_max < 213.0045)
											{
												if(rss_max < -59.2415)
													return 0;
												else
												{
													if(d_max < 193.553)
														return 1;
													else
														return 0;
												}
											}
											else
												return 1;
										}
										else
											return 1;
									}
								}
								else
								{
									if(d_max < 158.358)
									{
										if(d_max < 156.7095)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
							}
						}
						else
						{
							if(rss_min < -81.70335)
								return 0;
							else
								return 1;
						}
					}
				}
				else
				{
					if(rss_mean < -79.0937)
					{
						if(d_min < 83.6812)
							return 0;
						else
							return 1;
					}
					else
					{
						if(rss_min < -83.15675)
						{
							if(d_min < 67.043)
							{
								if(rss_mean < -78.0622)
								{
									if(rss_mean < -78.2466)
										return 0;
									else
									{
										if(d_mean < 146.78)
											return 1;
										else
											return 0;
									}
								}
								else
									return 1;
							}
							else
								return 1;
						}
						else
						{
							if(rss_mean < -77.4113)
								return 0;
							else
							{
								if(d_max < 323.78)
									return 1;
								else
									return 2;
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if(rss_mean < -69.8306)
		{
			if(d_min < 111.17315)
			{
				if(d_std < 131.892)
					return 0;
				else
					return 1;
			}
			else
				return 2;
		}
		else
		{
			if(d_mean < 105.5232)
				return 1;
			else
				return 2;
		}
	}
}

int tree_5(float d_max, float d_min, float d_mean, float d_std, float rss_max, float rss_min, float rss_mean, float rss_std)
{
	if(rss_std < 5.054005)
	{
		if(rss_min < -84.46705)
		{
			if(d_max < 237.091)
			{
				if(rss_max < -70.5038)
				{
					if(d_max < 218.478)
					{
						if(rss_max < -74.62655)
						{
							if(d_std < 23.72275)
							{
								if(d_min < 166.4445)
									return 0;
								else
									return 1;
							}
							else
								return 0;
						}
						else
						{
							if(d_std < 28.1635)
							{
								if(rss_std < 2.284055)
									return 0;
								else
									return 1;
							}
							else
							{
								if(rss_std < 3.849745)
								{
									if(rss_min < -84.5576)
									{
										if(d_mean < 140.7085)
										{
											if(rss_max < -72.20995)
												return 0;
											else
											{
												if(d_min < 73.79355)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(d_min < 88.0227)
											{
												if(rss_min < -84.76455)
													return 1;
												else
												{
													if(d_max < 195.5955)
														return 1;
													else
														return 0;
												}
											}
											else
												return 1;
										}
									}
									else
									{
										if(rss_max < -70.9924)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(d_min < 74.98915)
										return 0;
									else
									{
										if(d_max < 215.6425)
											return 0;
										else
											return 1;
									}
								}
							}
						}
					}
					else
					{
						if(rss_min < -84.91495)
						{
							if(d_max < 219.268)
							{
								if(d_mean < 147.48)
									return 0;
								else
									return 1;
							}
							else
							{
								if(rss_max < -74.6781)
									return 0;
								else
								{
									if(d_min < 101.9425)
									{
										if(rss_min < -84.98215)
										{
											if(d_min < 94.587)
											{
												if(rss_max < -70.71415)
												{
													if(d_mean < 146.421)
													{
														if(rss_mean < -79.21945)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
												else
												{
													if(d_min < 78.10345)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(d_std < 42.427)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(d_min < 61.40435)
											{
												if(d_max < 234.395)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
									}
									else
									{
										if(rss_max < -74.656)
											return 1;
										else
										{
											if(rss_max < -72.5212)
												return 0;
											else
												return 1;
										}
									}
								}
							}
						}
						else
						{
							if(d_mean < 151.757)
							{
								if(rss_std < 3.75661)
								{
									if(rss_max < -73.289)
									{
										if(rss_min < -84.88485)
										{
											if(d_min < 107.3405)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
									else
									{
										if(rss_mean < -78.608)
										{
											if(rss_min < -84.88335)
											{
												if(d_mean < 149.2985)
												{
													if(d_max < 228.507)
														return 0;
													else
														return 1;
												}
												else
												{
													if(d_max < 228.071)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(rss_mean < -79.43115)
												{
													if(d_std < 32.09715)
														return 0;
													else
													{
														if(d_std < 38.17925)
														{
															if(rss_max < -72.27295)
															{
																if(d_min < 89.45585)
																	return 0;
																else
																	return 1;
															}
															else
																return 1;
														}
														else
														{
															if(d_min < 76.30905)
																return 0;
															else
															{
																if(rss_min < -84.8463)
																	return 0;
																else
																	return 1;
															}
														}
													}
												}
												else
												{
													if(rss_max < -71.59675)
													{
														if(rss_min < -84.72445)
														{
															if(d_min < 95.1383)
																return 0;
															else
															{
																if(d_min < 103.27045)
																	return 1;
																else
																	return 0;
															}
														}
														else
														{
															if(d_max < 226.3785)
																return 0;
															else
																return 1;
														}
													}
													else
													{
														if(rss_max < -71.16305)
															return 1;
														else
														{
															if(d_max < 224.846)
																return 1;
															else
																return 0;
														}
													}
												}
											}
										}
										else
										{
											if(rss_max < -71.30165)
											{
												if(d_mean < 141.5915)
													return 0;
												else
													return 1;
											}
											else
											{
												if(rss_std < 3.54097)
												{
													if(d_max < 233.462)
														return 1;
													else
														return 0;
												}
												else
													return 0;
											}
										}
									}
								}
								else
								{
									if(rss_max < -71.20245)
									{
										if(rss_mean < -79.81005)
											return 1;
										else
										{
											if(d_std < 38.00155)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(d_max < 233.342)
										{
											if(d_std < 43.8359)
											{
												if(d_min < 73.6513)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
										else
											return 1;
									}
								}
							}
							else
							{
								if(d_max < 233.519)
								{
									if(rss_max < -75.39135)
										return 0;
									else
									{
										if(d_min < 105.662)
										{
											if(d_std < 41.27585)
											{
												if(d_max < 226.1055)
												{
													if(d_max < 225.9795)
													{
														if(d_min < 83.448)
															return 0;
														else
														{
															if(rss_max < -72.98595)
															{
																if(rss_mean < -80.493)
																	return 0;
																else
																{
																	if(d_min < 93.9031)
																		return 0;
																	else
																	{
																		if(d_min < 94.92595)
																			return 1;
																		else
																			return 0;
																	}
																}
															}
															else
															{
																if(d_min < 95.66185)
																	return 1;
																else
																	return 0;
															}
														}
													}
													else
														return 1;
												}
												else
													return 0;
											}
											else
											{
												if(d_mean < 152.3185)
												{
													if(rss_max < -71.20425)
														return 0;
													else
													{
														if(d_min < 73.26865)
															return 0;
														else
															return 1;
													}
												}
												else
													return 0;
											}
										}
										else
										{
											if(rss_std < 2.38337)
											{
												if(rss_mean < -81.877)
												{
													if(d_min < 154.737)
														return 1;
													else
														return 0;
												}
												else
													return 0;
											}
											else
											{
												if(d_mean < 173.704)
												{
													if(d_mean < 162.266)
														return 1;
													else
													{
														if(d_min < 106.052)
															return 1;
														else
															return 0;
													}
												}
												else
													return 1;
											}
										}
									}
								}
								else
								{
									if(rss_max < -76.28905)
										return 0;
									else
									{
										if(d_max < 234.235)
										{
											if(d_std < 40.54215)
											{
												if(rss_max < -74.49685)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
										else
										{
											if(rss_min < -84.8019)
												return 1;
											else
											{
												if(d_max < 235.0885)
													return 1;
												else
												{
													if(d_max < 235.866)
														return 0;
													else
														return 1;
												}
											}
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if(d_min < 69.9001)
					{
						if(d_std < 47.946)
						{
							if(rss_max < -68.73465)
							{
								if(d_mean < 138.016)
								{
									if(d_max < 178.2835)
										return 0;
									else
									{
										if(rss_min < -84.8546)
											return 0;
										else
										{
											if(d_min < 56.3978)
												return 0;
											else
												return 1;
										}
									}
								}
								else
								{
									if(d_min < 69.5102)
									{
										if(d_std < 46.28435)
											return 0;
										else
										{
											if(d_min < 68.24945)
												return 0;
											else
											{
												if(rss_max < -70.14875)
													return 0;
												else
													return 1;
											}
										}
									}
									else
										return 1;
								}
							}
							else
							{
								if(d_max < 219.4315)
									return 1;
								else
								{
									if(d_max < 236.2945)
									{
										if(d_min < 52.50215)
										{
											if(d_min < 45.2939)
												return 1;
											else
												return 0;
										}
										else
										{
											if(rss_max < -68.0151)
											{
												if(rss_std < 4.193475)
												{
													if(d_min < 58.29695)
														return 0;
													else
														return 1;
												}
												else
												{
													if(d_std < 39.8325)
														return 1;
													else
														return 0;
												}
											}
											else
											{
												if(rss_mean < -79.52955)
												{
													if(d_max < 228.1565)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
										}
									}
									else
									{
										if(d_std < 47.22585)
											return 0;
										else
										{
											if(d_max < 236.5905)
												return 0;
											else
												return 1;
										}
									}
								}
							}
						}
						else
						{
							if(rss_min < -84.91115)
							{
								if(rss_max < -64.8889)
								{
									if(d_max < 215.7815)
										return 1;
									else
										return 0;
								}
								else
									return 1;
							}
							else
							{
								if(d_mean < 141.9745)
								{
									if(rss_max < -67.71925)
									{
										if(d_min < 62.4877)
										{
											if(d_max < 221.8685)
												return 1;
											else
											{
												if(rss_max < -68.49995)
													return 0;
												else
												{
													if(d_min < 57.50285)
														return 0;
													else
														return 1;
												}
											}
										}
										else
										{
											if(d_max < 227.3445)
											{
												if(d_mean < 132.406)
													return 1;
												else
													return 0;
											}
											else
											{
												if(rss_std < 4.894155)
												{
													if(rss_min < -84.8897)
														return 0;
													else
														return 1;
												}
												else
												{
													if(d_mean < 130.0115)
														return 1;
													else
														return 0;
												}
											}
										}
									}
									else
									{
										if(d_mean < 129.954)
										{
											if(d_min < 50.8036)
												return 0;
											else
												return 1;
										}
										else
											return 1;
									}
								}
								else
								{
									if(rss_max < -67.1768)
									{
										if(d_max < 217.1995)
										{
											if(d_max < 215.982)
												return 0;
											else
												return 1;
										}
										else
										{
											if(rss_std < 4.620025)
											{
												if(rss_max < -69.53685)
													return 0;
												else
												{
													if(rss_min < -84.8656)
														return 1;
													else
													{
														if(d_max < 232.322)
															return 0;
														else
															return 1;
													}
												}
											}
											else
												return 0;
										}
									}
									else
									{
										if(d_min < 39.69525)
											return 0;
										else
											return 1;
									}
								}
							}
						}
					}
					else
					{
						if(d_mean < 143.357)
							return 1;
						else
						{
							if(rss_std < 2.954615)
							{
								if(d_min < 100.3577)
									return 0;
								else
								{
									if(d_mean < 149.9355)
										return 0;
									else
										return 1;
								}
							}
							else
							{
								if(d_std < 40.43)
								{
									if(d_max < 221.7045)
										return 1;
									else
									{
										if(rss_mean < -78.92285)
										{
											if(rss_min < -84.7578)
												return 1;
											else
											{
												if(d_mean < 167.9025)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(rss_max < -69.74795)
												return 1;
											else
											{
												if(d_min < 85.50385)
													return 1;
												else
													return 0;
											}
										}
									}
								}
								else
								{
									if(d_min < 72.43755)
									{
										if(d_mean < 160.9155)
											return 1;
										else
											return 0;
									}
									else
										return 1;
								}
							}
						}
					}
				}
			}
			else
			{
				if(rss_max < -73.9499)
				{
					if(d_min < 105.69)
					{
						if(rss_std < 3.23794)
						{
							if(d_min < 95.73415)
								return 0;
							else
							{
								if(rss_min < -84.9177)
									return 0;
								else
								{
									if(rss_min < -84.74875)
									{
										if(rss_max < -75.39345)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
							}
						}
						else
							return 0;
					}
					else
					{
						if(rss_max < -77.19235)
						{
							if(d_max < 282.9135)
							{
								if(rss_min < -84.89905)
								{
									if(rss_min < -84.98255)
									{
										if(rss_max < -77.26835)
										{
											if(rss_min < -84.98295)
												return 0;
											else
												return 1;
										}
										else
											return 1;
									}
									else
										return 0;
								}
								else
								{
									if(d_max < 257.779)
									{
										if(d_std < 29.02895)
										{
											if(d_max < 248.0365)
												return 0;
											else
												return 1;
										}
										else
										{
											if(rss_mean < -80.72335)
											{
												if(d_min < 124.616)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
									}
									else
									{
										if(d_min < 173.4945)
										{
											if(d_min < 123.7545)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
								}
							}
							else
							{
								if(rss_min < -84.9277)
								{
									if(d_min < 161.9585)
										return 0;
									else
										return 1;
								}
								else
								{
									if(d_std < 47.5242)
										return 1;
									else
										return 0;
								}
							}
						}
						else
						{
							if(d_min < 115.8465)
							{
								if(rss_min < -84.9162)
								{
									if(rss_min < -84.98165)
									{
										if(d_max < 255.2605)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
								else
								{
									if(d_max < 305.6505)
									{
										if(d_max < 300.4155)
										{
											if(rss_mean < -80.62365)
											{
												if(rss_min < -84.91215)
												{
													if(d_mean < 182.838)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
											else
											{
												if(rss_std < 2.63151)
												{
													if(d_max < 261.0515)
														return 1;
													else
														return 0;
												}
												else
												{
													if(d_mean < 180.5185)
														return 1;
													else
														return 0;
												}
											}
										}
										else
											return 0;
									}
									else
										return 1;
								}
							}
							else
							{
								if(rss_mean < -79.4212)
								{
									if(rss_max < -74.48545)
									{
										if(d_min < 116.8705)
										{
											if(d_min < 116.564)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
									else
									{
										if(d_max < 243.273)
										{
											if(d_min < 124.4295)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
								}
								else
									return 0;
							}
						}
					}
				}
				else
				{
					if(rss_max < -62.07425)
					{
						if(d_min < 84.90925)
						{
							if(rss_max < -70.15245)
							{
								if(rss_std < 4.42823)
								{
									if(rss_min < -84.9115)
									{
										if(d_max < 274.9505)
										{
											if(d_max < 261.327)
											{
												if(rss_min < -84.984)
												{
													if(d_mean < 153.2115)
														return 1;
													else
													{
														if(d_max < 250.491)
															return 0;
														else
															return 1;
													}
												}
												else
													return 1;
											}
											else
											{
												if(d_max < 269.789)
												{
													if(rss_std < 3.950235)
													{
														if(d_min < 83.05305)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
												else
												{
													if(rss_min < -84.9645)
														return 1;
													else
														return 0;
												}
											}
										}
										else
										{
											if(rss_std < 4.26281)
												return 1;
											else
											{
												if(d_max < 292.347)
													return 1;
												else
													return 0;
											}
										}
									}
									else
									{
										if(d_max < 247.431)
										{
											if(d_max < 246.8885)
											{
												if(d_std < 41.5032)
												{
													if(rss_min < -84.86665)
													{
														if(d_min < 78.52025)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
												else
													return 1;
											}
											else
												return 0;
										}
										else
										{
											if(d_min < 82.6258)
												return 1;
											else
											{
												if(d_min < 82.73485)
													return 0;
												else
													return 1;
											}
										}
									}
								}
								else
								{
									if(rss_mean < -78.72025)
									{
										if(d_min < 62.8682)
											return 1;
										else
											return 0;
									}
									else
									{
										if(d_mean < 137.4615)
										{
											if(rss_mean < -77.7023)
												return 1;
											else
											{
												if(d_max < 281.926)
													return 1;
												else
													return 0;
											}
										}
										else
											return 0;
									}
								}
							}
							else
							{
								if(d_min < 65.4565)
								{
									if(rss_max < -67.53215)
									{
										if(rss_max < -69.44745)
										{
											if(rss_min < -84.9573)
												return 1;
											else
												return 0;
										}
										else
										{
											if(d_max < 267.742)
											{
												if(d_max < 263.379)
												{
													if(rss_min < -84.966)
													{
														if(d_max < 239.215)
															return 1;
														else
															return 0;
													}
													else
													{
														if(rss_std < 4.740655)
															return 1;
														else
														{
															if(d_min < 64.2314)
															{
																if(d_min < 58.22615)
																	return 0;
																else
																	return 1;
															}
															else
																return 0;
														}
													}
												}
												else
													return 0;
											}
											else
												return 1;
										}
									}
									else
										return 1;
								}
								else
									return 1;
							}
						}
						else
						{
							if(d_max < 247.1535)
							{
								if(rss_min < -84.9713)
								{
									if(rss_std < 3.22868)
										return 1;
									else
									{
										if(d_min < 100.0057)
											return 0;
										else
											return 1;
									}
								}
								else
									return 1;
							}
							else
							{
								if(d_mean < 143.7205)
								{
									if(d_mean < 143.7125)
										return 1;
									else
										return 0;
								}
								else
									return 1;
							}
						}
					}
					else
					{
						if(d_min < 64.81955)
							return 1;
						else
							return 2;
					}
				}
			}
		}
		else
		{
			if(rss_max < -63.7156)
			{
				if(rss_max < -70.7453)
				{
					if(d_max < 224.2945)
					{
						if(rss_min < -84.25745)
						{
							if(d_std < 24.48885)
							{
								if(d_mean < 152.986)
									return 1;
								else
									return 0;
							}
							else
							{
								if(rss_min < -84.2578)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(d_min < 101.576)
								return 0;
							else
							{
								if(rss_std < 0.655378)
								{
									if(d_min < 135.446)
										return 1;
									else
										return 0;
								}
								else
								{
									if(d_std < 43.8426)
									{
										if(d_std < 8.389575)
											return 1;
										else
										{
											if(rss_max < -73.40565)
											{
												if(d_min < 101.6775)
													return 1;
												else
													return 0;
											}
											else
											{
												if(rss_max < -73.0441)
													return 1;
												else
													return 0;
											}
										}
									}
									else
										return 1;
								}
							}
						}
					}
					else
					{
						if(d_mean < 176.0495)
						{
							if(rss_mean < -78.5315)
							{
								if(d_max < 283.5345)
								{
									if(rss_min < -83.32455)
									{
										if(rss_min < -84.34365)
											return 0;
										else
										{
											if(rss_std < 2.992665)
											{
												if(d_max < 271.8455)
												{
													if(d_min < 122.015)
													{
														if(d_max < 250.0285)
														{
															if(d_std < 32.6876)
																return 1;
															else
																return 0;
														}
														else
															return 1;
													}
													else
														return 1;
												}
												else
													return 0;
											}
											else
											{
												if(rss_mean < -78.9992)
												{
													if(d_max < 260.291)
														return 0;
													else
														return 1;
												}
												else
												{
													if(d_mean < 138.6035)
													{
														if(d_max < 236.881)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
											}
										}
									}
									else
									{
										if(d_min < 134.9625)
											return 0;
										else
											return 1;
									}
								}
								else
									return 1;
							}
							else
							{
								if(d_max < 225.0255)
									return 1;
								else
									return 0;
							}
						}
						else
						{
							if(d_min < 241.992)
							{
								if(d_max < 232.1185)
								{
									if(rss_mean < -81.2533)
										return 0;
									else
										return 1;
								}
								else
								{
									if(rss_min < -83.68965)
										return 0;
									else
									{
										if(d_min < 139.784)
											return 0;
										else
										{
											if(d_mean < 180.1305)
												return 0;
											else
												return 1;
										}
									}
								}
							}
							else
								return 2;
						}
					}
				}
				else
				{
					if(d_max < 224.815)
					{
						if(d_std < 40.88615)
						{
							if(rss_min < -83.27885)
							{
								if(d_max < 198.8945)
								{
									if(d_min < 69.8302)
									{
										if(d_mean < 127.9265)
										{
											if(d_min < 60.18095)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
									else
									{
										if(d_mean < 142.0455)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(d_min < 67.51315)
									{
										if(rss_mean < -76.1775)
											return 0;
										else
										{
											if(d_max < 209.616)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(rss_mean < -78.21025)
										{
											if(rss_mean < -78.3598)
												return 0;
											else
											{
												if(d_min < 73.70025)
													return 0;
												else
													return 1;
											}
										}
										else
											return 1;
									}
								}
							}
							else
							{
								if(d_max < 157.65)
								{
									if(d_max < 157.1495)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
						}
						else
						{
							if(rss_min < -84.10275)
							{
								if(rss_max < -67.0403)
								{
									if(d_min < 71.92165)
										return 0;
									else
									{
										if(d_max < 218.2915)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(d_min < 45.72405)
									{
										if(d_max < 214.406)
											return 1;
										else
											return 0;
									}
									else
										return 1;
								}
							}
							else
							{
								if(rss_min < -83.9719)
								{
									if(d_max < 223.6005)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
						}
					}
					else
					{
						if(d_mean < 145.4605)
						{
							if(d_max < 237.4185)
							{
								if(d_min < 70.14115)
								{
									if(d_mean < 127.0985)
										return 1;
									else
										return 0;
								}
								else
									return 1;
							}
							else
							{
								if(rss_min < -83.1941)
									return 1;
								else
									return 0;
							}
						}
						else
						{
							if(rss_std < 4.235895)
							{
								if(rss_mean < -78.0675)
									return 1;
								else
								{
									if(d_min < 179.1857)
										return 0;
									else
										return 2;
								}
							}
							else
								return 0;
						}
					}
				}
			}
			else
			{
				if(rss_mean < -72.58735)
				{
					if(d_max < 196.207)
						return 0;
					else
						return 1;
				}
				else
					return 2;
			}
		}
	}
	else
	{
		if(rss_mean < -70.57365)
		{
			if(rss_min < -84.4652)
			{
				if(d_max < 239.762)
				{
					if(d_std < 53.70815)
					{
						if(d_mean < 131.0935)
						{
							if(rss_max < -66.24135)
							{
								if(rss_mean < -77.4065)
								{
									if(d_min < 53.1347)
										return 0;
									else
										return 1;
								}
								else
								{
									if(d_std < 44.36725)
									{
										if(d_min < 56.50915)
											return 0;
										else
											return 1;
									}
									else
									{
										if(rss_min < -84.97725)
										{
											if(d_min < 53.84715)
												return 1;
											else
												return 0;
										}
										else
										{
											if(rss_std < 5.13609)
											{
												if(d_min < 51.84845)
													return 0;
												else
													return 1;
											}
											else
											{
												if(d_min < 67.3319)
													return 0;
												else
													return 1;
											}
										}
									}
								}
							}
							else
							{
								if(d_min < 46.8008)
								{
									if(rss_max < -63.43225)
									{
										if(d_mean < 121.2315)
											return 1;
										else
										{
											if(d_max < 223.82)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(rss_std < 8.830645)
											return 1;
										else
											return 0;
									}
								}
								else
									return 1;
							}
						}
						else
						{
							if(rss_max < -64.904)
							{
								if(d_min < 75.04385)
								{
									if(rss_max < -67.94645)
									{
										if(rss_std < 5.06497)
										{
											if(rss_max < -68.2572)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
									else
									{
										if(rss_min < -84.90485)
											return 0;
										else
										{
											if(d_min < 54.38345)
											{
												if(d_max < 232.476)
												{
													if(rss_min < -84.89045)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
											else
												return 1;
										}
									}
								}
								else
								{
									if(d_mean < 155.7815)
										return 1;
									else
										return 0;
								}
							}
							else
							{
								if(d_min < 35.69455)
									return 0;
								else
								{
									if(d_std < 52.5941)
										return 1;
									else
									{
										if(rss_mean < -77.6004)
										{
											if(rss_min < -84.8399)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
								}
							}
						}
					}
					else
					{
						if(d_mean < 137.3835)
						{
							if(d_std < 62.62)
							{
								if(rss_max < -65.15305)
								{
									if(d_max < 212.9755)
										return 1;
									else
									{
										if(d_max < 234.3195)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(rss_min < -84.965)
										return 0;
									else
									{
										if(rss_min < -84.57045)
										{
											if(d_mean < 104.6295)
												return 0;
											else
											{
												if(rss_max < -63.51765)
												{
													if(rss_mean < -76.5294)
													{
														if(d_min < 40.6119)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
												else
													return 1;
											}
										}
										else
											return 0;
									}
								}
							}
							else
							{
								if(d_mean < 136.7505)
									return 0;
								else
								{
									if(d_min < 53.8193)
										return 0;
									else
										return 1;
								}
							}
						}
						else
						{
							if(rss_min < -84.91355)
								return 0;
							else
							{
								if(rss_min < -84.91195)
									return 1;
								else
								{
									if(d_mean < 155.3335)
									{
										if(rss_std < 5.81351)
										{
											if(rss_max < -64.59385)
											{
												if(d_min < 68.0208)
												{
													if(rss_mean < -79.4538)
													{
														if(d_mean < 154.5355)
															return 1;
														else
															return 0;
													}
													else
													{
														if(d_mean < 139.9845)
														{
															if(rss_max < -67.63905)
																return 0;
															else
																return 1;
														}
														else
															return 0;
													}
												}
												else
												{
													if(rss_min < -84.81145)
														return 1;
													else
														return 0;
												}
											}
											else
											{
												if(d_max < 226.1665)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(d_std < 57.6369)
											{
												if(rss_min < -84.8343)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
									}
									else
									{
										if(rss_std < 5.187645)
										{
											if(d_std < 61.04385)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
								}
							}
						}
					}
				}
				else
				{
					if(rss_mean < -79.30575)
					{
						if(d_std < 78.04075)
						{
							if(rss_max < -67.7476)
								return 0;
							else
							{
								if(d_std < 53.92925)
								{
									if(d_max < 243.511)
										return 0;
									else
										return 1;
								}
								else
									return 1;
							}
						}
						else
						{
							if(d_max < 311.3705)
								return 1;
							else
								return 0;
						}
					}
					else
					{
						if(rss_max < -67.6515)
						{
							if(d_std < 65.0742)
							{
								if(rss_std < 5.566675)
								{
									if(d_min < 52.72185)
										return 0;
									else
										return 1;
								}
								else
								{
									if(d_max < 253.408)
										return 1;
									else
										return 0;
								}
							}
							else
								return 0;
						}
						else
						{
							if(d_min < 171.957)
								return 1;
							else
								return 2;
						}
					}
				}
			}
			else
			{
				if(rss_mean < -77.24255)
				{
					if(d_mean < 131.162)
					{
						if(rss_max < -64.1049)
							return 0;
						else
							return 1;
					}
					else
					{
						if(rss_max < -62.16285)
						{
							if(d_max < 263.978)
								return 0;
							else
								return 1;
						}
						else
						{
							if(d_std < 52.716)
								return 0;
							else
								return 1;
						}
					}
				}
				else
				{
					if(rss_min < -83.7033)
					{
						if(d_max < 225.0775)
						{
							if(d_std < 50.3807)
							{
								if(d_max < 166.4165)
									return 0;
								else
								{
									if(rss_max < -62.95665)
									{
										if(rss_std < 5.064085)
											return 1;
										else
											return 0;
									}
									else
										return 1;
								}
							}
							else
							{
								if(d_max < 220.492)
								{
									if(rss_min < -84.39795)
									{
										if(rss_min < -84.4132)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
								else
								{
									if(d_max < 221.409)
										return 1;
									else
										return 0;
								}
							}
						}
						else
							return 1;
					}
					else
					{
						if(d_std < 108.391)
						{
							if(rss_std < 5.624595)
							{
								if(d_min < 34.5023)
								{
									if(d_min < 32.6214)
										return 0;
									else
										return 1;
								}
								else
								{
									if(rss_max < -63.0448)
									{
										if(d_min < 134.03745)
											return 0;
										else
											return 2;
									}
									else
									{
										if(d_min < 39.19785)
											return 0;
										else
											return 1;
									}
								}
							}
							else
							{
								if(d_max < 240.061)
									return 0;
								else
								{
									if(d_max < 311.398)
										return 1;
									else
										return 2;
								}
							}
						}
						else
							return 1;
					}
				}
			}
		}
		else
		{
			if(rss_mean < -69.8002)
			{
				if(d_std < 100.22685)
					return 2;
				else
				{
					if(d_max < 235.8685)
						return 0;
					else
						return 1;
				}
			}
			else
			{
				if(d_mean < 105.6862)
					return 1;
				else
					return 2;
			}
		}
	}
}

int tree_6(float d_max, float d_min, float d_mean, float d_std, float rss_max, float rss_min, float rss_mean, float rss_std)
{
	if(rss_max < -61.50405)
	{
		if(d_max < 234.994)
		{
			if(rss_max < -70.5105)
			{
				if(rss_max < -74.74)
				{
					if(d_min < 121.2515)
					{
						if(rss_max < -79.6209)
						{
							if(d_mean < 169.1735)
								return 1;
							else
								return 0;
						}
						else
							return 0;
					}
					else
					{
						if(rss_max < -76.28535)
						{
							if(d_min < 168.82)
							{
								if(d_max < 229.4915)
									return 0;
								else
								{
									if(rss_max < -77.5871)
									{
										if(rss_min < -83.7802)
											return 0;
										else
											return 1;
									}
									else
									{
										if(rss_max < -77.57525)
											return 1;
										else
											return 0;
									}
								}
							}
							else
							{
								if(rss_mean < -82.08795)
								{
									if(d_std < 20.99775)
									{
										if(rss_std < 1.78856)
											return 0;
										else
										{
											if(d_max < 223.739)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(d_max < 213.668)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(rss_max < -80.82825)
										return 0;
									else
										return 1;
								}
							}
						}
						else
						{
							if(rss_mean < -82.56255)
								return 0;
							else
								return 1;
						}
					}
				}
				else
				{
					if(d_min < 101.9425)
					{
						if(rss_std < 3.805915)
						{
							if(rss_max < -71.5086)
							{
								if(d_mean < 140.5365)
									return 0;
								else
								{
									if(d_std < 38.40085)
									{
										if(rss_min < -84.6935)
										{
											if(d_max < 219.675)
											{
												if(d_min < 88.0227)
												{
													if(d_max < 216.343)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
											else
											{
												if(d_std < 34.476)
													return 0;
												else
												{
													if(rss_std < 3.37746)
													{
														if(rss_min < -84.88685)
															return 0;
														else
														{
															if(d_max < 223.356)
															{
																if(rss_min < -84.7839)
																	return 0;
																else
																	return 1;
															}
															else
															{
																if(rss_mean < -79.0106)
																{
																	if(rss_max < -73.28345)
																		return 0;
																	else
																	{
																		if(rss_max < -72.67775)
																		{
																			if(d_min < 84.0475)
																				return 1;
																			else
																				return 0;
																		}
																		else
																			return 0;
																	}
																}
																else
																	return 1;
															}
														}
													}
													else
													{
														if(rss_min < -84.9002)
															return 0;
														else
														{
															if(rss_max < -72.0593)
																return 1;
															else
																return 0;
														}
													}
												}
											}
										}
										else
											return 0;
									}
									else
									{
										if(rss_std < 3.355995)
										{
											if(rss_mean < -80.47635)
												return 0;
											else
											{
												if(rss_std < 3.048165)
												{
													if(rss_min < -84.73595)
													{
														if(rss_max < -73.3728)
														{
															if(d_mean < 141.6885)
																return 1;
															else
															{
																if(d_max < 223.7715)
																	return 1;
																else
																	return 0;
															}
														}
														else
														{
															if(d_std < 38.59255)
																return 0;
															else
																return 1;
														}
													}
													else
														return 0;
												}
												else
												{
													if(rss_max < -72.0969)
													{
														if(rss_std < 3.20562)
														{
															if(rss_min < -84.98205)
																return 1;
															else
															{
																if(rss_max < -72.47365)
																	return 0;
																else
																	return 1;
															}
														}
														else
															return 0;
													}
													else
													{
														if(d_min < 82.30135)
															return 0;
														else
															return 1;
													}
												}
											}
										}
										else
										{
											if(rss_max < -71.883)
												return 0;
											else
											{
												if(d_min < 83.22145)
													return 0;
												else
													return 1;
											}
										}
									}
								}
							}
							else
							{
								if(d_min < 74.0218)
								{
									if(d_std < 46.748)
									{
										if(d_min < 73.47395)
										{
											if(d_max < 232.93)
												return 0;
											else
											{
												if(d_max < 233.5435)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(d_max < 231.6645)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(rss_std < 3.47572)
											return 0;
										else
										{
											if(d_max < 228.98)
												return 0;
											else
												return 1;
										}
									}
								}
								else
								{
									if(d_mean < 139.308)
									{
										if(d_min < 100.2574)
											return 1;
										else
											return 0;
									}
									else
									{
										if(rss_min < -84.30565)
										{
											if(d_std < 33.40925)
												return 0;
											else
											{
												if(rss_max < -70.72835)
												{
													if(d_mean < 173.9945)
													{
														if(rss_mean < -79.83)
														{
															if(rss_max < -71.4446)
																return 0;
															else
																return 1;
														}
														else
															return 1;
													}
													else
														return 0;
												}
												else
												{
													if(d_min < 78.83025)
														return 0;
													else
														return 1;
												}
											}
										}
										else
										{
											if(d_max < 222.3775)
												return 0;
											else
												return 1;
										}
									}
								}
							}
						}
						else
						{
							if(d_mean < 145.2775)
							{
								if(d_max < 234.1)
								{
									if(d_min < 75.01185)
										return 0;
									else
									{
										if(d_min < 75.08525)
											return 1;
										else
										{
											if(rss_std < 3.843615)
											{
												if(rss_mean < -78.9695)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
									}
								}
								else
								{
									if(d_min < 78.13025)
										return 0;
									else
										return 1;
								}
							}
							else
								return 0;
						}
					}
					else
					{
						if(rss_std < 2.49011)
						{
							if(rss_min < -84.85375)
							{
								if(d_max < 226.0665)
									return 0;
								else
									return 1;
							}
							else
							{
								if(d_max < 184.1195)
									return 1;
								else
								{
									if(d_std < 17.23625)
										return 1;
									else
										return 0;
								}
							}
						}
						else
						{
							if(d_mean < 163.314)
							{
								if(rss_min < -83.4286)
								{
									if(d_min < 105.2665)
									{
										if(d_max < 226.8865)
										{
											if(d_min < 103.462)
												return 1;
											else
												return 0;
										}
										else
											return 0;
									}
									else
									{
										if(rss_std < 2.555035)
										{
											if(d_max < 211.5185)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
								}
								else
									return 0;
							}
							else
							{
								if(rss_min < -84.8211)
								{
									if(d_min < 105.306)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
						}
					}
				}
			}
			else
			{
				if(rss_min < -84.5288)
				{
					if(d_std < 49.35525)
					{
						if(rss_mean < -80.99865)
							return 0;
						else
						{
							if(d_min < 69.6034)
							{
								if(rss_max < -68.2752)
								{
									if(rss_min < -84.87585)
									{
										if(rss_max < -68.72385)
										{
											if(d_std < 49.065)
												return 0;
											else
											{
												if(d_min < 64.14505)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(d_std < 43.4933)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(rss_min < -84.7578)
										{
											if(d_min < 59.3807)
												return 0;
											else
											{
												if(rss_mean < -78.31115)
												{
													if(d_std < 47.7634)
													{
														if(d_std < 45.01555)
															return 1;
														else
														{
															if(rss_std < 3.72975)
																return 1;
															else
																return 0;
														}
													}
													else
														return 0;
												}
												else
												{
													if(rss_min < -84.8546)
													{
														if(d_max < 227.9165)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
											}
										}
										else
										{
											if(d_min < 67.22005)
												return 0;
											else
												return 1;
										}
									}
								}
								else
								{
									if(d_min < 55.46195)
									{
										if(rss_max < -66.24135)
										{
											if(d_max < 213.126)
												return 1;
											else
											{
												if(rss_std < 5.081535)
												{
													if(rss_max < -66.8593)
														return 0;
													else
													{
														if(d_std < 46.43795)
															return 0;
														else
															return 1;
													}
												}
												else
													return 0;
											}
										}
										else
										{
											if(d_mean < 130.6435)
												return 1;
											else
											{
												if(d_min < 51.50495)
												{
													if(d_max < 209.7985)
														return 1;
													else
													{
														if(rss_max < -63.8476)
															return 0;
														else
															return 1;
													}
												}
												else
													return 1;
											}
										}
									}
									else
									{
										if(d_mean < 145.2105)
											return 1;
										else
										{
											if(d_max < 229.216)
											{
												if(rss_mean < -78.9987)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
									}
								}
							}
							else
							{
								if(rss_max < -69.72675)
									return 1;
								else
								{
									if(rss_max < -69.6341)
										return 0;
									else
									{
										if(d_mean < 169.116)
											return 1;
										else
										{
											if(rss_max < -67.97865)
											{
												if(rss_min < -84.7703)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
									}
								}
							}
						}
					}
					else
					{
						if(d_min < 70.05825)
						{
							if(d_mean < 138.2665)
							{
								if(rss_max < -62.5892)
								{
									if(rss_std < 4.847435)
									{
										if(d_min < 50.7227)
											return 0;
										else
										{
											if(d_std < 52.6126)
											{
												if(rss_mean < -77.60195)
													return 1;
												else
												{
													if(d_max < 224.2705)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(d_mean < 137.0805)
													return 1;
												else
													return 0;
											}
										}
									}
									else
									{
										if(d_max < 229.875)
										{
											if(d_max < 218.1355)
											{
												if(rss_max < -67.6353)
												{
													if(d_min < 67.3319)
														return 0;
													else
														return 1;
												}
												else
												{
													if(rss_mean < -76.7513)
														return 1;
													else
													{
														if(rss_std < 5.77077)
															return 0;
														else
															return 1;
													}
												}
											}
											else
											{
												if(rss_min < -84.9644)
													return 0;
												else
												{
													if(rss_min < -84.9624)
														return 1;
													else
													{
														if(d_max < 227.6455)
														{
															if(d_min < 46.8008)
																return 0;
															else
															{
																if(rss_max < -66.39145)
																{
																	if(d_max < 221.99)
																	{
																		if(d_max < 219.23)
																			return 0;
																		else
																			return 1;
																	}
																	else
																	{
																		if(d_min < 65.6974)
																			return 0;
																		else
																			return 1;
																	}
																}
																else
																	return 1;
															}
														}
														else
														{
															if(d_min < 45.74965)
																return 0;
															else
																return 1;
														}
													}
												}
											}
										}
										else
										{
											if(d_max < 233.5775)
												return 0;
											else
												return 1;
										}
									}
								}
								else
								{
									if(d_min < 33.59435)
										return 0;
									else
										return 1;
								}
							}
							else
							{
								if(d_max < 216.586)
								{
									if(rss_min < -84.6757)
										return 1;
									else
										return 0;
								}
								else
								{
									if(rss_min < -84.88625)
										return 0;
									else
									{
										if(rss_std < 4.50871)
										{
											if(rss_max < -69.7695)
												return 0;
											else
												return 1;
										}
										else
										{
											if(d_mean < 148.86)
											{
												if(rss_min < -84.8312)
												{
													if(rss_max < -63.8638)
													{
														if(d_min < 55.34605)
															return 0;
														else
														{
															if(d_std < 50.86005)
																return 0;
															else
															{
																if(d_std < 55.58225)
																	return 1;
																else
																	return 0;
															}
														}
													}
													else
														return 1;
												}
												else
												{
													if(rss_std < 4.66513)
													{
														if(d_max < 229.7565)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
											}
											else
												return 0;
										}
									}
								}
							}
						}
						else
						{
							if(d_max < 234.5135)
								return 1;
							else
								return 0;
						}
					}
				}
				else
				{
					if(d_min < 71.0243)
					{
						if(rss_max < -62.5979)
						{
							if(d_mean < 127.9065)
							{
								if(rss_min < -83.27395)
								{
									if(d_min < 67.226)
									{
										if(d_std < 33.3639)
										{
											if(rss_min < -84.1003)
												return 0;
											else
											{
												if(d_mean < 108.0255)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(d_max < 225.0775)
											{
												if(rss_max < -62.95615)
												{
													if(d_max < 196.7565)
													{
														if(d_min < 61.16865)
															return 0;
														else
															return 1;
													}
													else
													{
														if(d_mean < 127.8925)
														{
															if(rss_mean < -77.3481)
															{
																if(d_std < 41.1704)
																	return 0;
																else
																	return 1;
															}
															else
																return 0;
														}
														else
															return 1;
													}
												}
												else
													return 1;
											}
											else
											{
												if(d_max < 230.584)
													return 1;
												else
													return 0;
											}
										}
									}
									else
									{
										if(d_min < 69.2279)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(d_std < 30.13755)
									{
										if(d_std < 30.1082)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
							}
							else
							{
								if(rss_max < -66.8759)
									return 0;
								else
								{
									if(d_mean < 132.6495)
									{
										if(rss_std < 5.12503)
										{
											if(d_max < 216.9195)
												return 1;
											else
												return 0;
										}
										else
											return 0;
									}
									else
										return 0;
								}
							}
						}
						else
						{
							if(d_min < 36.1628)
							{
								if(d_min < 32.26165)
								{
									if(d_min < 31.1432)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
							else
							{
								if(rss_min < -83.3816)
								{
									if(d_mean < 113.587)
										return 0;
									else
									{
										if(rss_std < 8.13204)
											return 1;
										else
											return 0;
									}
								}
								else
									return 0;
							}
						}
					}
					else
					{
						if(rss_min < -83.37695)
						{
							if(rss_mean < -78.21135)
							{
								if(rss_max < -69.63085)
								{
									if(rss_max < -70.43865)
										return 1;
									else
										return 0;
								}
								else
									return 1;
							}
							else
								return 1;
						}
						else
							return 0;
					}
				}
			}
		}
		else
		{
			if(d_mean < 272.434)
			{
				if(d_mean < 155.962)
				{
					if(rss_std < 3.07704)
					{
						if(rss_min < -84.45015)
						{
							if(rss_min < -84.86415)
							{
								if(rss_max < -73.645)
									return 0;
								else
								{
									if(rss_min < -84.94035)
										return 1;
									else
									{
										if(rss_max < -73.0661)
											return 1;
										else
											return 0;
									}
								}
							}
							else
								return 1;
						}
						else
						{
							if(rss_mean < -79.6969)
							{
								if(rss_max < -74.97375)
								{
									if(d_std < 36.6501)
										return 0;
									else
										return 1;
								}
								else
									return 1;
							}
							else
							{
								if(d_min < 99.6472)
									return 0;
								else
								{
									if(d_min < 107.4545)
										return 1;
									else
										return 0;
								}
							}
						}
					}
					else
					{
						if(rss_min < -84.91965)
						{
							if(d_max < 236.5905)
								return 0;
							else
							{
								if(rss_min < -84.94605)
								{
									if(rss_mean < -77.51085)
									{
										if(rss_min < -84.9492)
										{
											if(d_std < 40.56475)
											{
												if(d_std < 40.2093)
												{
													if(rss_min < -84.9784)
														return 1;
													else
													{
														if(d_std < 39.86715)
															return 1;
														else
															return 0;
													}
												}
												else
												{
													if(d_max < 253.96)
														return 0;
													else
														return 1;
												}
											}
											else
												return 1;
										}
										else
										{
											if(rss_min < -84.94825)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(rss_min < -84.9759)
											return 1;
										else
										{
											if(rss_std < 5.935365)
											{
												if(rss_max < -65.98025)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
									}
								}
								else
								{
									if(rss_min < -84.944)
									{
										if(d_max < 263.6485)
											return 1;
										else
											return 0;
									}
									else
										return 0;
								}
							}
						}
						else
						{
							if(rss_max < -68.12825)
							{
								if(d_min < 67.0645)
								{
									if(rss_min < -84.31435)
									{
										if(d_std < 64.17205)
										{
											if(rss_min < -84.80865)
											{
												if(rss_min < -84.8644)
													return 1;
												else
												{
													if(d_max < 251.8685)
													{
														if(rss_std < 4.876775)
														{
															if(d_std < 51.74285)
																return 0;
															else
																return 1;
														}
														else
														{
															if(d_max < 241.027)
																return 1;
															else
																return 0;
														}
													}
													else
													{
														if(d_mean < 148.607)
															return 0;
														else
														{
															if(d_max < 278.0975)
																return 0;
															else
																return 1;
														}
													}
												}
											}
											else
											{
												if(rss_std < 5.061055)
													return 1;
												else
													return 0;
											}
										}
										else
											return 0;
									}
									else
										return 0;
								}
								else
								{
									if(rss_max < -71.30945)
									{
										if(rss_mean < -78.52965)
										{
											if(d_max < 247.4545)
											{
												if(rss_max < -71.34305)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
										else
										{
											if(rss_min < -84.38255)
												return 1;
											else
												return 0;
										}
									}
									else
										return 1;
								}
							}
							else
								return 1;
						}
					}
				}
				else
				{
					if(rss_max < -76.86705)
					{
						if(d_max < 282.9135)
						{
							if(d_max < 246.495)
								return 0;
							else
							{
								if(rss_max < -77.70565)
								{
									if(d_mean < 204.276)
									{
										if(rss_std < 1.98167)
										{
											if(rss_std < 1.563035)
											{
												if(d_std < 31.6958)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
										else
											return 0;
									}
									else
										return 0;
								}
								else
								{
									if(d_min < 131.5645)
									{
										if(d_min < 111.49)
											return 1;
										else
										{
											if(rss_max < -77.61655)
											{
												if(rss_max < -77.6429)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
									}
									else
										return 1;
								}
							}
						}
						else
						{
							if(d_min < 160.766)
							{
								if(rss_max < -77.9525)
								{
									if(rss_min < -84.9163)
										return 0;
									else
									{
										if(rss_std < 1.82991)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(d_std < 40.7548)
										return 1;
									else
									{
										if(rss_max < -76.9695)
										{
											if(rss_min < -84.98125)
											{
												if(rss_min < -84.98265)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
										else
											return 0;
									}
								}
							}
							else
								return 1;
						}
					}
					else
					{
						if(d_min < 115.9165)
						{
							if(rss_min < -84.4204)
							{
								if(rss_max < -73.9499)
								{
									if(d_min < 105.6755)
									{
										if(rss_std < 3.23817)
										{
											if(d_std < 40.09075)
												return 0;
											else
											{
												if(rss_min < -84.92045)
													return 0;
												else
												{
													if(d_min < 99.18035)
														return 0;
													else
													{
														if(rss_max < -75.0849)
															return 0;
														else
															return 1;
													}
												}
											}
										}
										else
											return 0;
									}
									else
									{
										if(rss_max < -75.5564)
										{
											if(d_min < 109.857)
												return 0;
											else
											{
												if(d_max < 246.9765)
													return 0;
												else
												{
													if(rss_max < -76.2628)
														return 0;
													else
														return 1;
												}
											}
										}
										else
										{
											if(rss_mean < -80.34735)
											{
												if(rss_mean < -80.72955)
													return 1;
												else
												{
													if(rss_std < 3.134455)
														return 1;
													else
													{
														if(rss_min < -84.9432)
															return 0;
														else
															return 1;
													}
												}
											}
											else
												return 0;
										}
									}
								}
								else
								{
									if(d_max < 241.286)
									{
										if(rss_min < -84.9242)
										{
											if(rss_mean < -79.18425)
											{
												if(rss_mean < -79.2662)
													return 0;
												else
												{
													if(d_max < 238.1395)
														return 1;
													else
														return 0;
												}
											}
											else
												return 1;
										}
										else
										{
											if(rss_min < -84.80525)
												return 1;
											else
											{
												if(d_min < 71.0644)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(rss_std < 4.826735)
										{
											if(d_min < 84.27435)
											{
												if(rss_max < -70.18625)
												{
													if(rss_min < -84.9855)
														return 0;
													else
													{
														if(d_mean < 166.5525)
														{
															if(rss_std < 3.787635)
															{
																if(d_std < 47.0154)
																	return 1;
																else
																{
																	if(d_max < 253.743)
																		return 0;
																	else
																	{
																		if(d_mean < 166.5295)
																			return 1;
																		else
																			return 0;
																	}
																}
															}
															else
															{
																if(rss_min < -84.96495)
																	return 1;
																else
																	return 0;
															}
														}
														else
														{
															if(d_max < 276.4245)
															{
																if(rss_std < 3.28858)
																	return 1;
																else
																	return 0;
															}
															else
																return 1;
														}
													}
												}
												else
												{
													if(rss_max < -68.1993)
														return 1;
													else
													{
														if(d_std < 52.9703)
														{
															if(d_std < 51.9495)
																return 1;
															else
															{
																if(rss_max < -67.8429)
																{
																	if(d_max < 267.3765)
																		return 0;
																	else
																		return 1;
																}
																else
																	return 1;
															}
														}
														else
															return 1;
													}
												}
											}
											else
											{
												if(rss_mean < -81.72915)
												{
													if(d_max < 256.627)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
										}
										else
										{
											if(rss_mean < -80.22775)
											{
												if(d_max < 286.8035)
													return 1;
												else
													return 0;
											}
											else
											{
												if(d_std < 77.0193)
												{
													if(rss_max < -67.752)
													{
														if(d_min < 66.0471)
														{
															if(d_max < 294.9025)
																return 0;
															else
															{
																if(d_max < 298.2595)
																	return 1;
																else
																	return 0;
															}
														}
														else
															return 1;
													}
													else
														return 1;
												}
												else
												{
													if(rss_max < -66.9011)
														return 0;
													else
														return 1;
												}
											}
										}
									}
								}
							}
							else
							{
								if(d_min < 53.6866)
									return 1;
								else
								{
									if(d_max < 250.208)
										return 0;
									else
									{
										if(d_min < 88.62055)
											return 0;
										else
											return 1;
									}
								}
							}
						}
						else
						{
							if(rss_min < -84.48955)
							{
								if(d_max < 242.5125)
								{
									if(d_max < 242.093)
									{
										if(d_max < 236.428)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
								else
								{
									if(rss_std < 3.54589)
										return 1;
									else
										return 0;
								}
							}
							else
							{
								if(rss_min < -84.30275)
									return 0;
								else
								{
									if(rss_std < 1.937495)
									{
										if(d_mean < 220.667)
											return 0;
										else
											return 2;
									}
									else
										return 1;
								}
							}
						}
					}
				}
			}
			else
				return 2;
		}
	}
	else
	{
		if(rss_mean < -69.7687)
		{
			if(d_max < 239.683)
			{
				if(rss_std < 8.115505)
				{
					if(rss_min < -83.9597)
					{
						if(d_std < 54.363)
						{
							if(d_mean < 106.431)
							{
								if(d_max < 174.063)
									return 0;
								else
									return 1;
							}
							else
							{
								if(d_max < 170.379)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(d_std < 62.9251)
							{
								if(d_std < 57.9627)
								{
									if(d_max < 207.66)
										return 1;
									else
									{
										if(rss_min < -84.70275)
											return 1;
										else
											return 0;
									}
								}
								else
									return 1;
							}
							else
								return 0;
						}
					}
					else
					{
						if(rss_std < 5.62651)
						{
							if(d_min < 32.6214)
								return 0;
							else
								return 1;
						}
						else
							return 0;
					}
				}
				else
				{
					if(d_min < 18.1466)
					{
						if(rss_max < -51.3688)
							return 0;
						else
							return 1;
					}
					else
					{
						if(d_max < 202.08)
						{
							if(d_max < 183.876)
								return 0;
							else
								return 1;
						}
						else
							return 0;
					}
				}
			}
			else
				return 1;
		}
		else
			return 2;
	}
}

int tree_7(float d_max, float d_min, float d_mean, float d_std, float rss_max, float rss_min, float rss_mean, float rss_std)
{
	if(rss_mean < -70.5974)
	{
		if(rss_min < -84.467)
		{
			if(rss_mean < -80.3221)
			{
				if(rss_min < -84.90225)
				{
					if(d_max < 244.8615)
					{
						if(d_max < 219.268)
							return 1;
						else
						{
							if(rss_min < -84.90945)
							{
								if(rss_min < -84.9828)
								{
									if(rss_min < -84.98425)
									{
										if(d_mean < 150.025)
											return 1;
										else
											return 0;
									}
									else
									{
										if(rss_mean < -80.47215)
										{
											if(d_std < 31.5274)
											{
												if(d_mean < 187.15)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
										else
										{
											if(rss_min < -84.9838)
												return 1;
											else
												return 0;
										}
									}
								}
								else
								{
									if(rss_mean < -80.65795)
										return 0;
									else
									{
										if(d_max < 237.921)
										{
											if(rss_min < -84.97975)
											{
												if(d_std < 38.72715)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
										else
										{
											if(d_max < 239.46)
												return 1;
											else
												return 0;
										}
									}
								}
							}
							else
							{
								if(d_max < 233.183)
									return 0;
								else
								{
									if(d_mean < 172.995)
										return 1;
									else
										return 0;
								}
							}
						}
					}
					else
					{
						if(rss_max < -75.97715)
						{
							if(rss_max < -77.6678)
							{
								if(rss_max < -78.1798)
									return 0;
								else
								{
									if(d_std < 34.41715)
									{
										if(d_max < 264.6135)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
							}
							else
							{
								if(d_min < 124.8125)
								{
									if(d_max < 294.415)
										return 0;
									else
									{
										if(d_max < 319.6055)
											return 1;
										else
											return 0;
									}
								}
								else
									return 1;
							}
						}
						else
						{
							if(rss_std < 4.503785)
							{
								if(rss_min < -84.9785)
								{
									if(rss_std < 4.249165)
										return 1;
									else
									{
										if(d_max < 294.2625)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(rss_max < -73.9197)
									{
										if(d_min < 109.281)
											return 0;
										else
										{
											if(rss_max < -74.40095)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(rss_std < 3.37937)
											return 1;
										else
										{
											if(d_std < 55.6138)
											{
												if(rss_min < -84.9147)
													return 1;
												else
													return 0;
											}
											else
											{
												if(d_std < 59.95365)
												{
													if(d_max < 282.507)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
										}
									}
								}
							}
							else
							{
								if(d_max < 291.271)
									return 1;
								else
									return 0;
							}
						}
					}
				}
				else
				{
					if(d_max < 237.173)
					{
						if(d_max < 216.259)
						{
							if(rss_max < -74.80955)
							{
								if(d_mean < 183.1845)
									return 0;
								else
									return 1;
							}
							else
							{
								if(rss_std < 3.702555)
								{
									if(rss_min < -84.64715)
										return 1;
									else
										return 0;
								}
								else
								{
									if(rss_max < -72.17785)
										return 0;
									else
										return 1;
								}
							}
						}
						else
						{
							if(rss_std < 2.587465)
							{
								if(rss_max < -75.98885)
									return 0;
								else
								{
									if(d_min < 124.4905)
										return 0;
									else
									{
										if(d_mean < 191.188)
										{
											if(rss_max < -74.57915)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
								}
							}
							else
							{
								if(d_std < 35.7074)
								{
									if(d_mean < 175.3415)
									{
										if(rss_max < -74.3853)
											return 0;
										else
										{
											if(rss_min < -84.8603)
												return 1;
											else
											{
												if(rss_max < -74.16365)
													return 1;
												else
												{
													if(rss_min < -84.4929)
													{
														if(d_max < 224.9905)
															return 0;
														else
														{
															if(d_mean < 148.304)
																return 1;
															else
															{
																if(rss_min < -84.83845)
																	return 0;
																else
																{
																	if(d_std < 32.73005)
																	{
																		if(d_mean < 162.8655)
																			return 1;
																		else
																			return 0;
																	}
																	else
																	{
																		if(d_max < 228.1995)
																			return 1;
																		else
																			return 0;
																	}
																}
															}
														}
													}
													else
														return 1;
												}
											}
										}
									}
									else
									{
										if(d_min < 98.43265)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(d_max < 233.2535)
									{
										if(rss_mean < -80.8138)
										{
											if(rss_max < -68.50725)
											{
												if(rss_mean < -80.84275)
													return 0;
												else
												{
													if(d_std < 36.94495)
													{
														if(d_std < 36.8044)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
											}
											else
											{
												if(d_min < 62.35155)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(d_min < 94.80835)
											{
												if(rss_max < -68.2783)
												{
													if(d_std < 38.4593)
													{
														if(d_max < 226.4615)
														{
															if(d_mean < 163.0905)
															{
																if(rss_min < -84.7876)
																	return 0;
																else
																{
																	if(d_max < 222.129)
																		return 0;
																	else
																		return 1;
																}
															}
															else
															{
																if(rss_max < -72.67495)
																{
																	if(d_max < 222.2125)
																		return 1;
																	else
																		return 0;
																}
																else
																	return 1;
															}
														}
														else
															return 0;
													}
													else
													{
														if(rss_min < -84.8298)
														{
															if(d_max < 226.963)
															{
																if(rss_std < 3.53928)
																	return 1;
																else
																	return 0;
															}
															else
																return 0;
														}
														else
															return 0;
													}
												}
												else
												{
													if(d_min < 53.25285)
														return 0;
													else
														return 1;
												}
											}
											else
												return 0;
										}
									}
									else
									{
										if(d_mean < 173.93)
										{
											if(rss_min < -84.8758)
												return 0;
											else
											{
												if(rss_mean < -80.9469)
												{
													if(d_mean < 170.7385)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
										}
										else
										{
											if(rss_mean < -80.73515)
												return 0;
											else
											{
												if(d_mean < 176.583)
													return 1;
												else
													return 0;
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if(d_max < 279.129)
						{
							if(rss_min < -84.82435)
							{
								if(rss_mean < -81.20055)
								{
									if(d_min < 96.6096)
										return 0;
									else
									{
										if(d_mean < 204.8885)
										{
											if(d_max < 243.84)
											{
												if(d_max < 242.093)
													return 1;
												else
													return 0;
											}
											else
											{
												if(rss_max < -78.6518)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(d_max < 276.675)
												return 0;
											else
												return 1;
										}
									}
								}
								else
									return 1;
							}
							else
							{
								if(rss_std < 3.59415)
								{
									if(rss_max < -73.9764)
									{
										if(d_min < 131.0955)
										{
											if(rss_mean < -80.84885)
											{
												if(rss_max < -75.50465)
												{
													if(d_max < 249.4785)
														return 0;
													else
													{
														if(d_mean < 171.2805)
															return 0;
														else
															return 1;
													}
												}
												else
												{
													if(rss_mean < -80.8574)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(d_mean < 166.078)
												{
													if(d_max < 275.259)
														return 1;
													else
														return 0;
												}
												else
												{
													if(d_std < 36.6753)
													{
														if(rss_min < -84.7211)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
											}
										}
										else
										{
											if(rss_std < 1.36412)
											{
												if(rss_min < -84.7168)
													return 0;
												else
												{
													if(d_max < 258.658)
														return 0;
													else
														return 1;
												}
											}
											else
												return 1;
										}
									}
									else
										return 1;
								}
								else
								{
									if(rss_max < -70.0807)
									{
										if(d_mean < 162.801)
											return 1;
										else
											return 0;
									}
									else
										return 1;
								}
							}
						}
						else
						{
							if(d_std < 77.22825)
							{
								if(rss_max < -75.6407)
								{
									if(rss_std < 2.755955)
									{
										if(d_min < 112.77)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
								else
									return 1;
							}
							else
								return 0;
						}
					}
				}
			}
			else
			{
				if(d_max < 234.994)
				{
					if(rss_max < -70.5035)
					{
						if(d_max < 218.4815)
						{
							if(rss_min < -84.5512)
							{
								if(rss_std < 3.85271)
								{
									if(d_min < 81.14715)
									{
										if(d_mean < 139.05)
											return 0;
										else
										{
											if(d_max < 214.897)
											{
												if(rss_mean < -79.60045)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
									}
									else
									{
										if(d_std < 38.307)
										{
											if(rss_max < -74.62395)
												return 0;
											else
												return 1;
										}
										else
										{
											if(rss_max < -72.4993)
												return 0;
											else
												return 1;
										}
									}
								}
								else
								{
									if(d_max < 216.3835)
										return 0;
									else
									{
										if(d_std < 45.96755)
											return 1;
										else
											return 0;
									}
								}
							}
							else
							{
								if(rss_std < 3.67189)
									return 0;
								else
								{
									if(d_mean < 139.418)
										return 1;
									else
										return 0;
								}
							}
						}
						else
						{
							if(rss_std < 3.769525)
							{
								if(rss_std < 2.901365)
								{
									if(d_max < 234.756)
										return 0;
									else
										return 1;
								}
								else
								{
									if(rss_min < -84.91865)
									{
										if(d_mean < 143.1925)
										{
											if(rss_mean < -79.45835)
												return 1;
											else
												return 0;
										}
										else
										{
											if(d_std < 48.73895)
												return 0;
											else
											{
												if(d_std < 48.86185)
													return 1;
												else
													return 0;
											}
										}
									}
									else
									{
										if(d_min < 108.94)
										{
											if(rss_max < -71.54915)
											{
												if(d_std < 41.6682)
												{
													if(rss_min < -84.8204)
													{
														if(d_mean < 141.7785)
															return 0;
														else
														{
															if(rss_min < -84.84335)
															{
																if(d_max < 228.298)
																	return 0;
																else
																{
																	if(rss_min < -84.8837)
																		return 1;
																	else
																		return 0;
																}
															}
															else
																return 1;
														}
													}
													else
													{
														if(d_max < 222.924)
															return 0;
														else
														{
															if(rss_std < 3.685915)
															{
																if(d_max < 223.054)
																	return 1;
																else
																	return 0;
															}
															else
																return 1;
														}
													}
												}
												else
													return 0;
											}
											else
											{
												if(d_min < 77.816)
												{
													if(rss_min < -84.7849)
													{
														if(rss_mean < -78.69535)
														{
															if(d_min < 76.33665)
															{
																if(d_std < 40.6276)
																	return 0;
																else
																	return 1;
															}
															else
																return 0;
														}
														else
														{
															if(d_std < 47.74785)
																return 0;
															else
																return 1;
														}
													}
													else
														return 0;
												}
												else
													return 1;
											}
										}
										else
											return 1;
									}
								}
							}
							else
							{
								if(d_max < 234.1155)
								{
									if(d_std < 36.663)
										return 1;
									else
									{
										if(d_std < 43.8252)
										{
											if(d_std < 43.66245)
												return 0;
											else
											{
												if(d_std < 43.67005)
													return 1;
												else
												{
													if(d_std < 43.80955)
														return 0;
													else
														return 1;
												}
											}
										}
										else
											return 0;
									}
								}
								else
								{
									if(d_mean < 138.348)
									{
										if(d_max < 234.5705)
											return 1;
										else
											return 0;
									}
									else
										return 0;
								}
							}
						}
					}
					else
					{
						if(d_min < 69.9001)
						{
							if(d_max < 217.78)
							{
								if(rss_min < -84.98285)
									return 0;
								else
								{
									if(rss_max < -68.2642)
									{
										if(rss_std < 4.768685)
										{
											if(rss_min < -84.60515)
											{
												if(d_std < 46.78535)
													return 1;
												else
												{
													if(d_std < 50.2209)
														return 0;
													else
														return 1;
												}
											}
											else
												return 0;
										}
										else
										{
											if(rss_min < -84.81105)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(d_max < 213.2365)
											return 1;
										else
										{
											if(d_max < 213.394)
												return 0;
											else
											{
												if(rss_min < -84.55465)
												{
													if(rss_min < -84.7117)
														return 1;
													else
													{
														if(rss_min < -84.62805)
															return 0;
														else
															return 1;
													}
												}
												else
													return 0;
											}
										}
									}
								}
							}
							else
							{
								if(d_std < 52.12495)
								{
									if(d_mean < 138.476)
									{
										if(rss_mean < -75.179)
										{
											if(rss_max < -66.1952)
											{
												if(d_min < 62.29645)
												{
													if(d_min < 53.36845)
														return 0;
													else
													{
														if(rss_mean < -78.1849)
															return 1;
														else
														{
															if(rss_max < -67.6266)
															{
																if(d_max < 221.1045)
																	return 1;
																else
																{
																	if(d_std < 51.75775)
																		return 0;
																	else
																	{
																		if(d_std < 51.80075)
																			return 1;
																		else
																			return 0;
																	}
																}
															}
															else
																return 1;
														}
													}
												}
												else
												{
													if(d_max < 218.9175)
														return 0;
													else
													{
														if(rss_mean < -78.5663)
														{
															if(rss_max < -68.82975)
																return 1;
															else
																return 0;
														}
														else
															return 1;
													}
												}
											}
											else
											{
												if(d_std < 50.9001)
												{
													if(d_max < 219.03)
														return 0;
													else
													{
														if(rss_std < 4.62941)
														{
															if(rss_std < 4.62675)
															{
																if(d_min < 52.3808)
																	return 0;
																else
																	return 1;
															}
															else
																return 0;
														}
														else
															return 1;
													}
												}
												else
												{
													if(d_max < 221.6955)
														return 0;
													else
													{
														if(d_min < 46.4977)
														{
															if(rss_max < -62.97665)
																return 0;
															else
																return 1;
														}
														else
															return 1;
													}
												}
											}
										}
										else
											return 0;
									}
									else
									{
										if(rss_min < -84.9002)
											return 0;
										else
										{
											if(d_min < 69.22585)
											{
												if(d_max < 224.8335)
												{
													if(rss_std < 4.645005)
													{
														if(rss_min < -84.7593)
														{
															if(d_min < 59.9904)
																return 1;
															else
																return 0;
														}
														else
															return 0;
													}
													else
														return 0;
												}
												else
												{
													if(d_std < 47.56785)
														return 0;
													else
													{
														if(rss_std < 4.592355)
														{
															if(rss_min < -84.71705)
																return 1;
															else
																return 0;
														}
														else
														{
															if(rss_max < -64.9042)
																return 0;
															else
																return 1;
														}
													}
												}
											}
											else
												return 1;
										}
									}
								}
								else
								{
									if(d_std < 62.02935)
									{
										if(rss_max < -64.3834)
										{
											if(d_mean < 140.203)
											{
												if(rss_std < 4.883155)
												{
													if(rss_max < -70.0126)
														return 0;
													else
													{
														if(d_max < 229.2075)
															return 1;
														else
														{
															if(d_max < 231.4665)
																return 0;
															else
																return 1;
														}
													}
												}
												else
												{
													if(rss_mean < -78.1261)
														return 1;
													else
													{
														if(d_max < 228.8325)
														{
															if(d_max < 227.6455)
															{
																if(rss_std < 5.32836)
																{
																	if(d_std < 53.39775)
																	{
																		if(d_mean < 135.899)
																		{
																			if(d_max < 225.274)
																				return 1;
																			else
																				return 0;
																		}
																		else
																			return 0;
																	}
																	else
																		return 0;
																}
																else
																	return 0;
															}
															else
																return 1;
														}
														else
															return 0;
													}
												}
											}
											else
											{
												if(d_min < 62.3969)
												{
													if(rss_max < -69.27675)
													{
														if(d_min < 59.2553)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
												else
												{
													if(rss_std < 4.633265)
													{
														if(d_std < 53.14435)
														{
															if(rss_mean < -78.5668)
																return 0;
															else
															{
																if(d_min < 62.88935)
																	return 1;
																else
																	return 0;
															}
														}
														else
															return 1;
													}
													else
														return 0;
												}
											}
										}
										else
										{
											if(rss_mean < -74.43125)
											{
												if(rss_min < -84.83015)
												{
													if(rss_min < -84.96975)
														return 0;
													else
														return 1;
												}
												else
												{
													if(rss_max < -63.04775)
													{
														if(rss_min < -84.58355)
															return 0;
														else
														{
															if(d_std < 55.76565)
																return 0;
															else
																return 1;
														}
													}
													else
													{
														if(rss_max < -61.91825)
															return 1;
														else
															return 0;
													}
												}
											}
											else
												return 0;
										}
									}
									else
										return 0;
								}
							}
						}
						else
						{
							if(d_mean < 143.3545)
								return 1;
							else
							{
								if(rss_std < 2.910285)
								{
									if(d_std < 34.1855)
										return 0;
									else
										return 1;
								}
								else
								{
									if(rss_max < -69.6341)
									{
										if(rss_max < -69.7282)
										{
											if(d_max < 233.5125)
												return 1;
											else
												return 0;
										}
										else
											return 0;
									}
									else
										return 1;
								}
							}
						}
					}
				}
				else
				{
					if(rss_max < -73.89395)
					{
						if(rss_std < 3.220765)
						{
							if(rss_min < -84.91695)
							{
								if(d_mean < 165.5335)
									return 0;
								else
								{
									if(d_min < 128.788)
										return 1;
									else
										return 0;
								}
							}
							else
							{
								if(d_mean < 182.092)
									return 1;
								else
									return 0;
							}
						}
						else
							return 0;
					}
					else
					{
						if(d_max < 241.5095)
						{
							if(rss_min < -84.92895)
							{
								if(rss_min < -84.97905)
								{
									if(d_max < 240.6095)
										return 1;
									else
										return 0;
								}
								else
								{
									if(rss_max < -67.1079)
									{
										if(rss_std < 3.558085)
											return 1;
										else
											return 0;
									}
									else
										return 1;
								}
							}
							else
							{
								if(rss_std < 7.486215)
								{
									if(rss_mean < -78.99695)
									{
										if(d_min < 67.10665)
										{
											if(rss_max < -68.7399)
											{
												if(d_max < 236.5765)
													return 1;
												else
													return 0;
											}
											else
											{
												if(d_min < 37.26695)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(d_min < 74.0471)
											{
												if(d_min < 73.59105)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
									}
									else
									{
										if(d_max < 241.0335)
											return 1;
										else
											return 0;
									}
								}
								else
									return 0;
							}
						}
						else
						{
							if(d_min < 84.90925)
							{
								if(rss_max < -67.6574)
								{
									if(rss_std < 5.56996)
									{
										if(rss_max < -70.1979)
										{
											if(rss_max < -70.2796)
											{
												if(rss_min < -84.9115)
												{
													if(rss_min < -84.9573)
													{
														if(rss_std < 4.368045)
														{
															if(rss_mean < -80.2685)
															{
																if(d_max < 294.847)
																	return 1;
																else
																	return 0;
															}
															else
																return 1;
														}
														else
														{
															if(d_mean < 156.228)
																return 1;
															else
																return 0;
														}
													}
													else
													{
														if(d_max < 261.327)
															return 1;
														else
														{
															if(d_max < 289.925)
															{
																if(rss_mean < -80.2006)
																{
																	if(d_max < 271.0295)
																		return 1;
																	else
																		return 0;
																}
																else
																	return 0;
															}
															else
																return 1;
														}
													}
												}
												else
												{
													if(rss_std < 2.789105)
													{
														if(d_max < 245.2005)
															return 1;
														else
															return 0;
													}
													else
													{
														if(d_mean < 151.9155)
															return 1;
														else
														{
															if(d_max < 247.2665)
															{
																if(d_mean < 152.779)
																	return 0;
																else
																	return 1;
															}
															else
															{
																if(rss_max < -71.93095)
																{
																	if(rss_max < -72.0637)
																		return 1;
																	else
																		return 0;
																}
																else
																	return 1;
															}
														}
													}
												}
											}
											else
												return 0;
										}
										else
										{
											if(d_min < 65.4565)
											{
												if(rss_mean < -79.2247)
												{
													if(rss_std < 4.753975)
													{
														if(rss_std < 4.28802)
															return 1;
														else
														{
															if(d_std < 55.66465)
															{
																if(d_mean < 160.959)
																	return 1;
																else
																	return 0;
															}
															else
																return 1;
														}
													}
													else
														return 0;
												}
												else
												{
													if(d_min < 52.72185)
														return 0;
													else
													{
														if(rss_max < -69.46155)
														{
															if(rss_mean < -78.411)
																return 1;
															else
																return 0;
														}
														else
															return 1;
													}
												}
											}
											else
												return 1;
										}
									}
									else
										return 0;
								}
								else
									return 1;
							}
							else
							{
								if(d_max < 387.9445)
								{
									if(rss_max < -73.18595)
									{
										if(d_max < 273.851)
										{
											if(d_min < 98.5016)
												return 0;
											else
												return 1;
										}
										else
											return 1;
									}
									else
										return 1;
								}
								else
									return 2;
							}
						}
					}
				}
			}
		}
		else
		{
			if(d_max < 224.2945)
			{
				if(rss_mean < -77.59215)
				{
					if(rss_max < -73.3444)
					{
						if(rss_mean < -82.3139)
						{
							if(d_min < 104.388)
							{
								if(d_max < 220.287)
									return 1;
								else
									return 0;
							}
							else
								return 0;
						}
						else
						{
							if(rss_std < 0.689859)
							{
								if(d_min < 124.6215)
									return 1;
								else
									return 0;
							}
							else
							{
								if(d_max < 180.3575)
								{
									if(d_min < 149.5905)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
						}
					}
					else
					{
						if(d_std < 24.50125)
						{
							if(rss_std < 2.525035)
								return 0;
							else
							{
								if(d_min < 87.68585)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(rss_mean < -78.5742)
								return 0;
							else
							{
								if(rss_min < -83.4741)
								{
									if(d_max < 176.3465)
									{
										if(d_min < 58.30265)
											return 0;
										else
											return 1;
									}
									else
									{
										if(d_mean < 132.746)
										{
											if(d_std < 46.23265)
											{
												if(d_min < 75.2733)
													return 0;
												else
												{
													if(rss_min < -83.9176)
														return 1;
													else
														return 0;
												}
											}
											else
												return 1;
										}
										else
										{
											if(d_mean < 139.7635)
											{
												if(d_min < 72.25435)
													return 0;
												else
												{
													if(d_std < 40.2509)
														return 0;
													else
													{
														if(rss_max < -70.6776)
															return 0;
														else
														{
															if(d_min < 73.70025)
															{
																if(d_max < 212.109)
																	return 0;
																else
																	return 1;
															}
															else
																return 1;
														}
													}
												}
											}
											else
												return 0;
										}
									}
								}
								else
									return 0;
							}
						}
					}
				}
				else
				{
					if(rss_std < 6.47473)
					{
						if(rss_max < -62.89085)
						{
							if(rss_min < -83.2771)
							{
								if(d_std < 40.71715)
								{
									if(d_max < 212.804)
									{
										if(rss_min < -84.05195)
										{
											if(d_min < 61.1234)
												return 0;
											else
												return 1;
										}
										else
										{
											if(rss_max < -67.2194)
											{
												if(rss_min < -83.2825)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
									}
									else
										return 1;
								}
								else
								{
									if(rss_min < -84.2017)
									{
										if(d_std < 48.54585)
										{
											if(d_max < 214.406)
											{
												if(d_max < 191.211)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
										else
											return 0;
									}
									else
										return 0;
								}
							}
							else
								return 0;
						}
						else
						{
							if(d_min < 26.59125)
								return 0;
							else
							{
								if(rss_min < -83.7928)
								{
									if(d_max < 165.9755)
										return 0;
									else
									{
										if(d_mean < 134.132)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(rss_max < -59.7974)
									{
										if(d_max < 213.0045)
											return 0;
										else
											return 1;
									}
									else
									{
										if(d_min < 31.3371)
											return 0;
										else
											return 1;
									}
								}
							}
						}
					}
					else
					{
						if(d_std < 109.61)
							return 0;
						else
						{
							if(d_mean < 123.7135)
								return 0;
							else
								return 1;
						}
					}
				}
			}
			else
			{
				if(rss_mean < -78.0123)
				{
					if(d_mean < 157.5145)
					{
						if(rss_max < -70.7681)
						{
							if(rss_mean < -78.729)
							{
								if(d_std < 37.5973)
								{
									if(d_max < 288.1485)
									{
										if(rss_std < 2.716625)
											return 0;
										else
										{
											if(d_min < 95.0691)
												return 0;
											else
												return 1;
										}
									}
									else
										return 1;
								}
								else
								{
									if(d_std < 42.06055)
										return 1;
									else
									{
										if(d_max < 245.599)
										{
											if(rss_mean < -78.75245)
											{
												if(d_mean < 146.7595)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
										else
											return 1;
									}
								}
							}
							else
							{
								if(rss_max < -71.5979)
									return 0;
								else
								{
									if(rss_max < -71.4931)
										return 1;
									else
										return 0;
								}
							}
						}
						else
						{
							if(d_min < 68.37055)
							{
								if(d_max < 249.0925)
									return 0;
								else
									return 1;
							}
							else
							{
								if(rss_min < -81.71715)
									return 1;
								else
									return 0;
							}
						}
					}
					else
					{
						if(d_mean < 176.017)
						{
							if(rss_min < -84.0639)
							{
								if(d_max < 261.5645)
								{
									if(d_std < 35.4552)
									{
										if(rss_std < 1.998055)
										{
											if(rss_mean < -81.1891)
												return 1;
											else
												return 0;
										}
										else
										{
											if(rss_min < -84.37015)
												return 0;
											else
												return 1;
										}
									}
									else
										return 0;
								}
								else
								{
									if(d_min < 92.1454)
									{
										if(d_max < 280.8375)
											return 0;
										else
											return 1;
									}
									else
										return 1;
								}
							}
							else
							{
								if(rss_max < -79.84175)
									return 1;
								else
								{
									if(rss_max < -77.384)
									{
										if(d_max < 263.6215)
											return 1;
										else
											return 0;
									}
									else
										return 0;
								}
							}
						}
						else
						{
							if(d_max < 246.754)
							{
								if(rss_min < -83.9734)
									return 0;
								else
									return 1;
							}
							else
								return 0;
						}
					}
				}
				else
				{
					if(rss_min < -83.15675)
					{
						if(rss_mean < -75.84005)
							return 1;
						else
						{
							if(d_std < 52.19535)
								return 0;
							else
								return 1;
						}
					}
					else
					{
						if(d_std < 70.6724)
						{
							if(d_mean < 244.821)
							{
								if(rss_std < 3.687315)
									return 0;
								else
									return 1;
							}
							else
								return 2;
						}
						else
						{
							if(d_max < 323.78)
								return 1;
							else
								return 2;
						}
					}
				}
			}
		}
	}
	else
	{
		if(rss_std < 12.2188)
			return 2;
		else
		{
			if(d_max < 231.208)
				return 0;
			else
				return 1;
		}
	}
}

int tree_8(float d_max, float d_min, float d_mean, float d_std, float rss_max, float rss_min, float rss_mean, float rss_std)
{
	if(rss_mean < -70.57365)
	{
		if(d_max < 237.091)
		{
			if(rss_max < -70.5105)
			{
				if(rss_max < -74.74)
				{
					if(d_min < 121.2515)
					{
						if(d_min < 101.618)
						{
							if(rss_max < -79.6209)
								return 1;
							else
								return 0;
						}
						else
							return 0;
					}
					else
					{
						if(rss_max < -76.28535)
						{
							if(d_max < 229.54)
							{
								if(rss_std < 1.830395)
								{
									if(d_min < 168.82)
										return 0;
									else
									{
										if(rss_std < 1.45845)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(d_min < 160.743)
									{
										if(rss_mean < -81.31145)
											return 0;
										else
										{
											if(d_max < 229.474)
												return 0;
											else
												return 1;
										}
									}
									else
										return 1;
								}
							}
							else
								return 0;
						}
						else
						{
							if(rss_mean < -82.5258)
								return 0;
							else
								return 1;
						}
					}
				}
				else
				{
					if(rss_min < -84.2805)
					{
						if(d_std < 38.1033)
						{
							if(d_min < 99.8786)
							{
								if(d_max < 218.4815)
								{
									if(rss_min < -84.5565)
									{
										if(d_mean < 137.738)
										{
											if(d_max < 209.8935)
												return 0;
											else
												return 1;
										}
										else
										{
											if(rss_std < 2.714525)
											{
												if(d_mean < 162.1515)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
									}
									else
										return 0;
								}
								else
								{
									if(rss_max < -73.27775)
									{
										if(rss_max < -74.7277)
											return 1;
										else
										{
											if(d_std < 37.40095)
												return 0;
											else
											{
												if(d_min < 94.707)
													return 0;
												else
												{
													if(d_max < 225.477)
														return 1;
													else
														return 0;
												}
											}
										}
									}
									else
									{
										if(rss_min < -84.8853)
										{
											if(d_max < 229.307)
												return 0;
											else
											{
												if(d_max < 229.897)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(d_min < 76.84725)
												return 0;
											else
											{
												if(rss_max < -71.6976)
												{
													if(rss_std < 3.181975)
													{
														if(d_mean < 164.034)
														{
															if(d_std < 36.4619)
																return 0;
															else
															{
																if(d_min < 77.68495)
																	return 1;
																else
																{
																	if(d_min < 89.8189)
																		return 0;
																	else
																		return 1;
																}
															}
														}
														else
														{
															if(d_mean < 167.4355)
															{
																if(d_std < 34.49425)
																	return 0;
																else
																	return 1;
															}
															else
															{
																if(d_min < 82.1848)
																	return 0;
																else
																	return 1;
															}
														}
													}
													else
													{
														if(rss_max < -72.01345)
														{
															if(d_std < 37.42585)
																return 1;
															else
																return 0;
														}
														else
															return 0;
													}
												}
												else
													return 1;
											}
										}
									}
								}
							}
							else
							{
								if(d_mean < 183.576)
								{
									if(rss_max < -72.1216)
									{
										if(rss_std < 2.37118)
											return 0;
										else
										{
											if(d_max < 216.815)
												return 1;
											else
											{
												if(rss_min < -84.4454)
												{
													if(d_min < 105.306)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
										}
									}
									else
									{
										if(rss_max < -71.004)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(d_mean < 193.0535)
									{
										if(rss_mean < -81.84835)
											return 0;
										else
										{
											if(d_max < 232.7695)
												return 1;
											else
												return 0;
										}
									}
									else
										return 1;
								}
							}
						}
						else
						{
							if(rss_max < -71.50645)
							{
								if(d_mean < 163.965)
								{
									if(d_std < 41.65795)
									{
										if(d_min < 110.281)
										{
											if(rss_std < 3.07435)
											{
												if(rss_max < -72.76455)
												{
													if(rss_mean < -80.26845)
														return 0;
													else
													{
														if(rss_max < -74.32505)
															return 0;
														else
														{
															if(rss_mean < -78.8079)
															{
																if(rss_max < -74.1176)
																	return 1;
																else
																{
																	if(rss_min < -84.9299)
																		return 0;
																	else
																		return 1;
																}
															}
															else
																return 0;
														}
													}
												}
												else
													return 1;
											}
											else
											{
												if(rss_max < -72.39075)
													return 0;
												else
												{
													if(rss_mean < -79.8361)
													{
														if(d_max < 223.6695)
														{
															if(d_min < 81.6254)
																return 0;
															else
																return 1;
														}
														else
															return 0;
													}
													else
														return 0;
												}
											}
										}
										else
											return 1;
									}
									else
									{
										if(rss_std < 3.14485)
										{
											if(rss_max < -74.143)
												return 0;
											else
											{
												if(d_max < 231.769)
													return 1;
												else
													return 0;
											}
										}
										else
											return 0;
									}
								}
								else
									return 0;
							}
							else
							{
								if(d_min < 74.0218)
								{
									if(d_min < 61.2078)
									{
										if(d_max < 228.02)
											return 0;
										else
											return 1;
									}
									else
									{
										if(d_max < 232.93)
											return 0;
										else
										{
											if(rss_min < -84.86405)
											{
												if(rss_mean < -79.6341)
													return 0;
												else
												{
													if(rss_min < -84.93485)
														return 0;
													else
													{
														if(d_min < 73.39295)
															return 1;
														else
															return 0;
													}
												}
											}
											else
												return 1;
										}
									}
								}
								else
								{
									if(d_std < 47.54465)
									{
										if(rss_std < 3.65877)
										{
											if(rss_max < -70.72095)
												return 1;
											else
											{
												if(d_mean < 146.742)
													return 1;
												else
												{
													if(d_max < 224.846)
														return 1;
													else
														return 0;
												}
											}
										}
										else
										{
											if(d_mean < 139.9245)
											{
												if(rss_max < -71.28215)
												{
													if(rss_max < -71.42275)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
											else
											{
												if(d_mean < 145.9985)
												{
													if(rss_mean < -78.57595)
														return 1;
													else
														return 0;
												}
												else
													return 0;
											}
										}
									}
									else
									{
										if(d_max < 234.896)
										{
											if(rss_std < 3.791635)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
								}
							}
						}
					}
					else
					{
						if(d_min < 99.12555)
						{
							if(rss_max < -71.4947)
								return 0;
							else
							{
								if(rss_max < -71.49325)
									return 1;
								else
									return 0;
							}
						}
						else
						{
							if(d_max < 224.802)
							{
								if(d_max < 198.717)
								{
									if(d_min < 118.661)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
							else
								return 1;
						}
					}
				}
			}
			else
			{
				if(d_std < 52.5063)
				{
					if(rss_min < -84.39455)
					{
						if(d_min < 69.6034)
						{
							if(rss_max < -67.27985)
							{
								if(d_std < 45.53225)
								{
									if(rss_mean < -78.97725)
									{
										if(d_min < 68.73095)
										{
											if(d_mean < 142.6665)
											{
												if(d_max < 196.4905)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
										else
										{
											if(d_min < 69.2957)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(rss_min < -84.98285)
											return 0;
										else
										{
											if(rss_max < -70.20705)
												return 0;
											else
											{
												if(d_max < 220.9325)
													return 1;
												else
												{
													if(d_max < 225.4955)
														return 0;
													else
													{
														if(rss_std < 4.67785)
														{
															if(d_mean < 142.879)
																return 1;
															else
																return 0;
														}
														else
															return 0;
													}
												}
											}
										}
									}
								}
								else
								{
									if(rss_min < -84.8864)
									{
										if(rss_max < -67.77945)
											return 0;
										else
										{
											if(d_min < 48.96415)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(rss_min < -84.8134)
										{
											if(rss_min < -84.8839)
											{
												if(d_min < 55.08535)
													return 0;
												else
													return 1;
											}
											else
											{
												if(rss_max < -68.72345)
												{
													if(d_mean < 132.053)
														return 1;
													else
													{
														if(rss_std < 3.765555)
															return 1;
														else
														{
															if(d_max < 221.0125)
																return 1;
															else
																return 0;
														}
													}
												}
												else
												{
													if(rss_max < -67.6165)
													{
														if(d_min < 54.96835)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
											}
										}
										else
										{
											if(rss_max < -67.49715)
											{
												if(d_max < 227.7745)
												{
													if(rss_std < 4.135045)
													{
														if(d_max < 219.5775)
															return 1;
														else
															return 0;
													}
													else
													{
														if(d_mean < 127.038)
														{
															if(rss_min < -84.7648)
															{
																if(d_max < 223.7015)
																	return 1;
																else
																	return 0;
															}
															else
																return 0;
														}
														else
															return 0;
													}
												}
												else
												{
													if(rss_min < -84.5799)
													{
														if(rss_min < -84.79125)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
											}
											else
											{
												if(d_mean < 131.8595)
													return 0;
												else
													return 1;
											}
										}
									}
								}
							}
							else
							{
								if(rss_max < -65.60055)
								{
									if(rss_std < 4.980615)
									{
										if(d_min < 51.13785)
										{
											if(d_max < 213.126)
												return 1;
											else
												return 0;
										}
										else
										{
											if(rss_max < -65.7895)
											{
												if(rss_mean < -81.0724)
													return 0;
												else
												{
													if(rss_min < -84.9709)
													{
														if(d_max < 219.83)
															return 1;
														else
															return 0;
													}
													else
														return 1;
												}
											}
											else
											{
												if(d_max < 217.8925)
													return 1;
												else
													return 0;
											}
										}
									}
									else
									{
										if(d_min < 52.0751)
										{
											if(rss_std < 5.05452)
											{
												if(d_max < 213.126)
													return 1;
												else
													return 0;
											}
											else
											{
												if(d_min < 48.1152)
													return 0;
												else
												{
													if(rss_min < -84.97725)
														return 1;
													else
														return 0;
												}
											}
										}
										else
										{
											if(d_std < 52.40355)
												return 1;
											else
												return 0;
										}
									}
								}
								else
								{
									if(rss_mean < -80.7217)
										return 0;
									else
									{
										if(d_max < 216.3205)
										{
											if(d_std < 51.9417)
												return 1;
											else
											{
												if(d_max < 187.468)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(d_min < 50.57155)
											{
												if(rss_max < -64.1136)
												{
													if(d_min < 39.61365)
														return 0;
													else
													{
														if(rss_max < -64.58985)
														{
															if(rss_max < -65.5797)
																return 1;
															else
																return 0;
														}
														else
														{
															if(rss_min < -84.9306)
																return 0;
															else
																return 1;
														}
													}
												}
												else
													return 1;
											}
											else
												return 1;
										}
									}
								}
							}
						}
						else
						{
							if(rss_std < 3.65377)
							{
								if(rss_max < -69.7282)
									return 1;
								else
								{
									if(rss_max < -69.6341)
										return 0;
									else
									{
										if(rss_max < -67.9995)
										{
											if(rss_mean < -81.28765)
												return 0;
											else
												return 1;
										}
										else
										{
											if(rss_max < -67.29605)
												return 0;
											else
												return 1;
										}
									}
								}
							}
							else
							{
								if(rss_mean < -80.82695)
									return 0;
								else
								{
									if(rss_max < -69.63345)
									{
										if(rss_max < -69.72675)
										{
											if(rss_std < 4.491295)
												return 1;
											else
											{
												if(d_min < 71.7967)
													return 0;
												else
													return 1;
											}
										}
										else
											return 0;
									}
									else
										return 1;
								}
							}
						}
					}
					else
					{
						if(d_max < 224.815)
						{
							if(rss_min < -83.6942)
							{
								if(d_min < 67.51315)
								{
									if(d_mean < 132.659)
									{
										if(rss_max < -62.95615)
										{
											if(rss_max < -66.8544)
												return 0;
											else
											{
												if(rss_max < -66.83835)
													return 1;
												else
												{
													if(rss_mean < -77.74425)
														return 1;
													else
													{
														if(rss_std < 4.171795)
														{
															if(d_max < 191.485)
																return 0;
															else
																return 1;
														}
														else
														{
															if(rss_max < -64.1257)
																return 0;
															else
															{
																if(d_std < 45.4307)
																	return 1;
																else
																	return 0;
															}
														}
													}
												}
											}
										}
										else
										{
											if(d_max < 166.4165)
												return 0;
											else
												return 1;
										}
									}
									else
										return 0;
								}
								else
								{
									if(rss_mean < -78.08815)
									{
										if(d_std < 22.157)
											return 1;
										else
										{
											if(rss_max < -68.78)
												return 0;
											else
											{
												if(d_max < 214.624)
													return 0;
												else
													return 1;
											}
										}
									}
									else
										return 1;
								}
							}
							else
							{
								if(d_min < 71.0243)
								{
									if(rss_min < -82.9286)
									{
										if(rss_min < -82.93025)
										{
											if(d_max < 189.6485)
											{
												if(rss_min < -83.24425)
												{
													if(d_std < 27.61385)
														return 0;
													else
													{
														if(d_mean < 121.992)
															return 1;
														else
															return 0;
													}
												}
												else
													return 0;
											}
											else
											{
												if(rss_max < -62.79845)
												{
													if(d_max < 195.0845)
													{
														if(d_max < 194.6645)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
												else
												{
													if(d_max < 213.0045)
														return 0;
													else
														return 1;
												}
											}
										}
										else
											return 1;
									}
									else
									{
										if(d_min < 66.0743)
											return 0;
										else
										{
											if(d_min < 66.8089)
												return 1;
											else
												return 0;
										}
									}
								}
								else
								{
									if(d_max < 180.13)
										return 1;
									else
										return 0;
								}
							}
						}
						else
						{
							if(rss_mean < -78.2947)
							{
								if(d_min < 71.856)
									return 0;
								else
									return 1;
							}
							else
							{
								if(rss_min < -83.25285)
									return 1;
								else
								{
									if(d_std < 36.1776)
										return 1;
									else
										return 0;
								}
							}
						}
					}
				}
				else
				{
					if(rss_min < -84.56835)
					{
						if(d_max < 221.418)
						{
							if(d_min < 43.023)
							{
								if(d_max < 220.1005)
									return 1;
								else
								{
									if(d_max < 220.932)
										return 0;
									else
										return 1;
								}
							}
							else
							{
								if(rss_max < -64.64425)
								{
									if(d_min < 51.19565)
										return 0;
									else
									{
										if(rss_min < -84.80515)
											return 1;
										else
											return 0;
									}
								}
								else
									return 1;
							}
						}
						else
						{
							if(rss_std < 5.033495)
							{
								if(rss_min < -84.91055)
								{
									if(d_max < 225.1615)
										return 1;
									else
										return 0;
								}
								else
								{
									if(d_max < 228.1445)
										return 0;
									else
									{
										if(d_max < 232.691)
										{
											if(rss_mean < -77.8531)
											{
												if(rss_max < -69.92385)
													return 0;
												else
												{
													if(d_mean < 146.589)
														return 1;
													else
													{
														if(d_min < 66.0946)
														{
															if(d_max < 228.2315)
																return 1;
															else
																return 0;
														}
														else
															return 1;
													}
												}
											}
											else
												return 0;
										}
										else
											return 1;
									}
								}
							}
							else
							{
								if(d_std < 64.2641)
								{
									if(rss_max < -64.95705)
									{
										if(d_min < 57.7016)
											return 0;
										else
										{
											if(d_max < 234.9525)
											{
												if(rss_max < -67.15995)
												{
													if(d_std < 53.24605)
													{
														if(d_mean < 130.87)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
												else
													return 1;
											}
											else
											{
												if(rss_max < -69.67925)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(d_min < 43.2946)
										{
											if(rss_min < -84.965)
												return 0;
											else
											{
												if(rss_max < -62.3581)
												{
													if(d_mean < 132.023)
													{
														if(rss_max < -64.3278)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
												else
												{
													if(d_mean < 111.5395)
														return 0;
													else
														return 1;
												}
											}
										}
										else
										{
											if(d_mean < 145.1055)
												return 1;
											else
											{
												if(d_max < 225.3115)
													return 0;
												else
													return 1;
											}
										}
									}
								}
								else
									return 0;
							}
						}
					}
					else
					{
						if(d_max < 220.932)
						{
							if(d_max < 196.709)
							{
								if(rss_min < -84.4559)
									return 1;
								else
									return 0;
							}
							else
							{
								if(rss_min < -82.1766)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(rss_mean < -76.94415)
								return 0;
							else
							{
								if(d_max < 221.409)
									return 1;
								else
									return 0;
							}
						}
					}
				}
			}
		}
		else
		{
			if(rss_min < -84.4601)
			{
				if(rss_min < -84.91355)
				{
					if(d_max < 247.2505)
					{
						if(d_mean < 154.676)
						{
							if(d_max < 242.3875)
							{
								if(rss_max < -73.9797)
									return 0;
								else
								{
									if(d_mean < 153.712)
										return 1;
									else
									{
										if(d_min < 67.0154)
											return 0;
										else
										{
											if(d_std < 40.5985)
											{
												if(d_min < 102.65135)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
									}
								}
							}
							else
							{
								if(d_max < 242.8785)
									return 0;
								else
								{
									if(d_max < 246.593)
										return 1;
									else
										return 0;
								}
							}
						}
						else
						{
							if(rss_min < -84.98615)
								return 1;
							else
							{
								if(rss_max < -73.34265)
								{
									if(rss_mean < -80.9679)
										return 0;
									else
									{
										if(rss_std < 2.53728)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(d_min < 75.4203)
									{
										if(rss_mean < -79.15995)
											return 0;
										else
										{
											if(d_max < 239.7905)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(rss_min < -84.9844)
											return 0;
										else
											return 1;
									}
								}
							}
						}
					}
					else
					{
						if(rss_mean < -82.49135)
							return 0;
						else
						{
							if(rss_max < -73.9504)
							{
								if(rss_min < -84.98165)
								{
									if(rss_min < -84.98595)
										return 0;
									else
									{
										if(d_min < 172.162)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(rss_std < 3.168455)
									{
										if(d_min < 109.1145)
											return 0;
										else
										{
											if(rss_min < -84.98125)
												return 0;
											else
											{
												if(rss_max < -77.85315)
												{
													if(d_min < 162.6015)
														return 0;
													else
														return 1;
												}
												else
												{
													if(rss_max < -74.40095)
														return 1;
													else
														return 0;
												}
											}
										}
									}
									else
										return 0;
								}
							}
							else
							{
								if(rss_min < -84.914)
								{
									if(d_min < 85.0723)
									{
										if(rss_max < -70.31655)
										{
											if(d_max < 261.327)
												return 1;
											else
											{
												if(rss_min < -84.93985)
												{
													if(d_std < 61.4798)
													{
														if(d_mean < 157.7345)
														{
															if(d_max < 264.698)
																return 0;
															else
															{
																if(rss_min < -84.9645)
																	return 1;
																else
																{
																	if(d_std < 51.6646)
																		return 1;
																	else
																		return 0;
																}
															}
														}
														else
														{
															if(rss_min < -84.9489)
															{
																if(d_std < 60.9122)
																	return 0;
																else
																{
																	if(d_max < 294.429)
																		return 1;
																	else
																		return 0;
																}
															}
															else
																return 1;
														}
													}
													else
														return 1;
												}
												else
													return 0;
											}
										}
										else
										{
											if(rss_mean < -77.51085)
											{
												if(rss_mean < -78.06195)
													return 1;
												else
												{
													if(rss_max < -69.50465)
														return 0;
													else
													{
														if(rss_max < -67.90965)
														{
															if(d_min < 57.9459)
																return 0;
															else
																return 1;
														}
														else
															return 1;
													}
												}
											}
											else
											{
												if(d_std < 55.38175)
													return 1;
												else
												{
													if(rss_max < -66.0068)
														return 0;
													else
														return 1;
												}
											}
										}
									}
									else
									{
										if(rss_mean < -78.7741)
											return 1;
										else
										{
											if(rss_max < -72.38135)
												return 0;
											else
											{
												if(d_min < 187.0165)
													return 1;
												else
													return 2;
											}
										}
									}
								}
								else
									return 0;
							}
						}
					}
				}
				else
				{
					if(rss_mean < -80.3592)
					{
						if(rss_min < -84.8487)
						{
							if(rss_std < 4.890815)
							{
								if(d_std < 26.5362)
								{
									if(rss_min < -84.87345)
									{
										if(d_min < 204.3575)
											return 1;
										else
											return 0;
									}
									else
									{
										if(d_mean < 225.125)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(d_max < 300.797)
									{
										if(rss_max < -73.9406)
										{
											if(d_max < 300.0445)
											{
												if(d_min < 97.0217)
													return 0;
												else
												{
													if(d_max < 243.7215)
													{
														if(d_max < 242.093)
															return 1;
														else
															return 0;
													}
													else
													{
														if(d_max < 296.695)
															return 1;
														else
														{
															if(d_min < 114.1135)
																return 0;
															else
																return 1;
														}
													}
												}
											}
											else
												return 0;
										}
										else
											return 1;
									}
									else
										return 1;
								}
							}
							else
								return 0;
						}
						else
						{
							if(rss_std < 3.58987)
							{
								if(rss_std < 1.367415)
								{
									if(d_std < 35.95905)
										return 0;
									else
									{
										if(d_min < 137.4655)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(rss_max < -74.001)
									{
										if(d_max < 267.3695)
										{
											if(rss_mean < -80.7813)
											{
												if(d_min < 100.657)
													return 0;
												else
												{
													if(rss_min < -84.81435)
													{
														if(rss_min < -84.8268)
														{
															if(rss_min < -84.8408)
																return 0;
															else
																return 1;
														}
														else
															return 0;
													}
													else
													{
														if(d_max < 243.9395)
														{
															if(d_mean < 196.479)
																return 0;
															else
																return 1;
														}
														else
															return 1;
													}
												}
											}
											else
											{
												if(d_max < 247.423)
												{
													if(d_min < 131.8575)
													{
														if(d_std < 34.51855)
															return 1;
														else
														{
															if(rss_mean < -80.50715)
																return 0;
															else
																return 1;
														}
													}
													else
														return 1;
												}
												else
												{
													if(d_max < 260.703)
														return 0;
													else
													{
														if(d_mean < 172.24)
															return 1;
														else
															return 0;
													}
												}
											}
										}
										else
										{
											if(d_std < 42.5868)
												return 1;
											else
											{
												if(rss_max < -76.08555)
												{
													if(d_max < 321.2465)
														return 0;
													else
														return 1;
												}
												else
												{
													if(d_min < 105.85)
													{
														if(d_max < 298.763)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
											}
										}
									}
									else
										return 1;
								}
							}
							else
							{
								if(rss_max < -69.90565)
								{
									if(rss_max < -73.37145)
										return 0;
									else
									{
										if(d_min < 77.8339)
											return 0;
										else
											return 1;
									}
								}
								else
									return 1;
							}
						}
					}
					else
					{
						if(d_mean < 156.6535)
						{
							if(rss_max < -68.137)
							{
								if(d_min < 66.11635)
								{
									if(rss_std < 4.808115)
									{
										if(rss_max < -69.473)
										{
											if(rss_min < -84.85305)
											{
												if(d_max < 254.922)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
										else
										{
											if(rss_std < 4.73827)
												return 1;
											else
											{
												if(d_max < 249.1565)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(d_max < 253.191)
										{
											if(rss_min < -84.8335)
												return 1;
											else
												return 0;
										}
										else
										{
											if(d_mean < 156.2515)
												return 0;
											else
											{
												if(d_mean < 156.356)
													return 1;
												else
													return 0;
											}
										}
									}
								}
								else
								{
									if(d_max < 247.431)
									{
										if(d_min < 73.99165)
										{
											if(d_max < 245.5375)
											{
												if(d_min < 73.62475)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
										else
											return 1;
									}
									else
										return 1;
								}
							}
							else
								return 1;
						}
						else
						{
							if(d_std < 68.415)
							{
								if(d_max < 238.0985)
								{
									if(d_max < 237.886)
										return 1;
									else
										return 0;
								}
								else
								{
									if(rss_max < -77.0181)
										return 0;
									else
									{
										if(rss_std < 4.57346)
										{
											if(rss_mean < -78.8941)
											{
												if(rss_max < -76.2006)
												{
													if(d_mean < 178.3835)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
											else
											{
												if(d_std < 47.4024)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(d_std < 64.29845)
											{
												if(rss_min < -84.8247)
													return 1;
												else
												{
													if(rss_max < -68.9392)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(rss_max < -68.76745)
												{
													if(rss_min < -84.8388)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
										}
									}
								}
							}
							else
							{
								if(rss_std < 6.14163)
								{
									if(rss_max < -67.5977)
									{
										if(rss_std < 4.52399)
										{
											if(rss_max < -73.73605)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
									else
										return 1;
								}
								else
									return 1;
							}
						}
					}
				}
			}
			else
			{
				if(rss_max < -71.22)
				{
					if(d_max < 283.5345)
					{
						if(d_std < 32.9472)
							return 0;
						else
						{
							if(rss_min < -84.01205)
							{
								if(d_max < 270.399)
								{
									if(d_mean < 175.898)
									{
										if(d_min < 96.5932)
										{
											if(d_max < 244.2165)
											{
												if(d_max < 243.57)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
										else
											return 1;
									}
									else
										return 0;
								}
								else
									return 0;
							}
							else
							{
								if(d_min < 133.231)
								{
									if(d_max < 246.753)
									{
										if(rss_min < -83.63405)
										{
											if(d_max < 243.539)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
									else
										return 0;
								}
								else
									return 1;
							}
						}
					}
					else
					{
						if(d_min < 209.424)
							return 1;
						else
							return 2;
					}
				}
				else
				{
					if(d_mean < 143.2355)
					{
						if(d_mean < 141.816)
							return 1;
						else
						{
							if(d_mean < 141.8975)
								return 0;
							else
								return 1;
						}
					}
					else
					{
						if(d_max < 272.453)
						{
							if(d_min < 79.9988)
							{
								if(rss_max < -67.6188)
									return 0;
								else
									return 1;
							}
							else
								return 1;
						}
						else
						{
							if(d_min < 130.289)
								return 1;
							else
								return 2;
						}
					}
				}
			}
		}
	}
	else
	{
		if(rss_std < 10.49775)
			return 2;
		else
		{
			if(d_std < 131.558)
			{
				if(d_max < 235.8685)
					return 0;
				else
					return 1;
			}
			else
				return 2;
		}
	}
}

int tree_9(float d_max, float d_min, float d_mean, float d_std, float rss_max, float rss_min, float rss_mean, float rss_std)
{
	if(rss_std < 5.092665)
	{
		if(rss_max < -70.5048)
		{
			if(d_max < 237.527)
			{
				if(rss_max < -74.67505)
				{
					if(rss_min < -84.8855)
						return 0;
					else
					{
						if(d_max < 228.164)
						{
							if(rss_max < -79.7646)
							{
								if(d_std < 35.40775)
								{
									if(rss_max < -80.19665)
									{
										if(rss_std < 1.55818)
											return 0;
										else
										{
											if(d_mean < 185.9035)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(d_min < 164.424)
											return 0;
										else
											return 1;
									}
								}
								else
									return 1;
							}
							else
							{
								if(rss_max < -74.74)
								{
									if(d_std < 6.61083)
									{
										if(d_min < 134.1296)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
								else
								{
									if(rss_max < -74.7391)
										return 1;
									else
										return 0;
								}
							}
						}
						else
						{
							if(d_std < 31.08165)
							{
								if(rss_std < 1.718675)
								{
									if(rss_max < -76.6921)
										return 0;
									else
										return 1;
								}
								else
								{
									if(rss_min < -84.63335)
									{
										if(rss_min < -84.88415)
											return 1;
										else
										{
											if(d_min < 148.554)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(d_max < 234.621)
											return 1;
										else
											return 0;
									}
								}
							}
							else
							{
								if(rss_min < -83.47765)
									return 0;
								else
								{
									if(d_min < 124.4505)
										return 0;
									else
										return 1;
								}
							}
						}
					}
				}
				else
				{
					if(rss_std < 3.806375)
					{
						if(d_min < 101.9425)
						{
							if(rss_min < -84.2819)
							{
								if(d_max < 218.478)
								{
									if(rss_max < -72.81875)
									{
										if(d_max < 218.3965)
										{
											if(d_max < 179.6115)
											{
												if(d_max < 177.8675)
													return 0;
												else
													return 1;
											}
											else
											{
												if(d_min < 98.6923)
												{
													if(d_std < 33.53365)
													{
														if(rss_std < 2.777555)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
												else
													return 1;
											}
										}
										else
											return 1;
									}
									else
									{
										if(rss_min < -84.5512)
										{
											if(d_mean < 136.941)
											{
												if(d_min < 79.6364)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
										else
										{
											if(d_max < 208.796)
											{
												if(d_min < 73.9663)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
									}
								}
								else
								{
									if(rss_min < -84.8859)
									{
										if(rss_min < -84.98215)
										{
											if(rss_max < -70.9675)
											{
												if(rss_min < -84.98255)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
										else
										{
											if(rss_min < -84.89905)
												return 0;
											else
											{
												if(rss_max < -71.3857)
													return 0;
												else
												{
													if(d_max < 230.7015)
														return 0;
													else
														return 1;
												}
											}
										}
									}
									else
									{
										if(rss_min < -84.8843)
										{
											if(d_max < 228.055)
												return 0;
											else
												return 1;
										}
										else
										{
											if(d_max < 232.065)
											{
												if(rss_max < -71.53595)
												{
													if(d_std < 41.31945)
													{
														if(d_min < 77.7977)
															return 0;
														else
														{
															if(rss_max < -73.0616)
															{
																if(d_min < 94.707)
																	return 0;
																else
																{
																	if(d_min < 94.81685)
																		return 1;
																	else
																		return 0;
																}
															}
															else
															{
																if(rss_std < 3.61901)
																{
																	if(d_min < 82.62965)
																		return 0;
																	else
																	{
																		if(d_max < 226.2915)
																		{
																			if(rss_min < -84.60815)
																				return 1;
																			else
																				return 0;
																		}
																		else
																			return 0;
																	}
																}
																else
																{
																	if(d_mean < 157.091)
																		return 1;
																	else
																		return 0;
																}
															}
														}
													}
													else
													{
														if(rss_std < 3.209185)
														{
															if(d_mean < 153.9)
															{
																if(d_max < 224.9155)
																	return 1;
																else
																	return 0;
															}
															else
																return 0;
														}
														else
															return 0;
													}
												}
												else
												{
													if(d_max < 226.078)
													{
														if(rss_max < -70.9823)
														{
															if(rss_std < 3.72535)
															{
																if(d_min < 95.28645)
																	return 1;
																else
																	return 0;
															}
															else
															{
																if(rss_max < -71.40945)
																	return 1;
																else
																	return 0;
															}
														}
														else
														{
															if(d_min < 79.4707)
																return 0;
															else
																return 1;
														}
													}
													else
													{
														if(d_min < 78.8909)
															return 0;
														else
															return 1;
													}
												}
											}
											else
											{
												if(rss_max < -72.51675)
													return 0;
												else
												{
													if(rss_mean < -78.74825)
														return 1;
													else
													{
														if(d_max < 233.8815)
															return 1;
														else
															return 0;
													}
												}
											}
										}
									}
								}
							}
							else
							{
								if(d_min < 99.12555)
								{
									if(d_max < 223.6645)
										return 0;
									else
									{
										if(d_max < 224.5325)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(d_min < 99.2437)
										return 1;
									else
										return 0;
								}
							}
						}
						else
						{
							if(rss_min < -84.39025)
							{
								if(rss_std < 2.46813)
								{
									if(d_mean < 193.231)
									{
										if(rss_max < -74.486)
											return 1;
										else
										{
											if(d_std < 17.25945)
												return 1;
											else
												return 0;
										}
									}
									else
										return 1;
								}
								else
								{
									if(d_min < 107.542)
									{
										if(rss_max < -74.3836)
											return 0;
										else
										{
											if(rss_std < 2.81621)
											{
												if(d_mean < 171.0895)
												{
													if(d_max < 205.364)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
											else
											{
												if(rss_min < -84.93375)
													return 0;
												else
												{
													if(rss_min < -84.7025)
														return 1;
													else
														return 0;
												}
											}
										}
									}
									else
										return 1;
								}
							}
							else
							{
								if(d_mean < 148.231)
								{
									if(rss_min < -83.75305)
										return 1;
									else
										return 0;
								}
								else
									return 0;
							}
						}
					}
					else
					{
						if(d_mean < 146.109)
						{
							if(d_max < 235.056)
							{
								if(rss_mean < -79.01815)
								{
									if(rss_min < -84.68485)
									{
										if(d_min < 76.22725)
											return 0;
										else
										{
											if(rss_max < -73.0035)
												return 0;
											else
												return 1;
										}
									}
									else
										return 0;
								}
								else
								{
									if(rss_mean < -78.7151)
									{
										if(d_std < 42.95025)
										{
											if(d_mean < 140.961)
											{
												if(d_max < 225.792)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
										else
											return 0;
									}
									else
										return 0;
								}
							}
							else
							{
								if(d_std < 47.09015)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(d_max < 235.0305)
								return 0;
							else
							{
								if(d_mean < 161.364)
									return 1;
								else
									return 0;
							}
						}
					}
				}
			}
			else
			{
				if(rss_max < -76.0856)
				{
					if(d_min < 131.7315)
					{
						if(d_max < 307.5625)
						{
							if(d_max < 246.495)
								return 0;
							else
							{
								if(d_min < 104.503)
									return 1;
								else
								{
									if(rss_min < -84.65815)
									{
										if(rss_mean < -80.09805)
										{
											if(rss_std < 1.998005)
												return 1;
											else
											{
												if(rss_mean < -80.4997)
												{
													if(d_max < 246.707)
														return 1;
													else
													{
														if(rss_min < -84.9801)
														{
															if(rss_max < -77.6551)
																return 0;
															else
																return 1;
														}
														else
															return 0;
													}
												}
												else
												{
													if(d_min < 122.7135)
														return 0;
													else
													{
														if(d_min < 130.4905)
															return 1;
														else
															return 0;
													}
												}
											}
										}
										else
											return 1;
									}
									else
									{
										if(d_min < 127.982)
											return 0;
										else
										{
											if(d_max < 247.1535)
												return 1;
											else
												return 0;
										}
									}
								}
							}
						}
						else
						{
							if(d_max < 319.7465)
								return 1;
							else
							{
								if(rss_mean < -81.4938)
									return 0;
								else
								{
									if(rss_min < -84.9827)
										return 1;
									else
										return 0;
								}
							}
						}
					}
					else
					{
						if(rss_min < -84.90165)
						{
							if(rss_mean < -82.1845)
								return 0;
							else
							{
								if(rss_max < -78.28575)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(rss_max < -78.4428)
							{
								if(rss_min < -84.87835)
									return 1;
								else
								{
									if(d_max < 286.5855)
									{
										if(d_std < 27.44425)
										{
											if(rss_mean < -81.8917)
												return 0;
											else
											{
												if(d_max < 279.6095)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(d_min < 136.7655)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(d_max < 320.914)
											return 1;
										else
											return 0;
									}
								}
							}
							else
							{
								if(rss_mean < -81.0785)
								{
									if(rss_min < -84.4879)
										return 1;
									else
									{
										if(d_max < 245.8015)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(d_std < 37.31955)
										return 0;
									else
										return 1;
								}
							}
						}
					}
				}
				else
				{
					if(d_min < 104.3045)
					{
						if(rss_max < -73.9499)
						{
							if(d_max < 261.0615)
								return 0;
							else
							{
								if(rss_std < 3.244775)
								{
									if(d_max < 271.6095)
										return 1;
									else
									{
										if(d_min < 101.272)
											return 0;
										else
										{
											if(rss_mean < -80.9811)
											{
												if(d_min < 102.6075)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
									}
								}
								else
									return 0;
							}
						}
						else
						{
							if(d_max < 274.9505)
							{
								if(rss_min < -84.41165)
								{
									if(d_std < 40.0164)
										return 1;
									else
									{
										if(rss_std < 3.782005)
										{
											if(rss_min < -84.8682)
											{
												if(d_max < 272.111)
												{
													if(rss_min < -84.87455)
													{
														if(d_std < 40.46545)
														{
															if(rss_max < -73.20375)
																return 0;
															else
																return 1;
														}
														else
														{
															if(rss_std < 3.708305)
																return 1;
															else
															{
																if(rss_min < -84.9824)
																	return 0;
																else
																	return 1;
															}
														}
													}
													else
														return 0;
												}
												else
												{
													if(rss_mean < -80.06625)
													{
														if(d_min < 87.1216)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
											}
											else
												return 1;
										}
										else
										{
											if(d_mean < 155.12)
											{
												if(rss_min < -84.91735)
												{
													if(d_max < 261.327)
														return 1;
													else
													{
														if(d_min < 75.05165)
															return 0;
														else
														{
															if(rss_min < -84.94055)
																return 1;
															else
																return 0;
														}
													}
												}
												else
												{
													if(d_mean < 151.4825)
														return 1;
													else
													{
														if(d_std < 45.763)
															return 0;
														else
															return 1;
													}
												}
											}
											else
											{
												if(d_min < 83.05305)
												{
													if(rss_min < -84.84265)
													{
														if(d_min < 64.7464)
															return 1;
														else
															return 0;
													}
													else
													{
														if(d_max < 260.3545)
															return 1;
														else
															return 0;
													}
												}
												else
												{
													if(rss_max < -73.0774)
														return 0;
													else
														return 1;
												}
											}
										}
									}
								}
								else
								{
									if(d_std < 46.661)
									{
										if(d_max < 244.2165)
										{
											if(d_mean < 145.207)
												return 1;
											else
												return 0;
										}
										else
											return 0;
									}
									else
										return 0;
								}
							}
							else
							{
								if(rss_min < -84.9856)
								{
									if(rss_min < -84.9859)
										return 1;
									else
										return 0;
								}
								else
									return 1;
							}
						}
					}
					else
					{
						if(rss_min < -84.48665)
						{
							if(d_max < 246.9765)
							{
								if(rss_min < -84.91585)
								{
									if(rss_max < -73.75245)
									{
										if(d_std < 39.01115)
										{
											if(rss_min < -84.96965)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
									else
										return 1;
								}
								else
								{
									if(rss_std < 2.13056)
									{
										if(d_max < 244.028)
											return 0;
										else
											return 1;
									}
									else
										return 1;
								}
							}
							else
							{
								if(rss_std < 3.427315)
								{
									if(rss_max < -75.84915)
									{
										if(rss_max < -75.91545)
											return 1;
										else
											return 0;
									}
									else
									{
										if(d_min < 105.4755)
										{
											if(rss_mean < -81.08155)
												return 0;
											else
											{
												if(d_min < 105.439)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(rss_std < 3.316045)
												return 1;
											else
											{
												if(rss_max < -74.09565)
													return 0;
												else
													return 1;
											}
										}
									}
								}
								else
								{
									if(rss_max < -73.6901)
										return 0;
									else
										return 1;
								}
							}
						}
						else
						{
							if(rss_std < 2.003195)
								return 0;
							else
							{
								if(d_min < 271.509)
									return 1;
								else
									return 2;
							}
						}
					}
				}
			}
		}
		else
		{
			if(rss_min < -84.38475)
			{
				if(d_max < 241.4555)
				{
					if(d_std < 48.05195)
					{
						if(d_min < 69.6034)
						{
							if(d_mean < 141.859)
							{
								if(rss_max < -68.7292)
								{
									if(rss_min < -84.8546)
									{
										if(rss_min < -84.98535)
										{
											if(d_mean < 118.27)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
									else
									{
										if(d_mean < 118.0555)
											return 0;
										else
										{
											if(d_mean < 139.0105)
												return 1;
											else
												return 0;
										}
									}
								}
								else
								{
									if(rss_min < -84.8573)
									{
										if(rss_min < -84.859)
										{
											if(d_min < 50.081)
											{
												if(d_min < 43.95965)
													return 1;
												else
													return 0;
											}
											else
											{
												if(d_mean < 108.0975)
													return 0;
												else
												{
													if(rss_std < 5.026405)
														return 1;
													else
													{
														if(d_max < 229.0205)
															return 1;
														else
															return 0;
													}
												}
											}
										}
										else
											return 0;
									}
									else
									{
										if(d_max < 228.2025)
											return 1;
										else
										{
											if(d_min < 52.16625)
												return 0;
											else
											{
												if(d_max < 229.4155)
													return 0;
												else
													return 1;
											}
										}
									}
								}
							}
							else
							{
								if(rss_std < 4.61681)
								{
									if(d_max < 218.3345)
									{
										if(rss_max < -68.85935)
											return 0;
										else
											return 1;
									}
									else
									{
										if(rss_min < -84.87425)
											return 0;
										else
										{
											if(rss_min < -84.85905)
												return 1;
											else
											{
												if(d_std < 47.26665)
													return 0;
												else
												{
													if(d_max < 227.9945)
														return 0;
													else
														return 1;
												}
											}
										}
									}
								}
								else
								{
									if(d_max < 219.2185)
										return 1;
									else
										return 0;
								}
							}
						}
						else
						{
							if(d_mean < 143.3515)
								return 1;
							else
							{
								if(rss_max < -69.7282)
									return 1;
								else
								{
									if(d_max < 230.861)
									{
										if(rss_max < -69.6341)
											return 0;
										else
										{
											if(rss_min < -84.7658)
												return 1;
											else
											{
												if(rss_min < -84.68265)
													return 0;
												else
													return 1;
											}
										}
									}
									else
										return 1;
								}
							}
						}
					}
					else
					{
						if(d_max < 232.691)
						{
							if(rss_std < 4.27548)
							{
								if(rss_min < -84.93585)
								{
									if(rss_min < -84.98195)
										return 1;
									else
										return 0;
								}
								else
									return 1;
							}
							else
							{
								if(rss_max < -67.0314)
								{
									if(rss_std < 4.71247)
									{
										if(d_min < 72.08645)
										{
											if(d_mean < 148.187)
											{
												if(d_max < 229.2075)
												{
													if(d_max < 227.392)
													{
														if(d_mean < 138.613)
														{
															if(d_min < 52.42165)
																return 0;
															else
																return 1;
														}
														else
														{
															if(rss_std < 4.515325)
																return 1;
															else
																return 0;
														}
													}
													else
														return 1;
												}
												else
													return 0;
											}
											else
											{
												if(d_std < 55.868)
													return 0;
												else
												{
													if(d_max < 231.3705)
														return 0;
													else
														return 1;
												}
											}
										}
										else
											return 1;
									}
									else
									{
										if(d_min < 71.4542)
										{
											if(rss_mean < -78.45315)
												return 0;
											else
											{
												if(rss_max < -69.71905)
												{
													if(rss_mean < -77.88645)
													{
														if(d_min < 66.34685)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
												else
												{
													if(rss_max < -68.49705)
													{
														if(rss_max < -69.24475)
														{
															if(d_min < 62.89585)
																return 0;
															else
																return 1;
														}
														else
															return 0;
													}
													else
													{
														if(d_mean < 135.646)
														{
															if(d_max < 229.012)
															{
																if(d_std < 53.57)
																{
																	if(d_min < 53.33605)
																	{
																		if(d_max < 215.7535)
																			return 1;
																		else
																			return 0;
																	}
																	else
																		return 1;
																}
																else
																	return 0;
															}
															else
																return 0;
														}
														else
														{
															if(d_mean < 137.258)
															{
																if(d_min < 56.43545)
																	return 0;
																else
																	return 1;
															}
															else
																return 0;
														}
													}
												}
											}
										}
										else
											return 1;
									}
								}
								else
								{
									if(rss_max < -66.90025)
									{
										if(d_min < 58.471)
											return 0;
										else
											return 1;
									}
									else
									{
										if(d_min < 50.4383)
										{
											if(d_max < 219.3475)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
								}
							}
						}
						else
						{
							if(rss_min < -84.91705)
							{
								if(rss_mean < -79.29575)
									return 0;
								else
								{
									if(rss_min < -84.97835)
										return 1;
									else
										return 0;
								}
							}
							else
							{
								if(rss_mean < -79.74555)
								{
									if(rss_max < -68.62825)
										return 0;
									else
										return 1;
								}
								else
								{
									if(d_max < 241.027)
									{
										if(d_mean < 158.8785)
											return 1;
										else
										{
											if(rss_mean < -79.52825)
											{
												if(d_min < 67.517)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
									}
									else
										return 0;
								}
							}
						}
					}
				}
				else
				{
					if(rss_mean < -72.4047)
					{
						if(d_std < 78.4411)
						{
							if(rss_min < -84.81385)
							{
								if(d_min < 72.4328)
								{
									if(rss_max < -69.1349)
									{
										if(d_std < 57.9029)
										{
											if(d_min < 72.2544)
											{
												if(d_min < 66.1233)
												{
													if(rss_mean < -78.21305)
													{
														if(d_min < 64.5456)
														{
															if(rss_max < -70.31375)
																return 0;
															else
																return 1;
														}
														else
															return 0;
													}
													else
													{
														if(d_max < 255.5245)
															return 1;
														else
															return 0;
													}
												}
												else
													return 1;
											}
											else
												return 0;
										}
										else
										{
											if(rss_std < 4.536985)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(d_max < 263.872)
										{
											if(d_mean < 161.0035)
											{
												if(rss_max < -68.8641)
												{
													if(rss_min < -84.83395)
														return 1;
													else
														return 0;
												}
												else
												{
													if(rss_mean < -76.8717)
														return 1;
													else
													{
														if(d_min < 53.1165)
															return 0;
														else
															return 1;
													}
												}
											}
											else
											{
												if(rss_min < -84.9055)
												{
													if(d_min < 67.61335)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
										}
										else
											return 1;
									}
								}
								else
									return 1;
							}
							else
								return 1;
						}
						else
							return 0;
					}
					else
						return 2;
				}
			}
			else
			{
				if(rss_max < -63.7156)
				{
					if(d_max < 223.6005)
					{
						if(d_min < 67.51315)
						{
							if(rss_max < -68.2462)
								return 0;
							else
							{
								if(rss_min < -83.2691)
								{
									if(d_min < 54.646)
									{
										if(rss_max < -64.1257)
											return 0;
										else
										{
											if(d_max < 205.4605)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(rss_min < -84.21875)
											return 0;
										else
										{
											if(d_mean < 136.385)
												return 1;
											else
												return 0;
										}
									}
								}
								else
								{
									if(d_max < 158.358)
									{
										if(d_min < 63.8306)
											return 0;
										else
										{
											if(d_min < 66.58725)
												return 1;
											else
												return 0;
										}
									}
									else
										return 0;
								}
							}
						}
						else
						{
							if(rss_min < -83.47885)
							{
								if(d_mean < 141.7415)
								{
									if(rss_max < -70.12665)
									{
										if(d_min < 76.17225)
											return 0;
										else
											return 1;
									}
									else
									{
										if(rss_std < 3.049785)
											return 0;
										else
											return 1;
									}
								}
								else
									return 0;
							}
							else
							{
								if(rss_min < -83.31605)
								{
									if(d_mean < 132.8835)
										return 1;
									else
										return 0;
								}
								else
									return 0;
							}
						}
					}
					else
					{
						if(d_mean < 144.764)
						{
							if(rss_min < -84.3136)
							{
								if(d_max < 245.2075)
									return 0;
								else
									return 1;
							}
							else
							{
								if(rss_min < -83.1941)
								{
									if(rss_max < -70.4814)
									{
										if(d_min < 82.2644)
											return 0;
										else
											return 1;
									}
									else
										return 1;
								}
								else
								{
									if(d_min < 83.28665)
										return 0;
									else
										return 1;
								}
							}
						}
						else
						{
							if(d_min < 77.5523)
								return 0;
							else
							{
								if(d_min < 147.3747)
									return 1;
								else
									return 2;
							}
						}
					}
				}
				else
				{
					if(rss_mean < -72.5574)
					{
						if(d_max < 196.207)
							return 0;
						else
							return 1;
					}
					else
						return 2;
				}
			}
		}
	}
	else
	{
		if(rss_mean < -70.65185)
		{
			if(rss_min < -84.4652)
			{
				if(rss_mean < -79.2695)
				{
					if(rss_max < -67.69975)
						return 0;
					else
					{
						if(rss_std < 5.59017)
						{
							if(rss_max < -65.63885)
							{
								if(d_max < 234.9485)
								{
									if(d_max < 216.1945)
										return 1;
									else
										return 0;
								}
								else
									return 1;
							}
							else
							{
								if(d_min < 38.03855)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(rss_max < -62.26665)
								return 0;
							else
							{
								if(d_max < 265.7955)
									return 0;
								else
									return 1;
							}
						}
					}
				}
				else
				{
					if(d_max < 234.899)
					{
						if(d_max < 218.1355)
						{
							if(rss_max < -68.2592)
							{
								if(d_min < 67.3319)
									return 0;
								else
								{
									if(d_mean < 142.4505)
										return 1;
									else
										return 0;
								}
							}
							else
							{
								if(rss_min < -84.54415)
								{
									if(rss_min < -84.65095)
										return 1;
									else
									{
										if(rss_min < -84.63695)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(d_max < 204.984)
										return 1;
									else
										return 0;
								}
							}
						}
						else
						{
							if(d_mean < 140.2095)
							{
								if(d_std < 62.3818)
								{
									if(d_min < 40.7221)
									{
										if(rss_mean < -74.43125)
										{
											if(d_mean < 119.7385)
												return 1;
											else
											{
												if(d_mean < 125.573)
												{
													if(d_std < 50.6061)
														return 1;
													else
														return 0;
												}
												else
												{
													if(d_max < 226.8)
													{
														if(rss_mean < -77.4127)
															return 0;
														else
														{
															if(rss_min < -84.63645)
															{
																if(rss_max < -63.3835)
																	return 0;
																else
																	return 1;
															}
															else
															{
																if(d_min < 39.5302)
																	return 0;
																else
																	return 1;
															}
														}
													}
													else
														return 0;
												}
											}
										}
										else
											return 0;
									}
									else
									{
										if(rss_max < -65.5857)
										{
											if(rss_min < -84.87305)
												return 0;
											else
											{
												if(d_min < 62.4877)
												{
													if(d_std < 48.2763)
														return 1;
													else
													{
														if(rss_std < 5.09558)
															return 1;
														else
														{
															if(rss_max < -66.3429)
																return 0;
															else
															{
																if(d_mean < 125.8195)
																	return 1;
																else
																	return 0;
															}
														}
													}
												}
												else
												{
													if(rss_mean < -77.96475)
														return 1;
													else
													{
														if(d_mean < 131.088)
															return 1;
														else
															return 0;
													}
												}
											}
										}
										else
										{
											if(rss_std < 6.583865)
											{
												if(d_min < 45.14865)
												{
													if(d_max < 228.3995)
													{
														if(d_min < 44.19235)
														{
															if(d_max < 219.651)
																return 0;
															else
																return 1;
														}
														else
															return 0;
													}
													else
														return 0;
												}
												else
													return 1;
											}
											else
											{
												if(rss_max < -63.60165)
													return 0;
												else
													return 1;
											}
										}
									}
								}
								else
									return 0;
							}
							else
							{
								if(rss_min < -84.8752)
									return 0;
								else
								{
									if(rss_min < -84.8656)
										return 1;
									else
									{
										if(d_std < 48.22415)
										{
											if(d_mean < 148.501)
												return 1;
											else
												return 0;
										}
										else
											return 0;
									}
								}
							}
						}
					}
					else
					{
						if(rss_std < 10.76035)
						{
							if(rss_max < -67.10945)
							{
								if(d_min < 55.8855)
								{
									if(d_max < 295.6495)
										return 0;
									else
										return 1;
								}
								else
								{
									if(rss_max < -69.91775)
										return 0;
									else
										return 1;
								}
							}
							else
							{
								if(d_max < 237.1845)
								{
									if(rss_std < 8.018875)
										return 1;
									else
										return 0;
								}
								else
									return 1;
							}
						}
						else
						{
							if(d_min < 25.2566)
								return 1;
							else
								return 0;
						}
					}
				}
			}
			else
			{
				if(d_max < 232.275)
				{
					if(rss_max < -62.8826)
					{
						if(d_std < 105.9498)
						{
							if(d_max < 225.0775)
								return 0;
							else
							{
								if(d_mean < 134.5635)
									return 1;
								else
									return 0;
							}
						}
						else
							return 1;
					}
					else
					{
						if(d_std < 49.88995)
						{
							if(d_min < 25.39995)
								return 0;
							else
							{
								if(d_max < 189.1655)
								{
									if(rss_max < -57.4977)
									{
										if(rss_std < 5.322915)
										{
											if(d_min < 38.16425)
												return 1;
											else
												return 0;
										}
										else
											return 0;
									}
									else
										return 1;
								}
								else
								{
									if(rss_min < -83.81825)
										return 1;
									else
									{
										if(d_max < 189.69)
											return 1;
										else
										{
											if(d_max < 213.0045)
												return 0;
											else
												return 1;
										}
									}
								}
							}
						}
						else
						{
							if(rss_mean < -76.4808)
							{
								if(rss_min < -83.83285)
								{
									if(d_std < 56.3826)
										return 1;
									else
									{
										if(rss_std < 6.379795)
											return 1;
										else
											return 0;
									}
								}
								else
									return 0;
							}
							else
								return 0;
						}
					}
				}
				else
				{
					if(rss_mean < -78.71455)
						return 0;
					else
					{
						if(d_min < 112.88685)
							return 1;
						else
							return 2;
					}
				}
			}
		}
		else
		{
			if(d_mean < 108.2385)
			{
				if(d_std < 110.584)
					return 0;
				else
					return 1;
			}
			else
			{
				if(d_std < 149.213)
					return 2;
				else
				{
					if(d_max < 271.8445)
						return 1;
					else
						return 2;
				}
			}
		}
	}
}

int tree_10(float d_max, float d_min, float d_mean, float d_std, float rss_max, float rss_min, float rss_mean, float rss_std)
{
	if(rss_mean < -70.57365)
	{
		if(d_max < 237.091)
		{
			if(d_mean < 150.2615)
			{
				if(rss_max < -70.74505)
				{
					if(d_max < 234.1155)
					{
						if(rss_max < -74.4895)
						{
							if(rss_max < -79.5064)
								return 1;
							else
								return 0;
						}
						else
						{
							if(d_min < 108.9005)
							{
								if(rss_min < -84.2796)
								{
									if(rss_min < -84.8859)
									{
										if(rss_mean < -79.71865)
											return 1;
										else
										{
											if(rss_std < 3.837075)
											{
												if(rss_min < -84.9836)
													return 1;
												else
												{
													if(d_min < 101.45945)
													{
														if(d_max < 232.9215)
															return 0;
														else
														{
															if(d_min < 74.80815)
																return 1;
															else
																return 0;
														}
													}
													else
														return 1;
												}
											}
											else
												return 0;
										}
									}
									else
									{
										if(rss_std < 3.850345)
										{
											if(d_min < 73.32175)
												return 0;
											else
											{
												if(rss_max < -71.55935)
												{
													if(d_min < 77.96945)
													{
														if(rss_max < -72.99705)
															return 1;
														else
														{
															if(d_min < 77.7313)
																return 0;
															else
																return 1;
														}
													}
													else
													{
														if(d_mean < 149.868)
														{
															if(d_min < 105.1805)
																return 0;
															else
															{
																if(d_min < 106.961)
																	return 1;
																else
																	return 0;
															}
														}
														else
														{
															if(d_max < 227.9245)
															{
																if(rss_std < 3.196665)
																	return 1;
																else
																	return 0;
															}
															else
															{
																if(d_max < 230.147)
																	return 1;
																else
																	return 0;
															}
														}
													}
												}
												else
													return 1;
											}
										}
										else
										{
											if(d_std < 43.8829)
											{
												if(d_min < 74.98915)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
									}
								}
								else
								{
									if(rss_min < -83.9002)
									{
										if(d_max < 223.2415)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
							}
							else
							{
								if(d_min < 112.4005)
								{
									if(d_max < 230.0315)
										return 0;
									else
										return 1;
								}
								else
								{
									if(rss_max < -72.62445)
										return 1;
									else
										return 0;
								}
							}
						}
					}
					else
					{
						if(d_min < 63.2333)
							return 1;
						else
						{
							if(rss_mean < -78.9682)
							{
								if(d_min < 76.79495)
								{
									if(d_max < 235.0305)
										return 0;
									else
										return 1;
								}
								else
								{
									if(rss_min < -84.9327)
										return 0;
									else
										return 1;
								}
							}
							else
							{
								if(d_mean < 146.804)
									return 0;
								else
									return 1;
							}
						}
					}
				}
				else
				{
					if(rss_min < -84.5283)
					{
						if(d_max < 218.2475)
						{
							if(rss_min < -84.983)
								return 0;
							else
							{
								if(rss_min < -84.7633)
								{
									if(rss_max < -70.6838)
										return 0;
									else
									{
										if(rss_max < -68.2626)
										{
											if(d_mean < 123.5545)
											{
												if(d_min < 59.7967)
													return 0;
												else
												{
													if(d_min < 68.32575)
														return 1;
													else
														return 0;
												}
											}
											else
												return 1;
										}
										else
											return 1;
									}
								}
								else
								{
									if(d_std < 48.39235)
									{
										if(rss_mean < -80.02185)
											return 0;
										else
											return 1;
									}
									else
									{
										if(rss_max < -64.5594)
										{
											if(d_std < 50.10415)
											{
												if(d_min < 57.28105)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
										else
											return 1;
									}
								}
							}
						}
						else
						{
							if(d_min < 72.43755)
							{
								if(d_std < 52.4541)
								{
									if(d_max < 230.3705)
									{
										if(d_mean < 140.679)
										{
											if(rss_max < -65.5925)
											{
												if(rss_min < -84.88495)
												{
													if(d_min < 67.7042)
													{
														if(d_min < 64.41195)
															return 0;
														else
														{
															if(d_max < 222.354)
																return 0;
															else
																return 1;
														}
													}
													else
														return 1;
												}
												else
												{
													if(d_min < 53.36845)
														return 0;
													else
													{
														if(rss_max < -68.1168)
														{
															if(d_max < 221.0295)
																return 1;
															else
															{
																if(d_min < 58.8792)
																	return 0;
																else
																{
																	if(rss_max < -70.32325)
																		return 0;
																	else
																	{
																		if(d_min < 62.4877)
																		{
																			if(d_mean < 126.6645)
																				return 1;
																			else
																				return 0;
																		}
																		else
																		{
																			if(d_mean < 137.533)
																				return 1;
																			else
																			{
																				if(d_std < 50.3914)
																					return 0;
																				else
																					return 1;
																			}
																		}
																	}
																}
															}
														}
														else
															return 1;
													}
												}
											}
											else
											{
												if(d_std < 50.8877)
													return 1;
												else
												{
													if(rss_min < -84.6141)
													{
														if(d_min < 46.02235)
														{
															if(d_max < 223.82)
																return 0;
															else
																return 1;
														}
														else
															return 1;
													}
													else
														return 0;
												}
											}
										}
										else
										{
											if(rss_max < -67.27405)
											{
												if(rss_mean < -78.6585)
													return 0;
												else
												{
													if(d_max < 227.464)
													{
														if(d_std < 52.30355)
															return 0;
														else
														{
															if(d_max < 222.0045)
																return 1;
															else
																return 0;
														}
													}
													else
													{
														if(d_max < 229.1315)
															return 1;
														else
															return 0;
													}
												}
											}
											else
											{
												if(d_max < 229.216)
													return 1;
												else
													return 0;
											}
										}
									}
									else
									{
										if(d_mean < 139.2105)
										{
											if(d_mean < 132.933)
											{
												if(rss_min < -84.9696)
												{
													if(d_mean < 126.8325)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
											else
											{
												if(rss_std < 4.89474)
												{
													if(rss_mean < -77.49075)
														return 1;
													else
														return 0;
												}
												else
												{
													if(d_min < 60.91745)
													{
														if(d_std < 47.20045)
															return 0;
														else
														{
															if(d_max < 235.4425)
																return 0;
															else
																return 1;
														}
													}
													else
														return 0;
												}
											}
										}
										else
										{
											if(d_max < 234.982)
												return 0;
											else
											{
												if(rss_min < -84.94415)
													return 0;
												else
													return 1;
											}
										}
									}
								}
								else
								{
									if(d_max < 234.899)
									{
										if(d_max < 228.543)
										{
											if(d_min < 18.203)
												return 1;
											else
											{
												if(d_mean < 126.241)
													return 0;
												else
												{
													if(rss_max < -63.02145)
													{
														if(d_mean < 137.3615)
														{
															if(d_min < 42.63095)
																return 0;
															else
															{
																if(rss_min < -84.94445)
																	return 1;
																else
																{
																	if(rss_std < 4.883155)
																		return 1;
																	else
																	{
																		if(d_max < 226.8)
																		{
																			if(d_max < 221.99)
																				return 1;
																			else
																				return 0;
																		}
																		else
																			return 1;
																	}
																}
															}
														}
														else
														{
															if(d_min < 62.30655)
															{
																if(rss_max < -69.269)
																	return 1;
																else
																	return 0;
															}
															else
															{
																if(rss_min < -84.80765)
																	return 1;
																else
																	return 0;
															}
														}
													}
													else
													{
														if(rss_std < 7.360485)
															return 1;
														else
															return 0;
													}
												}
											}
										}
										else
										{
											if(rss_std < 4.59286)
											{
												if(d_mean < 141.402)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
									}
									else
									{
										if(d_min < 33.0809)
											return 0;
										else
											return 1;
									}
								}
							}
							else
							{
								if(rss_std < 3.69906)
								{
									if(rss_min < -84.9364)
									{
										if(rss_max < -69.9213)
										{
											if(d_max < 233.23)
												return 1;
											else
												return 0;
										}
										else
											return 0;
									}
									else
									{
										if(d_mean < 146.955)
											return 1;
										else
										{
											if(rss_min < -84.73495)
											{
												if(rss_min < -84.8316)
												{
													if(rss_max < -70.29275)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
											else
											{
												if(rss_mean < -79.5075)
													return 1;
												else
												{
													if(d_min < 88.68435)
														return 0;
													else
														return 1;
												}
											}
										}
									}
								}
								else
								{
									if(rss_max < -70.5575)
										return 0;
									else
										return 1;
								}
							}
						}
					}
					else
					{
						if(d_min < 73.12285)
						{
							if(d_mean < 134.1165)
							{
								if(d_max < 189.228)
								{
									if(rss_mean < -78.0237)
									{
										if(rss_std < 4.30183)
										{
											if(d_max < 178.971)
												return 1;
											else
												return 0;
										}
										else
											return 0;
									}
									else
									{
										if(d_min < 66.18845)
										{
											if(d_mean < 119.4375)
												return 0;
											else
											{
												if(rss_max < -62.91505)
													return 0;
												else
												{
													if(rss_std < 6.339565)
													{
														if(d_min < 36.64465)
														{
															if(d_std < 48.6645)
																return 0;
															else
																return 1;
														}
														else
															return 1;
													}
													else
														return 0;
												}
											}
										}
										else
										{
											if(rss_max < -68.0186)
												return 0;
											else
												return 1;
										}
									}
								}
								else
								{
									if(rss_min < -83.7324)
									{
										if(d_min < 44.13045)
										{
											if(rss_std < 6.503495)
											{
												if(rss_max < -62.95615)
												{
													if(d_mean < 119.884)
													{
														if(d_mean < 119.777)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
												else
													return 1;
											}
											else
												return 0;
										}
										else
										{
											if(rss_max < -66.85325)
											{
												if(d_min < 48.91045)
												{
													if(d_max < 209.682)
														return 1;
													else
														return 0;
												}
												else
													return 0;
											}
											else
											{
												if(d_min < 46.95485)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(d_max < 189.6485)
											return 1;
										else
										{
											if(d_std < 38.0278)
											{
												if(d_std < 37.90235)
													return 0;
												else
												{
													if(d_min < 64.0696)
														return 0;
													else
													{
														if(d_max < 194.852)
															return 1;
														else
															return 0;
													}
												}
											}
											else
											{
												if(rss_mean < -77.28525)
												{
													if(rss_max < -63.51275)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
										}
									}
								}
							}
							else
							{
								if(d_max < 235.98)
								{
									if(rss_std < 4.00988)
									{
										if(d_min < 71.49685)
											return 0;
										else
										{
											if(d_std < 42.9102)
												return 0;
											else
												return 1;
										}
									}
									else
										return 0;
								}
								else
								{
									if(d_max < 236.16)
										return 1;
									else
										return 0;
								}
							}
						}
						else
						{
							if(d_max < 189.54)
							{
								if(rss_min < -83.9027)
									return 1;
								else
									return 0;
							}
							else
							{
								if(rss_min < -83.5856)
								{
									if(rss_mean < -78.8941)
									{
										if(d_min < 96.36805)
											return 0;
										else
											return 1;
									}
									else
										return 1;
								}
								else
								{
									if(d_max < 214.4735)
										return 0;
									else
										return 1;
								}
							}
						}
					}
				}
			}
			else
			{
				if(rss_max < -72.82845)
				{
					if(rss_max < -75.96845)
					{
						if(rss_min < -84.7772)
							return 0;
						else
						{
							if(rss_min < -84.77695)
								return 1;
							else
							{
								if(d_max < 229.4915)
								{
									if(d_min < 169.3675)
									{
										if(d_std < 42.10845)
										{
											if(d_min < 101.7375)
											{
												if(rss_max < -79.6209)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
										else
										{
											if(d_max < 220.287)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(d_max < 214.0915)
										{
											if(d_max < 213.668)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
								}
								else
								{
									if(d_max < 229.671)
										return 1;
									else
										return 0;
								}
							}
						}
					}
					else
					{
						if(d_std < 31.25595)
						{
							if(rss_std < 2.597095)
							{
								if(d_max < 226.0665)
								{
									if(d_mean < 150.397)
									{
										if(d_min < 108.099)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
								else
								{
									if(d_min < 118.044)
										return 0;
									else
									{
										if(rss_std < 1.620285)
											return 0;
										else
											return 1;
									}
								}
							}
							else
							{
								if(d_min < 102.0417)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(d_min < 115.9285)
							{
								if(d_std < 39.2593)
								{
									if(d_min < 94.80835)
									{
										if(rss_min < -84.6935)
										{
											if(rss_min < -84.80695)
											{
												if(d_min < 84.9352)
												{
													if(d_max < 220.746)
														return 1;
													else
														return 0;
												}
												else
													return 0;
											}
											else
											{
												if(d_max < 223.356)
												{
													if(d_min < 88.43135)
														return 0;
													else
													{
														if(rss_max < -74.76295)
															return 0;
														else
															return 1;
													}
												}
												else
													return 0;
											}
										}
										else
											return 0;
									}
									else
									{
										if(d_std < 31.9074)
										{
											if(rss_min < -84.6633)
											{
												if(rss_max < -74.80305)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
										else
											return 0;
									}
								}
								else
									return 0;
							}
							else
							{
								if(d_mean < 169.3025)
									return 1;
								else
									return 0;
							}
						}
					}
				}
				else
				{
					if(d_min < 83.6641)
					{
						if(rss_max < -71.1702)
						{
							if(rss_max < -72.7689)
							{
								if(rss_max < -72.7732)
									return 0;
								else
									return 1;
							}
							else
							{
								if(rss_min < -84.9621)
								{
									if(rss_min < -84.9634)
										return 0;
									else
									{
										if(d_max < 221.0585)
											return 1;
										else
											return 0;
									}
								}
								else
									return 0;
							}
						}
						else
						{
							if(rss_std < 4.287315)
							{
								if(d_min < 72.67955)
								{
									if(rss_mean < -80.80815)
										return 0;
									else
									{
										if(rss_min < -84.79145)
										{
											if(rss_min < -84.90435)
											{
												if(d_max < 217.7905)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
										else
											return 0;
									}
								}
								else
								{
									if(d_std < 45.2023)
									{
										if(rss_min < -84.7703)
										{
											if(d_mean < 182.5485)
											{
												if(rss_mean < -79.4106)
													return 1;
												else
												{
													if(rss_std < 3.66881)
														return 0;
													else
														return 1;
												}
											}
											else
												return 0;
										}
										else
										{
											if(d_max < 232.3065)
											{
												if(d_min < 80.84575)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
									}
									else
										return 1;
								}
							}
							else
							{
								if(d_max < 235.018)
								{
									if(d_mean < 156.8305)
									{
										if(rss_mean < -79.69785)
										{
											if(d_min < 63.0006)
												return 1;
											else
											{
												if(d_mean < 151.7995)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(rss_max < -69.43275)
												return 0;
											else
											{
												if(rss_std < 4.998015)
												{
													if(d_min < 64.3758)
													{
														if(d_std < 46.6274)
															return 1;
														else
														{
															if(rss_max < -66.79145)
																return 0;
															else
																return 1;
														}
													}
													else
														return 1;
												}
												else
												{
													if(rss_mean < -79.5636)
													{
														if(d_min < 51.4063)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
											}
										}
									}
									else
									{
										if(rss_std < 4.459925)
										{
											if(d_std < 52.5435)
												return 0;
											else
											{
												if(rss_max < -69.2648)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(rss_std < 4.63022)
											{
												if(d_std < 51.79735)
													return 0;
												else
												{
													if(d_max < 217.5535)
														return 1;
													else
														return 0;
												}
											}
											else
												return 0;
										}
									}
								}
								else
								{
									if(rss_max < -63.52315)
									{
										if(d_std < 52.408)
										{
											if(d_max < 235.743)
												return 1;
											else
												return 0;
										}
										else
										{
											if(d_mean < 174.643)
												return 1;
											else
												return 0;
										}
									}
									else
										return 0;
								}
							}
						}
					}
					else
					{
						if(rss_std < 2.45063)
							return 0;
						else
						{
							if(rss_max < -71.15495)
							{
								if(rss_std < 3.67445)
								{
									if(rss_min < -84.7031)
									{
										if(d_std < 30.1947)
											return 1;
										else
										{
											if(d_max < 225.619)
												return 1;
											else
											{
												if(rss_min < -84.84505)
												{
													if(d_mean < 172.4955)
														return 0;
													else
													{
														if(d_mean < 185.548)
															return 1;
														else
															return 0;
													}
												}
												else
												{
													if(rss_max < -72.30185)
														return 0;
													else
														return 1;
												}
											}
										}
									}
									else
									{
										if(d_min < 109.7835)
											return 0;
										else
										{
											if(d_max < 222.855)
												return 0;
											else
												return 1;
										}
									}
								}
								else
									return 0;
							}
							else
							{
								if(rss_max < -68.16395)
								{
									if(d_min < 86.15895)
									{
										if(d_min < 85.19735)
											return 1;
										else
											return 0;
									}
									else
										return 1;
								}
								else
									return 0;
							}
						}
					}
				}
			}
		}
		else
		{
			if(rss_max < -73.9499)
			{
				if(rss_max < -77.79035)
				{
					if(d_max < 291.901)
					{
						if(d_mean < 204.096)
						{
							if(d_min < 162.466)
							{
								if(rss_min < -83.80485)
								{
									if(d_max < 260.817)
										return 0;
									else
									{
										if(d_max < 271.8955)
										{
											if(rss_min < -84.85815)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
								}
								else
								{
									if(rss_std < 1.351565)
									{
										if(rss_max < -80.06725)
											return 1;
										else
											return 0;
									}
									else
										return 1;
								}
							}
							else
							{
								if(rss_min < -84.53315)
								{
									if(d_mean < 202.6265)
									{
										if(d_min < 173.4945)
											return 1;
										else
											return 0;
									}
									else
									{
										if(rss_min < -84.8207)
											return 0;
										else
											return 1;
									}
								}
								else
									return 0;
							}
						}
						else
							return 0;
					}
					else
					{
						if(rss_min < -84.92295)
						{
							if(rss_max < -78.26935)
								return 0;
							else
							{
								if(d_mean < 197.956)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(rss_std < 1.909895)
								return 1;
							else
								return 0;
						}
					}
				}
				else
				{
					if(d_min < 121.312)
					{
						if(d_min < 105.6755)
						{
							if(d_max < 261.0615)
								return 0;
							else
							{
								if(rss_std < 3.21865)
								{
									if(d_max < 271.6095)
										return 1;
									else
									{
										if(rss_max < -74.2655)
										{
											if(d_min < 101.734)
												return 0;
											else
											{
												if(d_mean < 180.411)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(rss_max < -74.09785)
												return 1;
											else
												return 0;
										}
									}
								}
								else
									return 0;
							}
						}
						else
						{
							if(rss_min < -84.5326)
							{
								if(rss_max < -76.0857)
								{
									if(rss_mean < -80.3239)
									{
										if(rss_mean < -80.8525)
											return 0;
										else
										{
											if(d_max < 307.326)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(d_min < 112.4045)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(rss_min < -84.96615)
									{
										if(rss_min < -84.9798)
										{
											if(d_min < 106.849)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
									else
										return 1;
								}
							}
							else
							{
								if(rss_std < 2.221)
									return 0;
								else
								{
									if(d_std < 36.7268)
										return 1;
									else
										return 0;
								}
							}
						}
					}
					else
					{
						if(d_min < 131.2055)
						{
							if(rss_max < -77.46035)
							{
								if(d_max < 247.1535)
								{
									if(d_std < 40.50565)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
							else
							{
								if(d_max < 245.378)
								{
									if(d_min < 126.1685)
										return 1;
									else
										return 0;
								}
								else
								{
									if(rss_mean < -79.36855)
									{
										if(rss_max < -77.2264)
										{
											if(d_mean < 181.067)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
									else
										return 0;
								}
							}
						}
						else
						{
							if(rss_max < -74.14935)
							{
								if(d_std < 22.4755)
								{
									if(d_mean < 182.1075)
										return 0;
									else
										return 1;
								}
								else
									return 1;
							}
							else
								return 0;
						}
					}
				}
			}
			else
			{
				if(rss_min < -84.4601)
				{
					if(d_max < 241.4465)
					{
						if(d_mean < 154.7245)
						{
							if(d_mean < 143.6205)
								return 1;
							else
							{
								if(d_min < 74.0471)
								{
									if(rss_max < -67.87935)
										return 0;
									else
										return 1;
								}
								else
									return 1;
							}
						}
						else
						{
							if(rss_std < 3.939715)
							{
								if(d_max < 240.7375)
									return 1;
								else
									return 0;
							}
							else
							{
								if(rss_min < -84.9159)
								{
									if(rss_mean < -79.0923)
										return 0;
									else
										return 1;
								}
								else
								{
									if(rss_std < 4.961255)
									{
										if(rss_std < 4.950935)
											return 1;
										else
										{
											if(d_max < 239.3195)
												return 0;
											else
												return 1;
										}
									}
									else
										return 0;
								}
							}
						}
					}
					else
					{
						if(d_min < 78.32495)
						{
							if(d_min < 49.7423)
								return 1;
							else
							{
								if(d_std < 76.61265)
								{
									if(rss_max < -70.1979)
									{
										if(rss_std < 4.52142)
										{
											if(rss_min < -84.8527)
											{
												if(d_max < 274.9505)
												{
													if(d_min < 77.5608)
													{
														if(d_max < 261.327)
														{
															if(rss_std < 2.793065)
																return 0;
															else
															{
																if(rss_min < -84.8994)
																	return 1;
																else
																{
																	if(rss_min < -84.87795)
																		return 0;
																	else
																		return 1;
																}
															}
														}
														else
														{
															if(rss_min < -84.90655)
															{
																if(d_std < 42.93045)
																	return 1;
																else
																	return 0;
															}
															else
																return 1;
														}
													}
													else
													{
														if(rss_min < -84.917)
															return 0;
														else
															return 1;
													}
												}
												else
												{
													if(rss_std < 4.419665)
														return 1;
													else
													{
														if(d_max < 298.5425)
															return 1;
														else
															return 0;
													}
												}
											}
											else
												return 1;
										}
										else
										{
											if(d_min < 62.8682)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(rss_std < 4.798175)
										{
											if(d_min < 65.4565)
											{
												if(rss_max < -69.46155)
												{
													if(rss_min < -84.9573)
														return 1;
													else
													{
														if(rss_min < -84.79425)
															return 0;
														else
															return 1;
													}
												}
												else
												{
													if(d_min < 65.4419)
													{
														if(rss_max < -67.9559)
														{
															if(rss_max < -67.99845)
															{
																if(d_min < 64.5677)
																	return 1;
																else
																{
																	if(d_min < 65.1214)
																		return 0;
																	else
																		return 1;
																}
															}
															else
																return 0;
														}
														else
															return 1;
													}
													else
														return 0;
												}
											}
											else
												return 1;
										}
										else
										{
											if(rss_max < -67.65715)
											{
												if(d_std < 65.5637)
												{
													if(d_min < 52.72185)
														return 0;
													else
													{
														if(d_mean < 160.693)
														{
															if(rss_max < -68.86475)
															{
																if(d_min < 65.136)
																{
																	if(d_mean < 130.1695)
																		return 1;
																	else
																		return 0;
																}
																else
																	return 1;
															}
															else
															{
																if(rss_min < -84.91215)
																{
																	if(d_min < 58.1564)
																		return 0;
																	else
																		return 1;
																}
																else
																	return 1;
															}
														}
														else
														{
															if(d_min < 65.4925)
															{
																if(rss_mean < -79.1948)
																	return 0;
																else
																	return 1;
															}
															else
																return 1;
														}
													}
												}
												else
												{
													if(rss_std < 5.04854)
													{
														if(d_max < 301.297)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
											}
											else
												return 1;
										}
									}
								}
								else
								{
									if(rss_max < -66.7936)
									{
										if(d_max < 335.076)
											return 0;
										else
											return 1;
									}
									else
										return 1;
								}
							}
						}
						else
						{
							if(d_min < 93.31525)
							{
								if(d_min < 93.27885)
								{
									if(rss_min < -84.91155)
									{
										if(d_max < 274.972)
										{
											if(d_max < 274.863)
											{
												if(rss_max < -72.8062)
												{
													if(d_mean < 167.063)
														return 0;
													else
														return 1;
												}
												else
												{
													if(rss_min < -84.9143)
														return 1;
													else
														return 0;
												}
											}
											else
												return 0;
										}
										else
										{
											if(rss_max < -71.47625)
											{
												if(rss_min < -84.9856)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
									}
									else
									{
										if(rss_max < -71.96425)
										{
											if(rss_max < -72.0192)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
								}
								else
									return 0;
							}
							else
							{
								if(d_max < 390.2895)
									return 1;
								else
									return 2;
							}
						}
					}
				}
				else
				{
					if(rss_max < -71.21825)
					{
						if(d_mean < 147.429)
						{
							if(d_std < 37.9844)
							{
								if(d_max < 259.779)
								{
									if(d_min < 74.0048)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
							else
							{
								if(d_std < 43.57495)
								{
									if(rss_std < 2.955655)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
						}
						else
						{
							if(d_max < 278.2815)
							{
								if(rss_max < -73.8441)
									return 1;
								else
									return 0;
							}
							else
							{
								if(d_max < 322.6315)
									return 1;
								else
									return 2;
							}
						}
					}
					else
					{
						if(rss_mean < -79.16245)
						{
							if(d_std < 50.8273)
								return 1;
							else
								return 0;
						}
						else
						{
							if(rss_std < 3.354005)
							{
								if(d_max < 243.8785)
									return 1;
								else
								{
									if(d_max < 350.408)
										return 0;
									else
										return 2;
								}
							}
							else
							{
								if(d_min < 148.40285)
									return 1;
								else
									return 2;
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if(d_mean < 111.042)
		{
			if(d_min < 25.2566)
				return 1;
			else
				return 0;
		}
		else
			return 2;
	}
}

int tree_11(float d_max, float d_min, float d_mean, float d_std, float rss_max, float rss_min, float rss_mean, float rss_std)
{
	if(rss_max < -61.50405)
	{
		if(rss_max < -70.5048)
		{
			if(d_max < 237.527)
			{
				if(rss_min < -84.25745)
				{
					if(d_max < 214.895)
					{
						if(d_min < 73.8514)
							return 0;
						else
						{
							if(rss_min < -84.64725)
							{
								if(d_std < 14.53045)
									return 0;
								else
								{
									if(d_mean < 140.64)
									{
										if(rss_max < -72.20995)
											return 0;
										else
											return 1;
									}
									else
									{
										if(d_std < 39.13365)
											return 1;
										else
										{
											if(d_min < 81.0112)
												return 1;
											else
												return 0;
										}
									}
								}
							}
							else
							{
								if(d_max < 207.4345)
								{
									if(d_mean < 149.18)
										return 1;
									else
										return 0;
								}
								else
									return 0;
							}
						}
					}
					else
					{
						if(rss_max < -73.3456)
						{
							if(rss_max < -75.96845)
							{
								if(rss_min < -84.2605)
									return 0;
								else
								{
									if(d_max < 218.118)
										return 0;
									else
										return 1;
								}
							}
							else
							{
								if(d_std < 31.52555)
								{
									if(d_mean < 153.8825)
										return 0;
									else
									{
										if(rss_std < 2.559065)
										{
											if(d_max < 226.0665)
												return 0;
											else
											{
												if(rss_min < -84.9157)
												{
													if(rss_min < -84.9722)
													{
														if(rss_min < -84.98295)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
												else
												{
													if(d_min < 118.195)
														return 0;
													else
														return 1;
												}
											}
										}
										else
										{
											if(d_min < 100.34045)
												return 0;
											else
												return 1;
										}
									}
								}
								else
								{
									if(d_min < 115.9285)
									{
										if(d_min < 94.78375)
										{
											if(d_max < 231.458)
												return 0;
											else
											{
												if(d_max < 231.754)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(rss_mean < -80.77155)
												return 0;
											else
											{
												if(rss_max < -74.7407)
													return 0;
												else
												{
													if(rss_std < 3.10419)
													{
														if(rss_min < -84.78765)
														{
															if(d_std < 42.36905)
																return 0;
															else
																return 1;
														}
														else
														{
															if(d_max < 222.715)
																return 0;
															else
																return 1;
														}
													}
													else
														return 0;
												}
											}
										}
									}
									else
									{
										if(d_min < 117.1945)
											return 1;
										else
											return 0;
									}
								}
							}
						}
						else
						{
							if(rss_std < 3.48329)
							{
								if(d_min < 89.1616)
								{
									if(rss_max < -71.5086)
									{
										if(rss_max < -73.26895)
										{
											if(d_min < 79.38625)
												return 1;
											else
												return 0;
										}
										else
										{
											if(d_min < 82.7979)
												return 0;
											else
											{
												if(rss_max < -72.17565)
												{
													if(rss_max < -72.77935)
														return 0;
													else
													{
														if(d_min < 84.0215)
														{
															if(d_max < 226.2915)
																return 1;
															else
																return 0;
														}
														else
															return 0;
													}
												}
												else
													return 1;
											}
										}
									}
									else
									{
										if(rss_max < -71.02445)
										{
											if(d_min < 74.0218)
											{
												if(d_max < 231.7445)
													return 0;
												else
												{
													if(rss_max < -71.1496)
													{
														if(d_mean < 145.0905)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
											}
											else
											{
												if(rss_max < -71.28615)
												{
													if(d_min < 75.055)
														return 1;
													else
													{
														if(d_min < 78.9327)
															return 0;
														else
														{
															if(rss_min < -84.46615)
																return 1;
															else
																return 0;
														}
													}
												}
												else
													return 1;
											}
										}
										else
											return 0;
									}
								}
								else
								{
									if(d_max < 226.81)
									{
										if(d_std < 29.9615)
										{
											if(d_std < 28.54085)
											{
												if(rss_max < -71.2933)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
										else
										{
											if(rss_mean < -80.7206)
											{
												if(rss_max < -73.0563)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
									}
									else
									{
										if(d_max < 228.075)
											return 0;
										else
										{
											if(rss_mean < -80.18105)
											{
												if(d_max < 228.772)
													return 1;
												else
													return 0;
											}
											else
											{
												if(rss_max < -72.88495)
													return 0;
												else
													return 1;
											}
										}
									}
								}
							}
							else
							{
								if(d_max < 235.0305)
								{
									if(d_mean < 152.3185)
									{
										if(rss_std < 3.785955)
										{
											if(rss_max < -71.41685)
											{
												if(d_std < 36.17)
												{
													if(d_min < 76.85885)
														return 0;
													else
													{
														if(d_mean < 150.7075)
															return 1;
														else
														{
															if(d_max < 228.6255)
																return 1;
															else
																return 0;
														}
													}
												}
												else
												{
													if(d_min < 90.9128)
													{
														if(rss_min < -84.3837)
															return 0;
														else
														{
															if(d_max < 220.4865)
																return 0;
															else
																return 1;
														}
													}
													else
														return 1;
												}
											}
											else
											{
												if(d_min < 72.8991)
													return 0;
												else
												{
													if(rss_min < -84.6786)
													{
														if(rss_std < 3.517425)
														{
															if(d_std < 41.80885)
																return 1;
															else
																return 0;
														}
														else
														{
															if(d_max < 233.8945)
																return 1;
															else
																return 0;
														}
													}
													else
														return 0;
												}
											}
										}
										else
										{
											if(d_max < 234.1155)
											{
												if(rss_min < -84.77885)
												{
													if(d_std < 36.4998)
														return 1;
													else
														return 0;
												}
												else
												{
													if(rss_min < -84.7758)
														return 1;
													else
													{
														if(rss_std < 3.844375)
														{
															if(rss_std < 3.83388)
																return 0;
															else
															{
																if(d_max < 226.3785)
																	return 0;
																else
																	return 1;
															}
														}
														else
															return 0;
													}
												}
											}
											else
											{
												if(rss_max < -71.3951)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(rss_mean < -79.33845)
											return 0;
										else
										{
											if(rss_max < -70.71685)
												return 0;
											else
											{
												if(d_max < 228.8065)
													return 0;
												else
													return 1;
											}
										}
									}
								}
								else
								{
									if(rss_max < -71.4353)
									{
										if(d_std < 41.4334)
											return 1;
										else
											return 0;
									}
									else
									{
										if(rss_max < -70.7582)
											return 1;
										else
											return 0;
									}
								}
							}
						}
					}
				}
				else
				{
					if(rss_min < -83.90345)
					{
						if(d_max < 224.1845)
						{
							if(rss_max < -80.73435)
							{
								if(d_mean < 176.5145)
									return 1;
								else
									return 0;
							}
							else
							{
								if(d_std < 22.9821)
								{
									if(d_max < 199.968)
										return 1;
									else
										return 0;
								}
								else
									return 0;
							}
						}
						else
						{
							if(rss_max < -71.5979)
							{
								if(d_std < 32.6876)
									return 1;
								else
									return 0;
							}
							else
							{
								if(d_min < 71.9574)
									return 0;
								else
									return 1;
							}
						}
					}
					else
					{
						if(rss_max < -78.07815)
						{
							if(d_std < 32.41235)
							{
								if(d_min < 168.7785)
									return 0;
								else
								{
									if(d_min < 169.0845)
										return 1;
									else
										return 0;
								}
							}
							else
								return 1;
						}
						else
							return 0;
					}
				}
			}
			else
			{
				if(rss_min < -84.46025)
				{
					if(rss_min < -84.91765)
					{
						if(rss_max < -77.26515)
						{
							if(d_min < 162.502)
							{
								if(rss_max < -77.65335)
									return 0;
								else
								{
									if(d_max < 248.4485)
										return 0;
									else
										return 1;
								}
							}
							else
							{
								if(d_min < 165.476)
									return 1;
								else
									return 0;
							}
						}
						else
						{
							if(rss_min < -84.9786)
							{
								if(rss_std < 4.11309)
								{
									if(d_min < 111.7255)
									{
										if(d_max < 244.5965)
										{
											if(rss_max < -73.2402)
												return 0;
											else
											{
												if(d_min < 73.62345)
													return 1;
												else
												{
													if(d_max < 241.3295)
														return 0;
													else
														return 1;
												}
											}
										}
										else
										{
											if(rss_max < -76.5116)
											{
												if(d_max < 319.6055)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
									}
									else
									{
										if(d_min < 116.991)
										{
											if(d_min < 116.7625)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
								}
								else
								{
									if(rss_mean < -79.44205)
										return 0;
									else
										return 1;
								}
							}
							else
							{
								if(d_max < 275.2245)
								{
									if(rss_max < -73.05495)
									{
										if(rss_std < 2.5055)
										{
											if(d_max < 243.5555)
												return 0;
											else
											{
												if(d_min < 103.1501)
													return 0;
												else
													return 1;
											}
										}
										else
											return 0;
									}
									else
									{
										if(rss_mean < -79.86045)
										{
											if(d_max < 273.4845)
												return 1;
											else
												return 0;
										}
										else
										{
											if(rss_mean < -79.03085)
												return 0;
											else
											{
												if(d_mean < 144.3785)
													return 0;
												else
												{
													if(d_max < 264.2685)
														return 1;
													else
														return 0;
												}
											}
										}
									}
								}
								else
								{
									if(rss_min < -84.9674)
										return 0;
									else
									{
										if(rss_mean < -79.6554)
										{
											if(rss_min < -84.9426)
												return 1;
											else
												return 0;
										}
										else
										{
											if(d_max < 296.3435)
												return 0;
											else
												return 1;
										}
									}
								}
							}
						}
					}
					else
					{
						if(rss_max < -73.9468)
						{
							if(d_min < 108.6105)
							{
								if(d_max < 305.6505)
								{
									if(rss_std < 3.243935)
									{
										if(d_max < 300.4155)
										{
											if(d_min < 95.71755)
												return 0;
											else
											{
												if(rss_max < -75.4136)
													return 0;
												else
												{
													if(d_min < 99.18035)
													{
														if(d_min < 96.7506)
															return 1;
														else
															return 0;
													}
													else
														return 1;
												}
											}
										}
										else
											return 0;
									}
									else
										return 0;
								}
								else
									return 1;
							}
							else
							{
								if(rss_max < -76.86705)
								{
									if(d_min < 131.5645)
									{
										if(d_mean < 181.889)
										{
											if(rss_mean < -80.70555)
												return 1;
											else
											{
												if(rss_max < -77.08495)
													return 0;
												else
													return 1;
											}
										}
										else
											return 0;
									}
									else
									{
										if(d_max < 275.263)
										{
											if(rss_mean < -82.3304)
											{
												if(d_min < 172.3305)
												{
													if(d_max < 254.5155)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
											else
												return 1;
										}
										else
										{
											if(d_std < 48.5003)
												return 1;
											else
												return 0;
										}
									}
								}
								else
								{
									if(d_max < 242.5125)
									{
										if(d_max < 242.093)
											return 1;
										else
											return 0;
									}
									else
									{
										if(rss_min < -84.79755)
											return 1;
										else
										{
											if(rss_max < -76.67255)
											{
												if(d_min < 126.8825)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
									}
								}
							}
						}
						else
						{
							if(d_min < 82.73485)
							{
								if(rss_min < -84.9115)
									return 0;
								else
								{
									if(rss_std < 2.793065)
									{
										if(d_max < 267.99)
											return 0;
										else
											return 1;
									}
									else
									{
										if(rss_std < 3.793985)
											return 1;
										else
										{
											if(d_mean < 151.226)
												return 1;
											else
											{
												if(d_std < 45.763)
													return 0;
												else
												{
													if(d_min < 82.0467)
														return 1;
													else
														return 0;
												}
											}
										}
									}
								}
							}
							else
								return 1;
						}
					}
				}
				else
				{
					if(d_mean < 176.017)
					{
						if(d_max < 283.5345)
						{
							if(rss_min < -83.41385)
							{
								if(d_max < 270.399)
								{
									if(d_std < 28.22595)
										return 0;
									else
									{
										if(rss_max < -73.17055)
										{
											if(rss_min < -84.3386)
												return 0;
											else
											{
												if(rss_max < -76.31835)
												{
													if(rss_max < -77.627)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
										}
										else
										{
											if(rss_max < -71.6649)
											{
												if(d_std < 38.26455)
												{
													if(d_max < 246.657)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
											else
												return 1;
										}
									}
								}
								else
									return 0;
							}
							else
								return 0;
						}
						else
						{
							if(d_mean < 137.342)
								return 0;
							else
								return 1;
						}
					}
					else
					{
						if(rss_min < -83.0378)
						{
							if(rss_max < -80.20485)
							{
								if(d_std < 49.1361)
									return 0;
								else
									return 1;
							}
							else
								return 0;
						}
						else
						{
							if(d_min < 217.7215)
								return 1;
							else
								return 2;
						}
					}
				}
			}
		}
		else
		{
			if(rss_min < -84.4652)
			{
				if(d_max < 241.5095)
				{
					if(d_min < 69.9001)
					{
						if(d_max < 217.78)
						{
							if(d_max < 183.973)
							{
								if(rss_mean < -76.9294)
								{
									if(rss_max < -68.57605)
										return 0;
									else
										return 1;
								}
								else
									return 1;
							}
							else
							{
								if(rss_max < -68.2592)
								{
									if(rss_std < 4.768685)
									{
										if(rss_mean < -80.1585)
											return 0;
										else
										{
											if(rss_mean < -79.12475)
											{
												if(d_min < 64.47065)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
									}
									else
									{
										if(d_min < 67.3319)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(d_std < 49.4499)
										return 1;
									else
									{
										if(rss_min < -84.6522)
											return 1;
										else
										{
											if(d_mean < 134.924)
											{
												if(rss_max < -64.50795)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
									}
								}
							}
						}
						else
						{
							if(d_mean < 140.5565)
							{
								if(d_std < 52.46095)
								{
									if(d_min < 51.2271)
									{
										if(rss_std < 5.72609)
										{
											if(d_max < 236.4145)
											{
												if(rss_max < -64.54095)
													return 0;
												else
												{
													if(d_min < 39.61365)
													{
														if(d_max < 222.875)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
											}
											else
												return 1;
										}
										else
										{
											if(d_std < 51.7128)
												return 1;
											else
											{
												if(d_min < 44.19105)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(rss_max < -67.53625)
										{
											if(d_min < 62.4961)
											{
												if(d_max < 235.4525)
												{
													if(d_std < 39.3694)
													{
														if(d_max < 228.375)
															return 0;
														else
															return 1;
													}
													else
													{
														if(d_mean < 140.172)
														{
															if(d_max < 221.1045)
																return 1;
															else
															{
																if(rss_min < -84.77975)
																	return 0;
																else
																{
																	if(rss_mean < -77.44165)
																	{
																		if(d_min < 58.73755)
																			return 0;
																		else
																			return 1;
																	}
																	else
																		return 0;
																}
															}
														}
														else
														{
															if(d_max < 221.1045)
																return 1;
															else
																return 0;
														}
													}
												}
												else
													return 1;
											}
											else
											{
												if(d_max < 219.1405)
													return 0;
												else
												{
													if(d_mean < 138.654)
													{
														if(rss_min < -84.5225)
														{
															if(rss_std < 4.857165)
																return 1;
															else
															{
																if(d_max < 228.2025)
																	return 1;
																else
																	return 0;
															}
														}
														else
															return 0;
													}
													else
													{
														if(d_max < 235.044)
															return 0;
														else
															return 1;
													}
												}
											}
										}
										else
											return 1;
									}
								}
								else
								{
									if(d_max < 234.3195)
									{
										if(rss_max < -62.58265)
										{
											if(rss_std < 5.501)
											{
												if(d_max < 229.2535)
												{
													if(rss_max < -67.401)
													{
														if(d_max < 227.841)
														{
															if(rss_max < -68.20945)
															{
																if(d_max < 221.99)
																{
																	if(d_max < 221.16)
																		return 0;
																	else
																		return 1;
																}
																else
																	return 0;
															}
															else
															{
																if(d_min < 54.96835)
																	return 0;
																else
																	return 1;
															}
														}
														else
															return 1;
													}
													else
														return 1;
												}
												else
												{
													if(d_max < 232.691)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(rss_mean < -76.65085)
												{
													if(d_max < 221.417)
													{
														if(rss_max < -63.4005)
															return 0;
														else
															return 1;
													}
													else
													{
														if(rss_std < 5.955385)
														{
															if(rss_mean < -77.34065)
																return 0;
															else
															{
																if(rss_max < -66.3114)
																	return 0;
																else
																{
																	if(rss_max < -64.675)
																		return 1;
																	else
																	{
																		if(d_max < 230.205)
																			return 1;
																		else
																			return 0;
																	}
																}
															}
														}
														else
															return 0;
													}
												}
												else
													return 0;
											}
										}
										else
										{
											if(d_min < 33.59435)
												return 0;
											else
												return 1;
										}
									}
									else
										return 1;
								}
							}
							else
							{
								if(rss_min < -84.91355)
								{
									if(d_min < 67.21745)
										return 0;
									else
									{
										if(d_min < 67.63915)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(rss_min < -84.8129)
									{
										if(d_max < 234.899)
										{
											if(rss_std < 3.703955)
											{
												if(rss_min < -84.8893)
													return 0;
												else
													return 1;
											}
											else
											{
												if(rss_min < -84.88625)
													return 0;
												else
												{
													if(d_mean < 168.743)
													{
														if(rss_std < 4.63158)
														{
															if(d_min < 66.40975)
															{
																if(d_max < 227.464)
																{
																	if(rss_max < -69.5666)
																		return 0;
																	else
																		return 1;
																}
																else
																	return 1;
															}
															else
																return 0;
														}
														else
														{
															if(rss_std < 5.734885)
																return 0;
															else
															{
																if(rss_max < -62.69595)
																	return 0;
																else
																	return 1;
															}
														}
													}
													else
														return 0;
												}
											}
										}
										else
											return 1;
									}
									else
									{
										if(d_max < 234.899)
										{
											if(d_std < 50.59385)
											{
												if(rss_max < -67.26525)
													return 0;
												else
												{
													if(d_max < 229.216)
														return 1;
													else
														return 0;
												}
											}
											else
												return 0;
										}
										else
										{
											if(rss_min < -84.75995)
												return 0;
											else
											{
												if(d_mean < 167.3735)
													return 1;
												else
													return 0;
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if(d_min < 85.86315)
						{
							if(rss_max < -70.4806)
								return 0;
							else
							{
								if(rss_mean < -80.69355)
								{
									if(rss_min < -84.81355)
										return 1;
									else
										return 0;
								}
								else
									return 1;
							}
						}
						else
						{
							if(rss_min < -84.9364)
							{
								if(rss_min < -84.9582)
									return 1;
								else
									return 0;
							}
							else
							{
								if(d_mean < 170.537)
								{
									if(rss_min < -84.7061)
										return 1;
									else
									{
										if(d_min < 86.14245)
											return 0;
										else
										{
											if(d_mean < 168.184)
												return 1;
											else
												return 0;
										}
									}
								}
								else
								{
									if(d_std < 34.19135)
										return 0;
									else
										return 1;
								}
							}
						}
					}
				}
				else
				{
					if(rss_mean < -72.5602)
					{
						if(d_std < 76.61265)
						{
							if(rss_max < -67.6574)
							{
								if(d_std < 65.5631)
								{
									if(rss_std < 4.849345)
									{
										if(d_min < 72.4328)
										{
											if(rss_max < -69.5061)
											{
												if(rss_max < -69.66895)
												{
													if(d_min < 72.2544)
													{
														if(rss_mean < -78.2835)
														{
															if(rss_std < 4.64078)
																return 1;
															else
																return 0;
														}
														else
														{
															if(d_min < 66.88165)
															{
																if(d_max < 261.647)
																	return 1;
																else
																	return 0;
															}
															else
																return 1;
														}
													}
													else
														return 0;
												}
												else
													return 0;
											}
											else
											{
												if(d_mean < 163.329)
												{
													if(rss_std < 4.77239)
														return 1;
													else
													{
														if(rss_std < 4.77257)
															return 0;
														else
														{
															if(rss_min < -84.82445)
																return 1;
															else
															{
																if(d_min < 66.0471)
																	return 0;
																else
																	return 1;
															}
														}
													}
												}
												else
												{
													if(rss_min < -84.90405)
													{
														if(rss_std < 4.2847)
															return 1;
														else
														{
															if(d_mean < 168.8565)
																return 0;
															else
																return 1;
														}
													}
													else
														return 1;
												}
											}
										}
										else
											return 1;
									}
									else
									{
										if(rss_min < -84.91215)
										{
											if(d_min < 60.212)
												return 0;
											else
											{
												if(rss_max < -69.77825)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(rss_max < -68.86475)
											{
												if(rss_min < -84.82995)
													return 1;
												else
												{
													if(d_min < 74.21265)
														return 0;
													else
														return 1;
												}
											}
											else
												return 1;
										}
									}
								}
								else
								{
									if(rss_std < 5.038565)
									{
										if(rss_max < -70.21105)
										{
											if(d_min < 65.7522)
												return 1;
											else
												return 0;
										}
										else
										{
											if(rss_std < 4.936285)
												return 1;
											else
											{
												if(d_max < 315.61)
													return 0;
												else
													return 1;
											}
										}
									}
									else
										return 0;
								}
							}
							else
								return 1;
						}
						else
						{
							if(d_min < 51.2997)
								return 1;
							else
							{
								if(d_std < 78.0413)
								{
									if(rss_min < -84.94105)
										return 1;
									else
									{
										if(d_min < 55.31835)
											return 0;
										else
										{
											if(d_min < 60.8778)
												return 1;
											else
												return 0;
										}
									}
								}
								else
									return 0;
							}
						}
					}
					else
						return 2;
				}
			}
			else
			{
				if(d_max < 224.815)
				{
					if(rss_max < -62.5979)
					{
						if(d_min < 67.51315)
						{
							if(rss_max < -68.24595)
								return 0;
							else
							{
								if(d_mean < 132.615)
								{
									if(d_min < 59.99985)
									{
										if(d_max < 211.157)
										{
											if(d_mean < 124.7175)
												return 0;
											else
											{
												if(rss_max < -62.91505)
												{
													if(d_std < 48.40165)
													{
														if(rss_min < -84.38335)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
												else
													return 1;
											}
										}
										else
										{
											if(d_mean < 116.118)
											{
												if(d_std < 46.9417)
													return 1;
												else
													return 0;
											}
											else
											{
												if(d_max < 211.5585)
													return 1;
												else
												{
													if(d_mean < 131.139)
														return 0;
													else
													{
														if(rss_mean < -77.9674)
															return 1;
														else
														{
															if(d_mean < 131.2145)
																return 1;
															else
																return 0;
														}
													}
												}
											}
										}
									}
									else
									{
										if(d_max < 157.1495)
											return 0;
										else
											return 1;
									}
								}
								else
									return 0;
							}
						}
						else
						{
							if(rss_min < -83.4715)
							{
								if(rss_max < -69.63085)
								{
									if(d_min < 76.7487)
										return 0;
									else
									{
										if(d_mean < 144.7705)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(rss_std < 3.04789)
										return 0;
									else
										return 1;
								}
							}
							else
							{
								if(rss_min < -83.34005)
								{
									if(rss_min < -83.344)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
						}
					}
					else
					{
						if(rss_min < -83.39075)
						{
							if(d_std < 56.08)
							{
								if(rss_mean < -76.4347)
									return 1;
								else
								{
									if(d_min < 40.976)
										return 0;
									else
										return 1;
								}
							}
							else
							{
								if(d_min < 39.2768)
									return 0;
								else
									return 1;
							}
						}
						else
							return 0;
					}
				}
				else
				{
					if(rss_mean < -73.41485)
					{
						if(d_mean < 145.4605)
						{
							if(rss_mean < -78.31895)
							{
								if(rss_min < -84.21045)
								{
									if(d_max < 257.2095)
										return 0;
									else
										return 1;
								}
								else
									return 1;
							}
							else
							{
								if(rss_min < -83.1941)
									return 1;
								else
								{
									if(d_min < 83.28665)
										return 0;
									else
										return 1;
								}
							}
						}
						else
						{
							if(d_min < 80.23145)
							{
								if(d_std < 78.9629)
								{
									if(d_max < 285.191)
										return 0;
									else
										return 1;
								}
								else
									return 1;
							}
							else
								return 1;
						}
					}
					else
						return 2;
				}
			}
		}
	}
	else
	{
		if(rss_mean < -69.90885)
		{
			if(d_min < 35.19105)
			{
				if(rss_min < -83.9597)
				{
					if(d_max < 239.683)
					{
						if(d_std < 60.5616)
						{
							if(d_max < 215.2375)
							{
								if(d_max < 170.82)
									return 0;
								else
								{
									if(rss_max < -59.60145)
									{
										if(d_min < 30.19075)
											return 0;
										else
											return 1;
									}
									else
										return 1;
								}
							}
							else
							{
								if(rss_min < -84.6878)
								{
									if(rss_mean < -74.42)
										return 1;
									else
										return 0;
								}
								else
									return 0;
							}
						}
						else
							return 0;
					}
					else
						return 1;
				}
				else
				{
					if(d_min < 33.3638)
					{
						if(d_mean < 133.744)
							return 0;
						else
						{
							if(d_max < 224.2105)
								return 0;
							else
								return 1;
						}
					}
					else
					{
						if(d_min < 34.5023)
							return 1;
						else
							return 0;
					}
				}
			}
			else
			{
				if(rss_max < -61.2719)
					return 0;
				else
					return 1;
			}
		}
		else
			return 2;
	}
}

int tree_12(float d_max, float d_min, float d_mean, float d_std, float rss_max, float rss_min, float rss_mean, float rss_std)
{
	if(rss_max < -62.03215)
	{
		if(d_max < 234.994)
		{
			if(rss_min < -84.52925)
			{
				if(d_mean < 150.6)
				{
					if(d_max < 218.2475)
					{
						if(d_min < 56.3599)
						{
							if(d_std < 51.1614)
								return 1;
							else
							{
								if(rss_max < -64.50795)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(rss_max < -70.1039)
							{
								if(d_min < 88.5066)
								{
									if(d_min < 73.79355)
										return 0;
									else
									{
										if(rss_max < -71.73325)
										{
											if(rss_std < 3.61768)
												return 0;
											else
											{
												if(d_max < 196.6975)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(rss_min < -84.61495)
												return 1;
											else
												return 0;
										}
									}
								}
								else
									return 1;
							}
							else
							{
								if(rss_min < -84.983)
									return 0;
								else
								{
									if(d_min < 56.85705)
										return 0;
									else
									{
										if(rss_min < -84.7549)
											return 1;
										else
										{
											if(d_std < 46.9547)
												return 1;
											else
												return 0;
										}
									}
								}
							}
						}
					}
					else
					{
						if(rss_max < -70.50075)
						{
							if(rss_max < -73.27775)
							{
								if(rss_mean < -79.68495)
								{
									if(rss_std < 3.03454)
									{
										if(d_min < 106.07315)
											return 0;
										else
										{
											if(d_max < 232.795)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(rss_max < -74.44475)
											return 0;
										else
											return 1;
									}
								}
								else
									return 0;
							}
							else
							{
								if(rss_std < 3.757035)
								{
									if(rss_min < -84.91865)
									{
										if(rss_mean < -79.7491)
											return 1;
										else
											return 0;
									}
									else
									{
										if(d_min < 90.9128)
										{
											if(rss_max < -71.54915)
											{
												if(d_max < 228.4635)
													return 0;
												else
												{
													if(d_max < 230.129)
													{
														if(d_mean < 149.6905)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
											}
											else
											{
												if(d_min < 72.83305)
													return 0;
												else
												{
													if(rss_std < 3.18827)
														return 0;
													else
													{
														if(rss_min < -84.60545)
														{
															if(rss_min < -84.8874)
															{
																if(d_min < 73.39295)
																	return 1;
																else
																	return 0;
															}
															else
																return 1;
														}
														else
														{
															if(d_min < 77.816)
																return 0;
															else
																return 1;
														}
													}
												}
											}
										}
										else
										{
											if(rss_std < 2.80591)
												return 0;
											else
												return 1;
										}
									}
								}
								else
								{
									if(d_std < 45.702)
									{
										if(rss_std < 4.393185)
										{
											if(d_std < 36.78245)
												return 1;
											else
											{
												if(d_min < 74.76765)
													return 0;
												else
												{
													if(rss_std < 4.02853)
														return 0;
													else
														return 1;
												}
											}
										}
										else
										{
											if(d_max < 231.074)
												return 0;
											else
												return 1;
										}
									}
									else
										return 0;
								}
							}
						}
						else
						{
							if(d_min < 68.95505)
							{
								if(d_mean < 138.4245)
								{
									if(rss_std < 4.834585)
									{
										if(d_max < 227.3445)
										{
											if(rss_min < -84.85755)
											{
												if(rss_max < -67.78045)
													return 0;
												else
												{
													if(d_max < 224.8055)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(d_mean < 104.5205)
													return 0;
												else
												{
													if(rss_std < 4.80033)
														return 1;
													else
													{
														if(d_min < 58.3486)
															return 1;
														else
															return 0;
													}
												}
											}
										}
										else
										{
											if(rss_min < -84.9709)
											{
												if(d_min < 53.03785)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
									}
									else
									{
										if(d_std < 58.7869)
										{
											if(rss_max < -65.5857)
											{
												if(rss_min < -84.8655)
													return 0;
												else
												{
													if(rss_min < -84.8369)
													{
														if(d_max < 224.4795)
															return 1;
														else
														{
															if(d_mean < 132.824)
															{
																if(d_max < 227.701)
																	return 0;
																else
																	return 1;
															}
															else
																return 1;
														}
													}
													else
													{
														if(rss_max < -66.4142)
														{
															if(d_max < 220.1285)
															{
																if(d_max < 219.228)
																	return 0;
																else
																	return 1;
															}
															else
															{
																if(d_mean < 126.663)
																{
																	if(d_max < 226.828)
																		return 0;
																	else
																		return 1;
																}
																else
																	return 0;
															}
														}
														else
														{
															if(d_min < 50.4049)
																return 0;
															else
																return 1;
														}
													}
												}
											}
											else
											{
												if(rss_std < 6.56696)
												{
													if(d_max < 220.932)
													{
														if(d_mean < 127.024)
														{
															if(rss_std < 6.20317)
																return 0;
															else
																return 1;
														}
														else
															return 1;
													}
													else
													{
														if(d_mean < 133.921)
															return 1;
														else
														{
															if(rss_min < -84.70495)
																return 0;
															else
																return 1;
														}
													}
												}
												else
												{
													if(rss_min < -84.778)
														return 0;
													else
														return 1;
												}
											}
										}
										else
											return 0;
									}
								}
								else
								{
									if(rss_std < 4.64207)
									{
										if(d_min < 57.13945)
										{
											if(d_max < 230.517)
												return 1;
											else
												return 0;
										}
										else
										{
											if(rss_max < -69.4198)
												return 0;
											else
											{
												if(d_std < 50.83475)
												{
													if(d_std < 41.05595)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
										}
									}
									else
									{
										if(rss_max < -62.57845)
										{
											if(d_std < 48.9693)
											{
												if(rss_mean < -77.75695)
													return 0;
												else
													return 1;
											}
											else
											{
												if(d_mean < 140.178)
												{
													if(rss_mean < -78.3264)
														return 1;
													else
														return 0;
												}
												else
													return 0;
											}
										}
										else
										{
											if(rss_max < -62.57375)
												return 1;
											else
												return 0;
										}
									}
								}
							}
							else
							{
								if(rss_min < -84.9364)
								{
									if(rss_min < -84.95805)
										return 1;
									else
										return 0;
								}
								else
								{
									if(d_std < 38.44805)
										return 1;
									else
									{
										if(rss_min < -84.7066)
											return 1;
										else
										{
											if(d_mean < 147.4905)
												return 1;
											else
											{
												if(rss_mean < -78.9282)
													return 1;
												else
												{
													if(d_max < 223.318)
														return 1;
													else
														return 0;
												}
											}
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if(rss_std < 2.565025)
					{
						if(rss_max < -75.98885)
						{
							if(d_max < 215.4325)
							{
								if(d_min < 166.4445)
									return 0;
								else
									return 1;
							}
							else
								return 0;
						}
						else
						{
							if(d_std < 28.675)
							{
								if(rss_min < -84.98295)
									return 0;
								else
								{
									if(d_mean < 194.0545)
									{
										if(rss_std < 2.41933)
										{
											if(rss_std < 2.21924)
												return 0;
											else
											{
												if(d_min < 111.8954)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(d_std < 27.3159)
												return 1;
											else
											{
												if(d_mean < 173.97)
													return 0;
												else
													return 1;
											}
										}
									}
									else
										return 1;
								}
							}
							else
								return 0;
						}
					}
					else
					{
						if(d_max < 218.5175)
						{
							if(rss_max < -74.7652)
							{
								if(d_max < 214.297)
									return 1;
								else
									return 0;
							}
							else
							{
								if(d_max < 213.5325)
									return 1;
								else
								{
									if(rss_min < -84.6969)
									{
										if(rss_max < -73.52415)
										{
											if(d_max < 217.1785)
												return 1;
											else
												return 0;
										}
										else
										{
											if(d_std < 55.9789)
												return 1;
											else
												return 0;
										}
									}
									else
										return 0;
								}
							}
						}
						else
						{
							if(rss_max < -70.1967)
							{
								if(d_std < 34.20755)
								{
									if(rss_min < -84.899)
									{
										if(d_max < 219.9105)
											return 1;
										else
										{
											if(d_max < 233.3245)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(d_mean < 175.7345)
										{
											if(d_min < 104.7025)
												return 0;
											else
											{
												if(rss_std < 2.68879)
													return 0;
												else
												{
													if(rss_max < -71.7472)
														return 1;
													else
													{
														if(d_min < 106.598)
															return 1;
														else
															return 0;
													}
												}
											}
										}
										else
											return 1;
									}
								}
								else
								{
									if(rss_min < -84.89835)
									{
										if(d_mean < 163.6545)
										{
											if(d_std < 34.88195)
											{
												if(rss_std < 3.056035)
													return 0;
												else
													return 1;
											}
											else
											{
												if(rss_max < -70.6935)
													return 0;
												else
												{
													if(rss_std < 4.03089)
														return 1;
													else
														return 0;
												}
											}
										}
										else
											return 0;
									}
									else
									{
										if(d_std < 41.56425)
										{
											if(d_max < 233.875)
											{
												if(d_min < 94.7981)
												{
													if(rss_std < 3.099795)
													{
														if(d_max < 226.1055)
														{
															if(rss_max < -72.8049)
															{
																if(d_min < 94.6123)
																	return 0;
																else
																	return 1;
															}
															else
															{
																if(rss_mean < -81.10745)
																	return 0;
																else
																{
																	if(rss_std < 2.8172)
																		return 0;
																	else
																		return 1;
																}
															}
														}
														else
															return 0;
													}
													else
													{
														if(rss_std < 3.355995)
														{
															if(rss_max < -72.0969)
															{
																if(rss_max < -72.41575)
																	return 0;
																else
																{
																	if(d_max < 223.6695)
																		return 1;
																	else
																		return 0;
																}
															}
															else
															{
																if(d_min < 81.03915)
																	return 0;
																else
																	return 1;
															}
														}
														else
														{
															if(d_mean < 150.8965)
															{
																if(d_min < 89.76405)
																	return 0;
																else
																	return 1;
															}
															else
																return 0;
														}
													}
												}
												else
												{
													if(rss_max < -74.2593)
														return 0;
													else
													{
														if(rss_min < -84.8652)
														{
															if(d_min < 100.84785)
																return 0;
															else
																return 1;
														}
														else
															return 0;
													}
												}
											}
											else
												return 1;
										}
										else
										{
											if(rss_max < -71.1724)
												return 0;
											else
											{
												if(d_mean < 152.353)
												{
													if(d_min < 70.3291)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
										}
									}
								}
							}
							else
							{
								if(d_min < 68.1742)
								{
									if(rss_std < 4.4865)
									{
										if(rss_max < -67.9976)
										{
											if(d_max < 231.3705)
												return 0;
											else
											{
												if(d_min < 64.83385)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(d_std < 47.9246)
											{
												if(d_max < 229.216)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
									}
									else
										return 0;
								}
								else
								{
									if(rss_min < -84.8058)
									{
										if(rss_mean < -81.40285)
											return 0;
										else
											return 1;
									}
									else
									{
										if(rss_mean < -80.5304)
											return 0;
										else
											return 1;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				if(rss_max < -70.7453)
				{
					if(d_max < 229.4615)
					{
						if(rss_max < -73.3444)
						{
							if(d_std < 37.4559)
							{
								if(d_std < 8.24427)
								{
									if(rss_min < -82.34595)
										return 1;
									else
										return 0;
								}
								else
									return 0;
							}
							else
							{
								if(rss_max < -79.6209)
									return 1;
								else
									return 0;
							}
						}
						else
						{
							if(rss_max < -73.33805)
							{
								if(d_min < 94.60515)
									return 0;
								else
									return 1;
							}
							else
							{
								if(d_max < 224.1565)
									return 0;
								else
								{
									if(d_max < 225.1625)
										return 1;
									else
										return 0;
								}
							}
						}
					}
					else
					{
						if(d_std < 31.5159)
						{
							if(rss_min < -82.22125)
							{
								if(d_mean < 177.6255)
									return 1;
								else
									return 0;
							}
							else
								return 0;
						}
						else
						{
							if(d_max < 229.562)
								return 1;
							else
								return 0;
						}
					}
				}
				else
				{
					if(rss_min < -83.3927)
					{
						if(d_min < 70.7093)
						{
							if(rss_max < -62.5979)
							{
								if(d_std < 39.3595)
								{
									if(d_mean < 127.841)
									{
										if(d_min < 67.226)
										{
											if(rss_std < 3.865985)
												return 0;
											else
											{
												if(d_max < 212.804)
												{
													if(rss_min < -83.53125)
													{
														if(d_mean < 126.0205)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
												else
													return 1;
											}
										}
										else
											return 1;
									}
									else
										return 0;
								}
								else
								{
									if(d_max < 225.4785)
									{
										if(d_min < 34.843)
											return 1;
										else
										{
											if(d_mean < 132.607)
											{
												if(d_mean < 132.458)
												{
													if(d_std < 49.1611)
													{
														if(rss_std < 4.96767)
														{
															if(d_std < 39.4385)
															{
																if(d_mean < 126.8705)
																	return 0;
																else
																	return 1;
															}
															else
																return 0;
														}
														else
														{
															if(rss_max < -63.3666)
															{
																if(d_std < 49.1353)
																{
																	if(rss_min < -84.0857)
																	{
																		if(d_max < 191.211)
																			return 0;
																		else
																			return 1;
																	}
																	else
																		return 0;
																}
																else
																	return 1;
															}
															else
																return 1;
														}
													}
													else
														return 0;
												}
												else
												{
													if(d_std < 51.1153)
													{
														if(d_max < 213.636)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
											}
											else
												return 0;
										}
									}
									else
									{
										if(rss_mean < -76.46955)
										{
											if(rss_min < -84.1989)
												return 0;
											else
											{
												if(d_min < 59.8359)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(d_mean < 120.1555)
												return 1;
											else
												return 0;
										}
									}
								}
							}
							else
							{
								if(rss_std < 8.13204)
								{
									if(d_max < 174.6095)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
						}
						else
						{
							if(rss_max < -69.63085)
							{
								if(rss_std < 3.844145)
								{
									if(d_mean < 142.0455)
										return 1;
									else
									{
										if(d_min < 93.93255)
											return 0;
										else
											return 1;
									}
								}
								else
									return 0;
							}
							else
								return 1;
						}
					}
					else
					{
						if(d_min < 66.20065)
							return 0;
						else
						{
							if(d_min < 66.58725)
								return 1;
							else
							{
								if(d_max < 230.6735)
								{
									if(rss_min < -83.341)
									{
										if(rss_min < -83.344)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
								else
									return 1;
							}
						}
					}
				}
			}
		}
		else
		{
			if(rss_max < -76.0856)
			{
				if(d_min < 131.7385)
				{
					if(d_max < 307.5625)
					{
						if(d_max < 246.495)
							return 0;
						else
						{
							if(rss_max < -76.41345)
							{
								if(rss_mean < -80.09805)
								{
									if(rss_std < 1.974685)
									{
										if(rss_mean < -81.0455)
											return 1;
										else
										{
											if(d_mean < 155.3775)
											{
												if(d_max < 263.8625)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
									}
									else
									{
										if(rss_mean < -80.49505)
										{
											if(d_mean < 164.0395)
												return 1;
											else
												return 0;
										}
										else
										{
											if(rss_max < -76.64485)
												return 0;
											else
												return 1;
										}
									}
								}
								else
								{
									if(d_mean < 158.169)
										return 0;
									else
										return 1;
								}
							}
							else
								return 0;
						}
					}
					else
					{
						if(d_max < 316.036)
						{
							if(d_min < 129.9855)
								return 1;
							else
								return 0;
						}
						else
						{
							if(d_max < 336.3965)
								return 0;
							else
								return 1;
						}
					}
				}
				else
				{
					if(d_max < 276.4825)
					{
						if(d_std < 31.1495)
						{
							if(rss_std < 1.77729)
								return 0;
							else
							{
								if(rss_max < -77.8722)
								{
									if(rss_max < -79.54675)
									{
										if(d_min < 158.3045)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
								else
									return 1;
							}
						}
						else
						{
							if(rss_mean < -82.22765)
							{
								if(rss_std < 1.95972)
									return 1;
								else
									return 0;
							}
							else
							{
								if(d_max < 239.5055)
									return 0;
								else
									return 1;
							}
						}
					}
					else
					{
						if(d_std < 44.73045)
						{
							if(rss_max < -78.8043)
							{
								if(rss_min < -84.91785)
									return 0;
								else
								{
									if(d_std < 25.79495)
										return 0;
									else
										return 1;
								}
							}
							else
							{
								if(d_mean < 175.724)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(d_min < 138.6445)
							{
								if(rss_max < -77.5522)
									return 0;
								else
									return 1;
							}
							else
								return 0;
						}
					}
				}
			}
			else
			{
				if(d_mean < 253.961)
				{
					if(d_max < 249.19)
					{
						if(d_mean < 153.7865)
						{
							if(rss_max < -67.11715)
							{
								if(rss_min < -84.25925)
								{
									if(d_min < 54.42695)
										return 0;
									else
									{
										if(rss_min < -84.9718)
										{
											if(rss_min < -84.9786)
											{
												if(rss_std < 2.941465)
												{
													if(d_max < 237.966)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
											else
												return 0;
										}
										else
										{
											if(rss_std < 2.791415)
											{
												if(d_mean < 143.206)
													return 1;
												else
													return 0;
											}
											else
											{
												if(rss_std < 4.769825)
												{
													if(d_mean < 151.415)
														return 1;
													else
													{
														if(rss_std < 3.88654)
															return 1;
														else
														{
															if(rss_max < -71.11745)
															{
																if(d_min < 77.2016)
																	return 0;
																else
																	return 1;
															}
															else
																return 1;
														}
													}
												}
												else
												{
													if(rss_mean < -78.9937)
													{
														if(d_max < 238.602)
															return 1;
														else
															return 0;
													}
													else
														return 1;
												}
											}
										}
									}
								}
								else
								{
									if(d_std < 39.83485)
									{
										if(rss_std < 3.45179)
										{
											if(rss_min < -84.21455)
												return 0;
											else
												return 1;
										}
										else
											return 1;
									}
									else
									{
										if(rss_max < -68.76245)
										{
											if(rss_mean < -78.7316)
											{
												if(d_std < 44.30635)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
										else
											return 1;
									}
								}
							}
							else
								return 1;
						}
						else
						{
							if(d_min < 93.34395)
							{
								if(rss_mean < -80.4284)
								{
									if(d_mean < 166.9305)
									{
										if(d_std < 44.682)
											return 1;
										else
											return 0;
									}
									else
									{
										if(d_max < 244.25)
										{
											if(d_mean < 168.664)
											{
												if(d_std < 46.27535)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
										else
											return 1;
									}
								}
								else
								{
									if(rss_std < 3.004155)
										return 0;
									else
									{
										if(rss_max < -69.46485)
										{
											if(rss_std < 4.16203)
											{
												if(rss_max < -72.84615)
													return 0;
												else
												{
													if(rss_min < -84.9718)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(rss_mean < -78.9731)
												{
													if(d_max < 244.1685)
														return 0;
													else
													{
														if(d_max < 247.246)
															return 1;
														else
															return 0;
													}
												}
												else
													return 1;
											}
										}
										else
										{
											if(d_min < 63.639)
											{
												if(rss_min < -84.92785)
													return 0;
												else
												{
													if(rss_min < -84.54375)
													{
														if(rss_max < -63.28245)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
											}
											else
												return 1;
										}
									}
								}
							}
							else
							{
								if(rss_min < -84.91585)
								{
									if(rss_max < -73.1638)
									{
										if(d_min < 115.998)
											return 0;
										else
										{
											if(d_mean < 185.227)
												return 1;
											else
												return 0;
										}
									}
									else
										return 1;
								}
								else
								{
									if(rss_max < -74.47925)
									{
										if(d_std < 34.24905)
											return 1;
										else
										{
											if(rss_max < -74.50755)
											{
												if(rss_min < -84.82165)
													return 1;
												else
												{
													if(rss_min < -84.81065)
														return 0;
													else
													{
														if(d_min < 110.65)
															return 0;
														else
															return 1;
													}
												}
											}
											else
												return 0;
										}
									}
									else
										return 1;
								}
							}
						}
					}
					else
					{
						if(rss_min < -84.4601)
						{
							if(rss_max < -73.9504)
							{
								if(rss_std < 3.243195)
								{
									if(d_min < 105.6755)
									{
										if(d_min < 95.73415)
											return 0;
										else
										{
											if(rss_min < -84.9177)
												return 0;
											else
											{
												if(d_max < 274.2875)
													return 1;
												else
												{
													if(rss_max < -74.6978)
														return 0;
													else
														return 1;
												}
											}
										}
									}
									else
									{
										if(rss_max < -74.37515)
											return 1;
										else
										{
											if(rss_max < -74.3554)
												return 0;
											else
												return 1;
										}
									}
								}
								else
								{
									if(d_min < 131.2055)
										return 0;
									else
									{
										if(d_min < 132.844)
											return 1;
										else
											return 0;
									}
								}
							}
							else
							{
								if(d_min < 84.90925)
								{
									if(d_std < 77.0193)
									{
										if(rss_max < -70.1979)
										{
											if(rss_std < 4.431145)
											{
												if(d_max < 274.9505)
												{
													if(rss_min < -84.90655)
													{
														if(d_mean < 161.46)
														{
															if(rss_min < -84.94055)
															{
																if(d_max < 261.327)
																	return 1;
																else
																{
																	if(rss_mean < -79.2031)
																	{
																		if(d_max < 273.7405)
																			return 1;
																		else
																			return 0;
																	}
																	else
																		return 0;
																}
															}
															else
																return 0;
														}
														else
															return 0;
													}
													else
													{
														if(rss_max < -71.93095)
														{
															if(rss_max < -72.13455)
																return 1;
															else
																return 0;
														}
														else
															return 1;
													}
												}
												else
												{
													if(rss_mean < -80.2422)
													{
														if(rss_min < -84.9855)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
											}
											else
											{
												if(d_max < 298.5425)
												{
													if(d_min < 67.83705)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
										}
										else
										{
											if(d_max < 281.0165)
											{
												if(d_std < 66.61135)
												{
													if(d_max < 263.696)
													{
														if(d_max < 263.379)
														{
															if(d_min < 65.0785)
															{
																if(rss_min < -84.8154)
																{
																	if(d_max < 254.4835)
																		return 1;
																	else
																	{
																		if(rss_max < -67.3194)
																		{
																			if(d_mean < 163.226)
																				return 0;
																			else
																				return 1;
																		}
																		else
																			return 1;
																	}
																}
																else
																	return 1;
															}
															else
																return 1;
														}
														else
															return 0;
													}
													else
													{
														if(d_mean < 158.984)
															return 1;
														else
														{
															if(rss_std < 4.828455)
																return 1;
															else
															{
																if(rss_min < -84.8395)
																	return 1;
																else
																{
																	if(d_std < 59.23225)
																		return 1;
																	else
																		return 0;
																}
															}
														}
													}
												}
												else
												{
													if(rss_max < -66.20815)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(d_std < 64.85065)
													return 1;
												else
												{
													if(d_min < 64.6561)
														return 1;
													else
													{
														if(rss_mean < -79.8979)
														{
															if(rss_min < -84.84475)
																return 1;
															else
																return 0;
														}
														else
															return 1;
													}
												}
											}
										}
									}
									else
									{
										if(rss_std < 6.156925)
										{
											if(rss_max < -66.81395)
											{
												if(d_max < 335.076)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
										else
											return 1;
									}
								}
								else
								{
									if(d_mean < 143.14)
									{
										if(d_mean < 143.117)
											return 1;
										else
											return 0;
									}
									else
										return 1;
								}
							}
						}
						else
						{
							if(rss_mean < -78.12905)
							{
								if(d_std < 32.75745)
									return 0;
								else
								{
									if(d_min < 89.4698)
									{
										if(d_max < 274.011)
										{
											if(rss_max < -70.17305)
												return 0;
											else
											{
												if(d_max < 258.173)
													return 0;
												else
													return 1;
											}
										}
										else
											return 1;
									}
									else
										return 1;
								}
							}
							else
								return 1;
						}
					}
				}
				else
					return 2;
			}
		}
	}
	else
	{
		if(d_min < 39.7719)
		{
			if(rss_mean < -68.6395)
			{
				if(d_max < 239.683)
				{
					if(rss_min < -83.9597)
					{
						if(d_max < 215.2375)
						{
							if(rss_min < -84.38515)
								return 1;
							else
							{
								if(d_max < 171.399)
									return 0;
								else
								{
									if(d_std < 53.6042)
										return 1;
									else
										return 0;
								}
							}
						}
						else
						{
							if(rss_std < 9.355495)
							{
								if(d_std < 62.0926)
								{
									if(rss_min < -84.6878)
										return 1;
									else
										return 0;
								}
								else
									return 0;
							}
							else
								return 0;
						}
					}
					else
					{
						if(d_min < 33.3638)
							return 0;
						else
						{
							if(rss_std < 5.63513)
								return 1;
							else
								return 0;
						}
					}
				}
				else
					return 1;
			}
			else
				return 2;
		}
		else
		{
			if(d_min < 45.4108)
			{
				if(d_std < 66.2887)
				{
					if(rss_std < 6.24344)
						return 1;
					else
					{
						if(rss_max < -54.51265)
							return 1;
						else
							return 2;
					}
				}
				else
				{
					if(rss_max < -55.57995)
						return 1;
					else
						return 2;
				}
			}
			else
			{
				if(rss_max < -61.89015)
				{
					if(d_mean < 219.692)
						return 1;
					else
						return 2;
				}
				else
					return 2;
			}
		}
	}
}

int tree_13(float d_max, float d_min, float d_mean, float d_std, float rss_max, float rss_min, float rss_mean, float rss_std)
{
	if(rss_mean < -70.5974)
	{
		if(rss_max < -70.5048)
		{
			if(rss_max < -74.6994)
			{
				if(d_max < 241.272)
				{
					if(rss_min < -84.8855)
						return 0;
					else
					{
						if(d_max < 228.164)
						{
							if(d_min < 171.7565)
							{
								if(rss_max < -74.74)
								{
									if(d_std < 39.5024)
									{
										if(d_std < 8.142885)
										{
											if(d_max < 178.7185)
												return 0;
											else
												return 1;
										}
										else
										{
											if(rss_mean < -83.0715)
											{
												if(d_mean < 188.078)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
									}
									else
									{
										if(rss_mean < -82.1994)
										{
											if(d_max < 220.287)
												return 1;
											else
												return 0;
										}
										else
										{
											if(d_max < 194.707)
												return 1;
											else
												return 0;
										}
									}
								}
								else
								{
									if(rss_max < -74.7391)
										return 1;
									else
										return 0;
								}
							}
							else
							{
								if(rss_mean < -82.8847)
								{
									if(rss_std < 1.75226)
										return 0;
									else
										return 1;
								}
								else
									return 1;
							}
						}
						else
						{
							if(rss_max < -76.0401)
							{
								if(rss_min < -84.2605)
									return 0;
								else
								{
									if(rss_max < -77.37945)
										return 1;
									else
										return 0;
								}
							}
							else
							{
								if(d_min < 116.1345)
									return 0;
								else
									return 1;
							}
						}
					}
				}
				else
				{
					if(rss_max < -77.79035)
					{
						if(rss_std < 1.96092)
						{
							if(d_mean < 228.713)
							{
								if(rss_min < -84.88465)
								{
									if(rss_mean < -82.17635)
										return 0;
									else
									{
										if(d_max < 294.7665)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(d_max < 286.5855)
									{
										if(d_min < 173.4945)
										{
											if(rss_max < -79.75565)
												return 1;
											else
											{
												if(rss_min < -84.5337)
													return 1;
												else
												{
													if(rss_mean < -80.8819)
													{
														if(rss_mean < -81.1595)
															return 0;
														else
														{
															if(d_std < 41.09415)
																return 0;
															else
																return 1;
														}
													}
													else
														return 1;
												}
											}
										}
										else
											return 0;
									}
									else
										return 1;
								}
							}
							else
								return 1;
						}
						else
							return 0;
					}
					else
					{
						if(d_mean < 196.1675)
						{
							if(rss_std < 2.829405)
							{
								if(d_min < 122.083)
								{
									if(rss_min < -84.53745)
									{
										if(rss_mean < -81.3227)
										{
											if(d_mean < 195.4235)
												return 0;
											else
											{
												if(d_min < 118.056)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(d_mean < 183.7575)
											{
												if(rss_max < -77.0869)
													return 0;
												else
												{
													if(d_min < 105.85)
														return 0;
													else
													{
														if(rss_std < 2.80518)
															return 1;
														else
														{
															if(d_mean < 169.109)
																return 0;
															else
																return 1;
														}
													}
												}
											}
											else
											{
												if(d_max < 305.6505)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(rss_mean < -80.8169)
										{
											if(d_mean < 169.834)
												return 1;
											else
												return 0;
										}
										else
											return 0;
									}
								}
								else
								{
									if(rss_min < -84.65775)
									{
										if(rss_min < -84.6979)
											return 1;
										else
										{
											if(rss_max < -77.6961)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(rss_max < -76.6481)
										{
											if(d_min < 141.327)
											{
												if(rss_std < 1.99744)
												{
													if(d_max < 250.6255)
														return 1;
													else
														return 0;
												}
												else
													return 0;
											}
											else
												return 1;
										}
										else
											return 1;
									}
								}
							}
							else
							{
								if(d_min < 96.00335)
								{
									if(d_max < 269.3235)
										return 1;
									else
										return 0;
								}
								else
								{
									if(rss_max < -75.858)
										return 0;
									else
									{
										if(rss_std < 2.976745)
										{
											if(rss_mean < -80.8811)
											{
												if(d_max < 273.5335)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
										else
											return 0;
									}
								}
							}
						}
						else
							return 1;
					}
				}
			}
			else
			{
				if(d_min < 99.72235)
				{
					if(d_max < 235.0305)
					{
						if(rss_min < -84.2019)
						{
							if(d_std < 41.6722)
							{
								if(rss_max < -73.33985)
								{
									if(d_std < 39.04365)
									{
										if(rss_min < -84.8295)
											return 0;
										else
										{
											if(rss_min < -84.7623)
											{
												if(d_mean < 166.1355)
												{
													if(d_max < 223.862)
													{
														if(rss_max < -73.79685)
														{
															if(d_min < 97.0059)
																return 1;
															else
																return 0;
														}
														else
															return 0;
													}
													else
														return 0;
												}
												else
													return 0;
											}
											else
												return 0;
										}
									}
									else
										return 0;
								}
								else
								{
									if(d_min < 87.98055)
									{
										if(rss_max < -73.26895)
										{
											if(d_min < 81.71535)
												return 1;
											else
												return 0;
										}
										else
										{
											if(rss_max < -71.49725)
											{
												if(d_min < 82.7979)
												{
													if(rss_std < 3.611595)
													{
														if(rss_max < -73.05365)
														{
															if(rss_std < 3.572725)
																return 0;
															else
															{
																if(d_mean < 147.948)
																	return 1;
																else
																	return 0;
															}
														}
														else
															return 0;
													}
													else
													{
														if(rss_max < -73.05365)
															return 1;
														else
														{
															if(d_std < 35.48545)
															{
																if(d_max < 232.258)
																	return 1;
																else
																	return 0;
															}
															else
																return 0;
														}
													}
												}
												else
												{
													if(rss_mean < -79.71635)
													{
														if(rss_max < -72.7836)
															return 0;
														else
														{
															if(d_min < 85.4342)
															{
																if(d_mean < 179.504)
																{
																	if(d_max < 228.238)
																		return 1;
																	else
																		return 0;
																}
																else
																	return 0;
															}
															else
																return 0;
														}
													}
													else
														return 0;
												}
											}
											else
											{
												if(rss_min < -84.83625)
												{
													if(rss_max < -71.2677)
													{
														if(d_max < 220.5555)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
												else
												{
													if(d_min < 74.0218)
													{
														if(d_max < 232.348)
															return 0;
														else
															return 1;
													}
													else
													{
														if(rss_min < -84.2752)
														{
															if(rss_max < -71.47565)
															{
																if(rss_max < -71.4804)
																	return 1;
																else
																	return 0;
															}
															else
																return 1;
														}
														else
															return 0;
													}
												}
											}
										}
									}
									else
									{
										if(d_max < 225.911)
										{
											if(d_std < 39.8869)
												return 1;
											else
											{
												if(d_max < 215.4735)
													return 0;
												else
												{
													if(d_min < 92.95105)
														return 1;
													else
														return 0;
												}
											}
										}
										else
										{
											if(rss_min < -84.84505)
												return 0;
											else
												return 1;
										}
									}
								}
							}
							else
							{
								if(d_mean < 151.2435)
								{
									if(rss_std < 3.70605)
									{
										if(rss_max < -71.54915)
										{
											if(rss_min < -84.98095)
											{
												if(d_max < 231.769)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
										else
										{
											if(d_min < 72.8991)
												return 0;
											else
											{
												if(d_std < 43.4449)
												{
													if(d_min < 75.521)
														return 1;
													else
													{
														if(d_min < 77.816)
															return 0;
														else
															return 1;
													}
												}
												else
													return 1;
											}
										}
									}
									else
									{
										if(d_max < 234.1155)
										{
											if(rss_max < -71.04665)
												return 0;
											else
											{
												if(rss_max < -71.041)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(d_max < 234.2185)
												return 1;
											else
												return 0;
										}
									}
								}
								else
								{
									if(rss_mean < -79.6653)
										return 0;
									else
									{
										if(rss_min < -84.98405)
										{
											if(d_min < 81.76135)
												return 1;
											else
												return 0;
										}
										else
										{
											if(rss_std < 3.591845)
											{
												if(rss_max < -71.58775)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
									}
								}
							}
						}
						else
						{
							if(rss_max < -71.49825)
								return 0;
							else
							{
								if(rss_std < 3.40924)
								{
									if(rss_std < 3.36162)
										return 0;
									else
									{
										if(rss_min < -83.76665)
										{
											if(d_max < 218.0555)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
								}
								else
									return 0;
							}
						}
					}
					else
					{
						if(d_max < 274.9505)
						{
							if(rss_max < -73.6454)
							{
								if(rss_min < -84.97985)
								{
									if(d_max < 256.7505)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
							else
							{
								if(d_min < 86.13575)
								{
									if(rss_std < 2.966125)
									{
										if(rss_mean < -79.2927)
										{
											if(d_max < 237.6375)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
									else
									{
										if(d_mean < 161.021)
										{
											if(rss_max < -70.87425)
											{
												if(rss_min < -84.41165)
												{
													if(rss_min < -84.91905)
													{
														if(rss_min < -84.9438)
														{
															if(d_std < 49.58765)
																return 1;
															else
															{
																if(d_max < 264.6765)
																	return 1;
																else
																	return 0;
															}
														}
														else
															return 0;
													}
													else
													{
														if(d_std < 44.5973)
														{
															if(rss_std < 3.75585)
																return 1;
															else
															{
																if(d_min < 74.57995)
																	return 0;
																else
																	return 1;
															}
														}
														else
															return 1;
													}
												}
												else
												{
													if(rss_mean < -78.58965)
													{
														if(d_max < 252.1805)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
											}
											else
											{
												if(d_mean < 155.1345)
												{
													if(rss_max < -70.75675)
														return 0;
													else
													{
														if(d_std < 44.39975)
														{
															if(d_max < 236.881)
																return 0;
															else
															{
																if(d_mean < 153.8995)
																	return 1;
																else
																	return 0;
															}
														}
														else
															return 1;
													}
												}
												else
													return 0;
											}
										}
										else
										{
											if(rss_std < 3.159655)
											{
												if(d_max < 237.6375)
													return 0;
												else
													return 1;
											}
											else
											{
												if(rss_std < 3.34916)
												{
													if(d_min < 76.3344)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
										}
									}
								}
								else
								{
									if(d_max < 235.991)
									{
										if(rss_max < -72.65995)
											return 0;
										else
											return 1;
									}
									else
									{
										if(rss_max < -73.18465)
										{
											if(d_std < 42.0533)
												return 0;
											else
												return 1;
										}
										else
											return 1;
									}
								}
							}
						}
						else
						{
							if(rss_max < -73.99425)
								return 0;
							else
							{
								if(rss_std < 4.502625)
								{
									if(rss_std < 4.26786)
										return 1;
									else
									{
										if(d_mean < 162.8055)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(d_min < 68.96605)
										return 1;
									else
										return 0;
								}
							}
						}
					}
				}
				else
				{
					if(d_max < 234.2835)
					{
						if(rss_std < 2.462985)
						{
							if(d_mean < 193.0255)
							{
								if(rss_min < -84.9718)
								{
									if(d_mean < 187.1835)
										return 1;
									else
										return 0;
								}
								else
								{
									if(d_std < 16.9441)
										return 1;
									else
										return 0;
								}
							}
							else
								return 1;
						}
						else
						{
							if(rss_min < -84.3783)
							{
								if(d_max < 219.7145)
									return 1;
								else
								{
									if(rss_min < -84.88415)
									{
										if(d_min < 105.306)
										{
											if(rss_max < -72.5212)
												return 0;
											else
												return 1;
										}
										else
											return 1;
									}
									else
									{
										if(rss_mean < -80.5369)
										{
											if(d_min < 106.877)
											{
												if(rss_std < 2.896085)
												{
													if(d_std < 29.73845)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
											else
												return 1;
										}
										else
											return 0;
									}
								}
							}
							else
							{
								if(d_max < 198.717)
								{
									if(d_max < 172.9255)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
						}
					}
					else
					{
						if(rss_min < -84.48665)
						{
							if(rss_std < 2.17855)
							{
								if(d_max < 244.2775)
									return 0;
								else
									return 1;
							}
							else
							{
								if(rss_min < -84.96855)
								{
									if(rss_mean < -79.5005)
									{
										if(rss_min < -84.975)
											return 1;
										else
											return 0;
									}
									else
										return 0;
								}
								else
								{
									if(rss_std < 2.197125)
									{
										if(rss_min < -84.9269)
											return 0;
										else
											return 1;
									}
									else
										return 1;
								}
							}
						}
						else
						{
							if(rss_min < -84.34555)
								return 0;
							else
							{
								if(d_min < 136.7215)
									return 1;
								else
								{
									if(rss_min < -81.8359)
										return 0;
									else
										return 2;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			if(d_max < 234.982)
			{
				if(d_min < 71.0243)
				{
					if(rss_min < -84.5288)
					{
						if(d_max < 217.78)
						{
							if(d_min < 56.3599)
							{
								if(rss_min < -84.54415)
									return 1;
								else
									return 0;
							}
							else
							{
								if(rss_max < -68.2642)
								{
									if(rss_std < 4.794015)
									{
										if(rss_min < -84.94125)
											return 0;
										else
										{
											if(rss_max < -70.2176)
												return 0;
											else
											{
												if(d_std < 47.01665)
													return 1;
												else
												{
													if(d_max < 214.741)
														return 0;
													else
														return 1;
												}
											}
										}
									}
									else
									{
										if(rss_min < -84.81105)
											return 1;
										else
											return 0;
									}
								}
								else
									return 1;
							}
						}
						else
						{
							if(d_mean < 138.713)
							{
								if(d_std < 52.0112)
								{
									if(rss_std < 4.79306)
									{
										if(rss_mean < -75.29445)
										{
											if(rss_std < 3.590865)
												return 0;
											else
											{
												if(d_std < 39.51355)
													return 1;
												else
												{
													if(rss_mean < -77.6628)
													{
														if(d_mean < 136.2335)
															return 1;
														else
														{
															if(rss_std < 4.76258)
															{
																if(rss_min < -84.9348)
																{
																	if(d_max < 229.487)
																		return 0;
																	else
																		return 1;
																}
																else
																	return 1;
															}
															else
																return 0;
														}
													}
													else
													{
														if(rss_min < -84.853)
														{
															if(d_max < 224.8055)
																return 0;
															else
															{
																if(d_mean < 133.9675)
																{
																	if(d_max < 231.5005)
																		return 1;
																	else
																		return 0;
																}
																else
																	return 0;
															}
														}
														else
															return 1;
													}
												}
											}
										}
										else
											return 0;
									}
									else
									{
										if(rss_max < -65.5925)
										{
											if(rss_min < -84.8655)
											{
												if(d_min < 65.85675)
													return 0;
												else
													return 1;
											}
											else
											{
												if(rss_min < -84.859)
													return 1;
												else
												{
													if(rss_max < -69.1324)
														return 1;
													else
													{
														if(d_min < 54.02255)
															return 0;
														else
														{
															if(rss_max < -68.10335)
															{
																if(rss_min < -84.77975)
																	return 0;
																else
																{
																	if(d_min < 58.73755)
																		return 0;
																	else
																		return 1;
																}
															}
															else
																return 1;
														}
													}
												}
											}
										}
										else
										{
											if(d_std < 50.9133)
												return 1;
											else
											{
												if(d_min < 46.02235)
												{
													if(d_mean < 126.818)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
										}
									}
								}
								else
								{
									if(rss_min < -84.86965)
									{
										if(d_max < 224.8585)
										{
											if(rss_min < -84.965)
											{
												if(d_min < 44.65635)
													return 0;
												else
													return 1;
											}
											else
											{
												if(d_min < 52.63565)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(d_min < 67.17505)
												return 0;
											else
											{
												if(d_max < 232.691)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(rss_min < -84.8369)
										{
											if(rss_min < -84.85805)
											{
												if(d_std < 56.9625)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
										else
										{
											if(d_std < 58.78345)
											{
												if(rss_mean < -76.36035)
												{
													if(rss_max < -63.20805)
													{
														if(rss_max < -64.2081)
														{
															if(d_max < 229.457)
															{
																if(rss_max < -69.9343)
																	return 0;
																else
																{
																	if(rss_max < -65.26565)
																	{
																		if(d_min < 58.8792)
																			return 0;
																		else
																			return 1;
																	}
																	else
																		return 1;
																}
															}
															else
																return 0;
														}
														else
															return 0;
													}
													else
													{
														if(d_min < 33.59435)
															return 0;
														else
															return 1;
													}
												}
												else
												{
													if(d_max < 218.707)
														return 1;
													else
														return 0;
												}
											}
											else
												return 0;
										}
									}
								}
							}
							else
							{
								if(rss_std < 4.640335)
								{
									if(d_std < 50.61795)
									{
										if(rss_max < -68.29445)
										{
											if(d_min < 68.24945)
												return 0;
											else
											{
												if(rss_std < 3.526685)
													return 1;
												else
												{
													if(rss_std < 3.92614)
													{
														if(d_max < 223.8835)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
											}
										}
										else
										{
											if(d_max < 229.216)
											{
												if(d_max < 225.109)
												{
													if(d_min < 58.1404)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
											else
											{
												if(rss_std < 3.70545)
													return 1;
												else
													return 0;
											}
										}
									}
									else
									{
										if(rss_max < -69.42815)
											return 0;
										else
										{
											if(rss_mean < -80.327)
												return 0;
											else
												return 1;
										}
									}
								}
								else
								{
									if(rss_max < -62.58795)
									{
										if(d_max < 225.2095)
										{
											if(d_max < 224.727)
											{
												if(rss_max < -66.3344)
													return 0;
												else
												{
													if(rss_std < 5.0069)
														return 1;
													else
														return 0;
												}
											}
											else
											{
												if(rss_std < 5.067575)
													return 0;
												else
												{
													if(rss_max < -67.4288)
														return 0;
													else
														return 1;
												}
											}
										}
										else
											return 0;
									}
									else
									{
										if(d_min < 36.41335)
											return 0;
										else
										{
											if(rss_std < 7.8377)
												return 1;
											else
												return 0;
										}
									}
								}
							}
						}
					}
					else
					{
						if(rss_max < -66.86875)
						{
							if(d_std < 33.3135)
							{
								if(rss_min < -83.2454)
								{
									if(d_std < 29.6313)
										return 0;
									else
										return 1;
								}
								else
								{
									if(rss_max < -67.7288)
										return 0;
									else
									{
										if(d_max < 156.723)
											return 0;
										else
										{
											if(d_max < 157.644)
												return 1;
											else
												return 0;
										}
									}
								}
							}
							else
								return 0;
						}
						else
						{
							if(rss_min < -83.72905)
							{
								if(d_mean < 134.1205)
								{
									if(rss_std < 6.51879)
									{
										if(rss_max < -62.95615)
										{
											if(d_min < 46.70765)
												return 0;
											else
											{
												if(rss_min < -84.28495)
												{
													if(d_std < 40.77915)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
										}
										else
										{
											if(d_std < 39.32835)
											{
												if(d_mean < 113.5575)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
									}
									else
										return 0;
								}
								else
									return 0;
							}
							else
							{
								if(d_max < 216.196)
								{
									if(d_std < 45.50055)
									{
										if(d_max < 189.1655)
											return 0;
										else
										{
											if(rss_max < -60.64865)
											{
												if(rss_mean < -76.68815)
													return 0;
												else
												{
													if(rss_max < -66.7374)
														return 1;
													else
														return 0;
												}
											}
											else
												return 1;
										}
									}
									else
									{
										if(rss_max < -66.60125)
										{
											if(d_std < 85.84805)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
								}
								else
									return 1;
							}
						}
					}
				}
				else
				{
					if(d_mean < 172.8005)
					{
						if(d_mean < 143.5895)
						{
							if(d_max < 209.603)
							{
								if(d_max < 207.9175)
								{
									if(d_max < 186.145)
									{
										if(d_std < 24.7477)
											return 0;
										else
											return 1;
									}
									else
										return 1;
								}
								else
									return 0;
							}
							else
								return 1;
						}
						else
						{
							if(rss_min < -84.4156)
							{
								if(rss_mean < -78.92165)
								{
									if(d_mean < 162.857)
										return 1;
									else
									{
										if(d_min < 75.19795)
											return 0;
										else
										{
											if(rss_max < -67.9771)
												return 1;
											else
												return 0;
										}
									}
								}
								else
								{
									if(rss_std < 3.64383)
									{
										if(rss_std < 3.515415)
											return 0;
										else
										{
											if(d_mean < 146.2735)
												return 1;
											else
											{
												if(d_mean < 148.994)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(rss_std < 3.672265)
										{
											if(d_std < 43.629)
											{
												if(rss_max < -69.74795)
													return 1;
												else
												{
													if(d_max < 208.384)
														return 1;
													else
														return 0;
												}
											}
											else
												return 1;
										}
										else
											return 1;
									}
								}
							}
							else
								return 0;
						}
					}
					else
					{
						if(rss_mean < -80.7063)
							return 0;
						else
							return 1;
					}
				}
			}
			else
			{
				if(d_max < 240.96)
				{
					if(d_min < 68.90945)
					{
						if(rss_mean < -79.03555)
						{
							if(d_max < 235.743)
								return 1;
							else
							{
								if(rss_min < -84.9159)
								{
									if(rss_mean < -79.15295)
										return 0;
									else
									{
										if(d_max < 239.7905)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(rss_min < -84.80685)
										return 1;
									else
										return 0;
								}
							}
						}
						else
						{
							if(rss_std < 8.160865)
							{
								if(rss_max < -67.1079)
								{
									if(d_mean < 124.1315)
										return 0;
									else
									{
										if(rss_min < -84.38665)
										{
											if(d_min < 53.40255)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
								}
								else
									return 1;
							}
							else
								return 0;
						}
					}
					else
						return 1;
				}
				else
				{
					if(d_std < 73.9793)
					{
						if(d_min < 73.2827)
						{
							if(rss_mean < -79.3559)
							{
								if(rss_min < -84.5773)
								{
									if(rss_max < -67.785)
									{
										if(rss_std < 4.81701)
										{
											if(d_max < 267.2505)
											{
												if(d_max < 263.379)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
										else
											return 0;
									}
									else
										return 1;
								}
								else
								{
									if(d_max < 289.279)
										return 0;
									else
										return 1;
								}
							}
							else
							{
								if(rss_max < -67.6574)
								{
									if(d_min < 52.72185)
										return 0;
									else
									{
										if(d_min < 67.0289)
										{
											if(rss_min < -84.3969)
											{
												if(rss_max < -69.46155)
												{
													if(rss_mean < -78.59655)
														return 1;
													else
													{
														if(d_max < 261.647)
															return 1;
														else
															return 0;
													}
												}
												else
												{
													if(rss_std < 5.767015)
													{
														if(d_min < 64.5677)
															return 1;
														else
														{
															if(d_max < 248.2255)
																return 0;
															else
																return 1;
														}
													}
													else
														return 0;
												}
											}
											else
												return 0;
										}
										else
										{
											if(d_min < 73.2709)
												return 1;
											else
												return 0;
										}
									}
								}
								else
									return 1;
							}
						}
						else
						{
							if(rss_max < -64.9274)
								return 1;
							else
								return 2;
						}
					}
					else
					{
						if(rss_max < -67.45025)
						{
							if(d_min < 67.33805)
							{
								if(rss_std < 4.58)
									return 1;
								else
									return 0;
							}
							else
							{
								if(d_mean < 270.5315)
									return 1;
								else
									return 2;
							}
						}
						else
						{
							if(d_max < 347.4855)
								return 1;
							else
								return 2;
						}
					}
				}
			}
		}
	}
	else
	{
		if(rss_std < 10.49865)
			return 2;
		else
		{
			if(d_max < 271.8445)
			{
				if(d_min < 21.86685)
					return 0;
				else
				{
					if(d_max < 224.2105)
						return 0;
					else
						return 1;
				}
			}
			else
				return 2;
		}
	}
}

int tree_14(float d_max, float d_min, float d_mean, float d_std, float rss_max, float rss_min, float rss_mean, float rss_std)
{
	if(rss_max < -61.50405)
	{
		if(d_max < 234.994)
		{
			if(rss_min < -84.5296)
			{
				if(d_max < 218.0645)
				{
					if(rss_max < -74.62655)
					{
						if(d_min < 166.3545)
							return 0;
						else
							return 1;
					}
					else
					{
						if(rss_max < -68.2642)
						{
							if(d_min < 73.48005)
							{
								if(rss_max < -69.9955)
									return 0;
								else
								{
									if(d_min < 67.06725)
									{
										if(d_mean < 125.5845)
										{
											if(d_mean < 115.5845)
												return 1;
											else
												return 0;
										}
										else
										{
											if(rss_max < -69.40575)
												return 0;
											else
											{
												if(d_mean < 154.797)
													return 1;
												else
													return 0;
											}
										}
									}
									else
									{
										if(rss_std < 5.264975)
											return 1;
										else
										{
											if(d_mean < 130.1985)
												return 1;
											else
												return 0;
										}
									}
								}
							}
							else
							{
								if(d_std < 38.06775)
								{
									if(rss_min < -84.6019)
									{
										if(d_min < 81.05985)
										{
											if(d_min < 80.522)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
									else
									{
										if(d_mean < 151.114)
											return 1;
										else
										{
											if(d_max < 203.9195)
												return 1;
											else
												return 0;
										}
									}
								}
								else
								{
									if(rss_max < -71.91985)
									{
										if(d_mean < 154.6575)
											return 0;
										else
											return 1;
									}
									else
									{
										if(d_std < 47.0088)
											return 1;
										else
											return 0;
									}
								}
							}
						}
						else
						{
							if(d_std < 51.85115)
								return 1;
							else
							{
								if(rss_min < -84.6519)
									return 1;
								else
								{
									if(rss_max < -64.50795)
										return 0;
									else
										return 1;
								}
							}
						}
					}
				}
				else
				{
					if(rss_max < -70.5035)
					{
						if(rss_mean < -80.92205)
						{
							if(rss_max < -75.9693)
								return 0;
							else
							{
								if(d_min < 112.336)
								{
									if(rss_mean < -81.0928)
										return 0;
									else
									{
										if(rss_std < 2.94626)
										{
											if(rss_max < -72.8049)
												return 0;
											else
											{
												if(d_max < 224.169)
													return 0;
												else
													return 1;
											}
										}
										else
											return 0;
									}
								}
								else
								{
									if(rss_std < 2.447755)
									{
										if(rss_mean < -82.33645)
											return 0;
										else
										{
											if(rss_mean < -81.91825)
												return 1;
											else
											{
												if(d_min < 138.9885)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(d_std < 33.37015)
											return 1;
										else
											return 0;
									}
								}
							}
						}
						else
						{
							if(rss_std < 3.75548)
							{
								if(rss_max < -73.33985)
								{
									if(d_min < 116.1585)
									{
										if(d_max < 224.2765)
										{
											if(d_mean < 156.599)
												return 0;
											else
											{
												if(d_max < 222.924)
													return 0;
												else
												{
													if(d_std < 37.70855)
														return 1;
													else
													{
														if(d_max < 223.099)
															return 1;
														else
															return 0;
													}
												}
											}
										}
										else
										{
											if(d_mean < 149.5765)
											{
												if(rss_mean < -79.68525)
												{
													if(d_max < 229.7205)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
											else
											{
												if(rss_min < -84.7051)
													return 0;
												else
												{
													if(rss_min < -84.7031)
														return 1;
													else
														return 0;
												}
											}
										}
									}
									else
									{
										if(rss_max < -75.36165)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(d_min < 88.89285)
									{
										if(rss_max < -71.54915)
										{
											if(d_min < 77.3869)
												return 0;
											else
											{
												if(rss_max < -73.2655)
												{
													if(rss_max < -73.2766)
														return 0;
													else
														return 1;
												}
												else
												{
													if(d_std < 41.6704)
													{
														if(d_std < 40.8138)
														{
															if(rss_std < 3.612845)
																return 0;
															else
															{
																if(d_mean < 147.4765)
																	return 1;
																else
																	return 0;
															}
														}
														else
														{
															if(rss_max < -72.10325)
															{
																if(d_mean < 151.894)
																{
																	if(d_mean < 150.5805)
																		return 0;
																	else
																		return 1;
																}
																else
																	return 0;
															}
															else
															{
																if(d_max < 227.844)
																	return 1;
																else
																	return 0;
															}
														}
													}
													else
														return 0;
												}
											}
										}
										else
										{
											if(d_min < 73.099)
												return 0;
											else
											{
												if(rss_std < 3.43078)
												{
													if(d_min < 76.4002)
													{
														if(d_max < 231.3895)
															return 0;
														else
														{
															if(d_mean < 145.368)
																return 0;
															else
																return 1;
														}
													}
													else
													{
														if(d_min < 78.73785)
														{
															if(d_min < 77.93315)
																return 1;
															else
																return 0;
														}
														else
															return 1;
													}
												}
												else
												{
													if(rss_min < -84.74705)
													{
														if(rss_max < -71.23675)
														{
															if(d_max < 231.3895)
																return 0;
															else
																return 1;
														}
														else
														{
															if(d_std < 44.66225)
																return 0;
															else
																return 1;
														}
													}
													else
														return 0;
												}
											}
										}
									}
									else
									{
										if(d_std < 44.55755)
										{
											if(d_max < 225.88)
											{
												if(d_std < 31.1881)
													return 0;
												else
													return 1;
											}
											else
											{
												if(rss_max < -72.63815)
													return 0;
												else
												{
													if(rss_std < 3.086695)
													{
														if(rss_min < -84.69535)
														{
															if(d_max < 231.367)
																return 0;
															else
																return 1;
														}
														else
															return 1;
													}
													else
														return 1;
												}
											}
										}
										else
											return 0;
									}
								}
							}
							else
							{
								if(d_max < 234.1155)
								{
									if(d_std < 35.2662)
									{
										if(rss_max < -71.34475)
											return 1;
										else
											return 0;
									}
									else
									{
										if(d_std < 43.8236)
										{
											if(rss_max < -71.054)
												return 0;
											else
											{
												if(d_min < 73.6513)
													return 0;
												else
													return 1;
											}
										}
										else
											return 0;
									}
								}
								else
								{
									if(d_max < 234.1615)
										return 1;
									else
										return 0;
								}
							}
						}
					}
					else
					{
						if(d_min < 68.95505)
						{
							if(rss_mean < -78.5868)
							{
								if(rss_min < -84.88625)
									return 0;
								else
								{
									if(d_mean < 169.622)
									{
										if(rss_min < -84.7593)
										{
											if(rss_min < -84.7661)
											{
												if(rss_std < 4.509175)
												{
													if(d_max < 226.8485)
													{
														if(d_max < 223.105)
															return 1;
														else
															return 0;
													}
													else
														return 1;
												}
												else
												{
													if(rss_std < 4.560315)
													{
														if(d_min < 62.8815)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
											}
											else
												return 1;
										}
										else
										{
											if(d_mean < 139.3895)
												return 1;
											else
												return 0;
										}
									}
									else
										return 0;
								}
							}
							else
							{
								if(rss_min < -84.8864)
								{
									if(d_mean < 132.9665)
									{
										if(rss_mean < -76.8365)
										{
											if(rss_mean < -77.9397)
												return 1;
											else
											{
												if(rss_min < -84.963)
												{
													if(rss_std < 6.42853)
														return 1;
													else
														return 0;
												}
												else
												{
													if(rss_min < -84.91925)
														return 0;
													else
													{
														if(d_max < 227.6035)
															return 1;
														else
															return 0;
													}
												}
											}
										}
										else
										{
											if(rss_min < -84.89825)
											{
												if(d_min < 62.59345)
													return 0;
												else
													return 1;
											}
											else
											{
												if(d_min < 46.6334)
													return 1;
												else
													return 0;
											}
										}
									}
									else
									{
										if(rss_std < 4.593315)
										{
											if(d_std < 47.67435)
												return 1;
											else
												return 0;
										}
										else
										{
											if(rss_min < -84.98565)
												return 1;
											else
												return 0;
										}
									}
								}
								else
								{
									if(d_std < 48.7826)
									{
										if(d_max < 224.8055)
										{
											if(d_max < 224.4795)
											{
												if(rss_mean < -75.0661)
												{
													if(d_std < 48.05295)
														return 1;
													else
													{
														if(d_max < 220.3615)
															return 1;
														else
															return 0;
													}
												}
												else
													return 0;
											}
											else
												return 0;
										}
										else
										{
											if(rss_mean < -78.5374)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(d_mean < 138.3255)
										{
											if(rss_mean < -78.0403)
												return 1;
											else
											{
												if(rss_std < 4.72543)
												{
													if(d_max < 225.1985)
														return 0;
													else
														return 1;
												}
												else
												{
													if(rss_max < -66.40195)
													{
														if(rss_min < -84.76515)
														{
															if(d_max < 222.6635)
															{
																if(d_mean < 122.113)
																	return 0;
																else
																	return 1;
															}
															else
															{
																if(d_max < 229.875)
																{
																	if(d_min < 58.8792)
																	{
																		if(d_max < 227.701)
																			return 0;
																		else
																			return 1;
																	}
																	else
																	{
																		if(rss_std < 5.029945)
																			return 1;
																		else
																		{
																			if(d_max < 227.6455)
																				return 0;
																			else
																				return 1;
																		}
																	}
																}
																else
																	return 0;
															}
														}
														else
															return 0;
													}
													else
													{
														if(d_min < 46.8008)
														{
															if(rss_max < -62.9076)
															{
																if(d_max < 231.493)
																	return 0;
																else
																	return 1;
															}
															else
															{
																if(d_mean < 126.37)
																	return 0;
																else
																	return 1;
															}
														}
														else
															return 1;
													}
												}
											}
										}
										else
										{
											if(rss_min < -84.8312)
											{
												if(d_std < 55.3372)
												{
													if(d_std < 50.98665)
														return 0;
													else
													{
														if(rss_std < 4.793795)
															return 1;
														else
														{
															if(rss_max < -63.8638)
															{
																if(d_mean < 140.399)
																	return 1;
																else
																	return 0;
															}
															else
																return 1;
														}
													}
												}
												else
													return 0;
											}
											else
												return 0;
										}
									}
								}
							}
						}
						else
						{
							if(d_mean < 143.357)
								return 1;
							else
							{
								if(d_min < 70.8241)
								{
									if(rss_std < 3.665305)
									{
										if(d_max < 228.235)
											return 1;
										else
											return 0;
									}
									else
										return 0;
								}
								else
								{
									if(d_std < 33.9805)
									{
										if(d_mean < 169.506)
										{
											if(rss_mean < -79.15425)
												return 1;
											else
												return 0;
										}
										else
											return 0;
									}
									else
									{
										if(rss_mean < -78.8958)
										{
											if(d_max < 234.675)
											{
												if(d_mean < 171.8925)
												{
													if(rss_mean < -78.92165)
														return 1;
													else
													{
														if(rss_std < 3.410495)
															return 0;
														else
															return 1;
													}
												}
												else
												{
													if(rss_mean < -80.99865)
														return 0;
													else
														return 1;
												}
											}
											else
												return 0;
										}
										else
										{
											if(rss_std < 3.6349)
											{
												if(d_mean < 144.366)
													return 1;
												else
												{
													if(rss_mean < -78.85265)
													{
														if(d_mean < 147.101)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
											}
											else
											{
												if(rss_std < 3.69909)
												{
													if(rss_max < -69.76125)
														return 1;
													else
													{
														if(d_min < 82.01545)
															return 1;
														else
															return 0;
													}
												}
												else
													return 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else
			{
				if(d_max < 224.862)
				{
					if(rss_min < -83.27885)
					{
						if(rss_mean < -77.42775)
						{
							if(d_max < 198.0245)
							{
								if(d_mean < 123.8745)
									return 1;
								else
								{
									if(rss_min < -83.68895)
									{
										if(rss_std < 2.62748)
											return 0;
										else
										{
											if(d_std < 24.2457)
												return 1;
											else
												return 0;
										}
									}
									else
										return 0;
								}
							}
							else
							{
								if(rss_max < -73.3393)
								{
									if(rss_max < -80.7413)
									{
										if(d_min < 103.544)
											return 1;
										else
											return 0;
									}
									else
										return 0;
								}
								else
								{
									if(rss_max < -73.33805)
										return 1;
									else
									{
										if(rss_max < -62.58715)
										{
											if(rss_mean < -78.6546)
												return 0;
											else
											{
												if(rss_min < -83.9034)
												{
													if(d_max < 207.272)
													{
														if(d_min < 70.50575)
															return 0;
														else
														{
															if(d_std < 35.86905)
																return 0;
															else
																return 1;
														}
													}
													else
													{
														if(d_max < 223.664)
														{
															if(d_min < 86.7702)
															{
																if(d_mean < 132.659)
																{
																	if(rss_max < -66.72475)
																		return 0;
																	else
																		return 1;
																}
																else
																{
																	if(d_std < 45.5574)
																	{
																		if(d_std < 45.1616)
																			return 0;
																		else
																		{
																			if(d_std < 45.21305)
																				return 1;
																			else
																			{
																				if(d_std < 45.5278)
																					return 0;
																				else
																					return 1;
																			}
																		}
																	}
																	else
																		return 0;
																}
															}
															else
																return 1;
														}
														else
														{
															if(d_min < 73.72235)
																return 0;
															else
																return 1;
														}
													}
												}
												else
													return 0;
											}
										}
										else
										{
											if(d_mean < 134.7115)
												return 1;
											else
												return 0;
										}
									}
								}
							}
						}
						else
						{
							if(rss_std < 4.35628)
							{
								if(rss_max < -68.38695)
								{
									if(rss_min < -83.93485)
									{
										if(d_min < 71.4909)
											return 0;
										else
										{
											if(d_mean < 129.8365)
												return 1;
											else
												return 0;
										}
									}
									else
										return 0;
								}
								else
								{
									if(rss_min < -84.2172)
										return 0;
									else
										return 1;
								}
							}
							else
							{
								if(rss_max < -62.89085)
								{
									if(rss_min < -84.4952)
									{
										if(d_max < 209.522)
											return 1;
										else
											return 0;
									}
									else
									{
										if(rss_min < -84.2014)
										{
											if(d_std < 48.18975)
											{
												if(rss_std < 4.948795)
													return 0;
												else
												{
													if(d_std < 37.90365)
														return 0;
													else
														return 1;
												}
											}
											else
												return 0;
										}
										else
											return 0;
									}
								}
								else
								{
									if(rss_min < -83.39075)
									{
										if(d_std < 55.9227)
										{
											if(d_min < 31.1432)
												return 0;
											else
											{
												if(d_max < 165.9755)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(rss_std < 6.377445)
												return 1;
											else
												return 0;
										}
									}
									else
										return 0;
								}
							}
						}
					}
					else
					{
						if(rss_max < -80.186)
						{
							if(d_min < 127.1045)
								return 1;
							else
							{
								if(rss_std < 1.436705)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(d_std < 90.14775)
								return 0;
							else
								return 1;
						}
					}
				}
				else
				{
					if(d_min < 98.34425)
					{
						if(d_max < 225.6205)
						{
							if(d_std < 50.95825)
							{
								if(d_mean < 157.8625)
									return 1;
								else
									return 0;
							}
							else
								return 0;
						}
						else
						{
							if(d_mean < 114.0455)
							{
								if(d_min < 66.1636)
									return 1;
								else
									return 0;
							}
							else
								return 0;
						}
					}
					else
					{
						if(rss_mean < -78.9419)
						{
							if(d_max < 229.239)
								return 0;
							else
							{
								if(rss_std < 2.56715)
								{
									if(d_max < 229.562)
										return 1;
									else
										return 0;
								}
								else
									return 1;
							}
						}
						else
						{
							if(d_min < 107.9985)
								return 1;
							else
								return 0;
						}
					}
				}
			}
		}
		else
		{
			if(d_mean < 269.805)
			{
				if(rss_max < -76.0856)
				{
					if(d_min < 131.7315)
					{
						if(d_max < 307.5625)
						{
							if(d_min < 103.544)
								return 1;
							else
							{
								if(d_max < 246.495)
									return 0;
								else
								{
									if(rss_min < -84.65815)
									{
										if(rss_mean < -80.09805)
										{
											if(d_std < 32.37395)
												return 1;
											else
											{
												if(d_max < 246.707)
													return 1;
												else
												{
													if(rss_std < 1.9968)
														return 1;
													else
													{
														if(d_min < 128.2045)
															return 0;
														else
														{
															if(d_min < 128.3915)
																return 1;
															else
															{
																if(d_mean < 168.319)
																	return 1;
																else
																	return 0;
															}
														}
													}
												}
											}
										}
										else
											return 1;
									}
									else
									{
										if(d_max < 246.753)
											return 1;
										else
											return 0;
									}
								}
							}
						}
						else
						{
							if(rss_min < -84.98265)
								return 1;
							else
							{
								if(rss_min < -84.92655)
									return 0;
								else
									return 1;
							}
						}
					}
					else
					{
						if(rss_max < -77.8509)
						{
							if(d_mean < 229.037)
							{
								if(rss_min < -84.8841)
								{
									if(rss_max < -78.19715)
										return 0;
									else
									{
										if(d_max < 260.806)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(d_mean < 218.7935)
									{
										if(d_max < 245.8015)
											return 0;
										else
										{
											if(rss_std < 1.442015)
											{
												if(rss_min < -82.8926)
												{
													if(d_std < 31.56425)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
											else
											{
												if(rss_min < -84.8519)
													return 0;
												else
												{
													if(d_max < 254.03)
													{
														if(d_max < 246.754)
															return 1;
														else
															return 0;
													}
													else
														return 1;
												}
											}
										}
									}
									else
										return 1;
								}
							}
							else
								return 1;
						}
						else
							return 1;
					}
				}
				else
				{
					if(d_max < 249.19)
					{
						if(d_mean < 153.801)
						{
							if(rss_min < -84.25925)
							{
								if(d_max < 236.4145)
								{
									if(rss_max < -66.811)
									{
										if(d_max < 235.8285)
											return 1;
										else
										{
											if(d_max < 235.9075)
												return 0;
											else
											{
												if(d_min < 53.40255)
													return 0;
												else
													return 1;
											}
										}
									}
									else
										return 1;
								}
								else
								{
									if(rss_std < 4.842715)
									{
										if(rss_max < -73.60975)
											return 0;
										else
										{
											if(d_mean < 148.7575)
												return 1;
											else
											{
												if(rss_std < 2.82445)
													return 0;
												else
												{
													if(d_max < 246.2185)
														return 1;
													else
													{
														if(d_mean < 148.776)
															return 0;
														else
														{
															if(d_max < 247.2665)
																return 0;
															else
																return 1;
														}
													}
												}
											}
										}
									}
									else
									{
										if(rss_max < -67.47195)
										{
											if(d_min < 55.45975)
												return 0;
											else
											{
												if(rss_mean < -78.9273)
													return 0;
												else
													return 1;
											}
										}
										else
											return 1;
									}
								}
							}
							else
							{
								if(d_mean < 136.3245)
								{
									if(rss_max < -71.5258)
										return 0;
									else
									{
										if(rss_std < 3.47135)
										{
											if(d_min < 68.6963)
												return 0;
											else
												return 1;
										}
										else
											return 1;
									}
								}
								else
								{
									if(d_std < 34.3732)
										return 1;
									else
									{
										if(d_min < 92.1104)
										{
											if(rss_mean < -78.5311)
											{
												if(rss_max < -71.5979)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
										else
											return 1;
									}
								}
							}
						}
						else
						{
							if(d_min < 93.34395)
							{
								if(rss_max < -70.1178)
								{
									if(rss_std < 3.972595)
									{
										if(rss_mean < -80.74025)
											return 0;
										else
										{
											if(rss_std < 2.90296)
												return 0;
											else
											{
												if(rss_min < -84.9718)
													return 0;
												else
												{
													if(rss_max < -72.8568)
														return 0;
													else
													{
														if(d_max < 248.8065)
															return 1;
														else
															return 0;
													}
												}
											}
										}
									}
									else
									{
										if(rss_mean < -79.02375)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(d_min < 66.89015)
									{
										if(d_max < 240.1455)
										{
											if(d_std < 58.05225)
												return 0;
											else
											{
												if(d_max < 235.817)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(rss_min < -84.92785)
												return 0;
											else
											{
												if(rss_max < -68.4768)
													return 0;
												else
													return 1;
											}
										}
									}
									else
										return 1;
								}
							}
							else
							{
								if(rss_min < -84.91585)
								{
									if(rss_min < -84.98265)
										return 1;
									else
									{
										if(rss_max < -73.1638)
										{
											if(rss_min < -84.96225)
												return 0;
											else
											{
												if(d_max < 243.5555)
													return 0;
												else
													return 1;
											}
										}
										else
											return 1;
									}
								}
								else
								{
									if(rss_mean < -79.1796)
									{
										if(rss_std < 2.11288)
										{
											if(d_max < 244.028)
												return 0;
											else
												return 1;
										}
										else
										{
											if(rss_std < 3.487675)
												return 1;
											else
											{
												if(rss_max < -73.5413)
													return 0;
												else
													return 1;
											}
										}
									}
									else
										return 0;
								}
							}
						}
					}
					else
					{
						if(rss_max < -70.1979)
						{
							if(d_min < 104.0345)
							{
								if(rss_std < 4.417285)
								{
									if(rss_mean < -81.3081)
									{
										if(rss_std < 3.457325)
										{
											if(rss_max < -74.74875)
												return 0;
											else
												return 1;
										}
										else
										{
											if(rss_max < -70.8862)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(d_max < 274.9505)
										{
											if(rss_std < 2.68573)
											{
												if(d_max < 250.6095)
													return 1;
												else
													return 0;
											}
											else
											{
												if(rss_min < -84.5142)
												{
													if(d_max < 274.863)
													{
														if(rss_std < 3.86818)
														{
															if(rss_std < 3.20569)
															{
																if(d_min < 91.3288)
																{
																	if(d_min < 91.26325)
																	{
																		if(rss_mean < -79.4119)
																			return 1;
																		else
																		{
																			if(rss_min < -84.9571)
																				return 1;
																			else
																				return 0;
																		}
																	}
																	else
																		return 0;
																}
																else
																{
																	if(rss_mean < -79.071)
																	{
																		if(rss_min < -84.777)
																			return 1;
																		else
																		{
																			if(rss_max < -73.4252)
																			{
																				if(d_mean < 165.724)
																					return 1;
																				else
																					return 0;
																			}
																			else
																				return 1;
																		}
																	}
																	else
																		return 0;
																}
															}
															else
															{
																if(d_std < 46.38155)
																{
																	if(rss_max < -73.5259)
																	{
																		if(d_mean < 166.5735)
																			return 1;
																		else
																			return 0;
																	}
																	else
																	{
																		if(d_max < 272.111)
																			return 1;
																		else
																		{
																			if(d_max < 272.356)
																				return 0;
																			else
																				return 1;
																		}
																	}
																}
																else
																{
																	if(d_min < 82.73485)
																	{
																		if(d_max < 269.011)
																		{
																			if(d_mean < 159.112)
																				return 1;
																			else
																				return 0;
																		}
																		else
																		{
																			if(d_min < 75.2913)
																				return 1;
																			else
																				return 0;
																		}
																	}
																	else
																	{
																		if(rss_max < -73.47745)
																			return 0;
																		else
																			return 1;
																	}
																}
															}
														}
														else
														{
															if(d_mean < 155.677)
															{
																if(d_min < 74.08145)
																{
																	if(rss_max < -71.56005)
																		return 1;
																	else
																	{
																		if(d_max < 258.345)
																			return 1;
																		else
																		{
																			if(d_mean < 132.418)
																				return 1;
																			else
																				return 0;
																		}
																	}
																}
																else
																	return 1;
															}
															else
															{
																if(rss_max < -70.77805)
																	return 0;
																else
																{
																	if(rss_max < -70.33435)
																		return 1;
																	else
																		return 0;
																}
															}
														}
													}
													else
														return 0;
												}
												else
												{
													if(rss_max < -70.578)
													{
														if(d_min < 96.45915)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
											}
										}
										else
										{
											if(rss_max < -73.99425)
											{
												if(rss_std < 2.75305)
												{
													if(d_max < 299.9835)
														return 1;
													else
														return 0;
												}
												else
													return 0;
											}
											else
											{
												if(rss_min < -84.9856)
												{
													if(rss_min < -84.9859)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
										}
									}
								}
								else
								{
									if(d_mean < 140.7705)
									{
										if(d_max < 300.6645)
											return 1;
										else
											return 0;
									}
									else
										return 0;
								}
							}
							else
							{
								if(rss_std < 1.94848)
								{
									if(rss_max < -73.80465)
									{
										if(d_std < 23.15125)
											return 0;
										else
											return 1;
									}
									else
									{
										if(rss_max < -73.311)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(rss_mean < -78.7112)
									{
										if(rss_max < -74.0464)
										{
											if(rss_max < -74.4181)
											{
												if(d_min < 105.6755)
													return 0;
												else
													return 1;
											}
											else
											{
												if(rss_min < -84.92485)
												{
													if(rss_std < 3.00459)
													{
														if(d_min < 106.3855)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
												else
													return 1;
											}
										}
										else
											return 1;
									}
									else
									{
										if(d_mean < 161.8125)
											return 1;
										else
											return 0;
									}
								}
							}
						}
						else
						{
							if(d_min < 66.9062)
							{
								if(rss_max < -67.785)
								{
									if(d_std < 70.30485)
									{
										if(d_max < 281.7515)
										{
											if(d_min < 58.89905)
											{
												if(rss_std < 4.56075)
													return 1;
												else
													return 0;
											}
											else
											{
												if(rss_max < -69.38175)
												{
													if(d_mean < 133.8005)
													{
														if(rss_mean < -78.4796)
															return 1;
														else
															return 0;
													}
													else
													{
														if(rss_min < -84.89495)
															return 1;
														else
															return 0;
													}
												}
												else
												{
													if(d_mean < 151.0075)
														return 1;
													else
													{
														if(rss_min < -84.93065)
															return 1;
														else
														{
															if(d_min < 62.9479)
																return 1;
															else
																return 0;
														}
													}
												}
											}
										}
										else
										{
											if(d_mean < 166.7975)
												return 1;
											else
											{
												if(d_max < 310.382)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(rss_min < -84.94605)
										{
											if(d_max < 294.8025)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
								}
								else
									return 1;
							}
							else
							{
								if(d_mean < 227.8335)
									return 1;
								else
									return 2;
							}
						}
					}
				}
			}
			else
				return 2;
		}
	}
	else
	{
		if(rss_mean < -69.75165)
		{
			if(rss_min < -83.9597)
			{
				if(d_std < 63.28835)
				{
					if(rss_std < 9.59131)
					{
						if(d_std < 39.11965)
							return 0;
						else
						{
							if(rss_min < -84.5671)
								return 1;
							else
							{
								if(rss_min < -84.5648)
									return 0;
								else
								{
									if(rss_std < 6.575515)
										return 1;
									else
									{
										if(rss_std < 7.145255)
											return 0;
										else
										{
											if(d_mean < 116.612)
											{
												if(d_min < 17.60485)
													return 1;
												else
												{
													if(d_max < 218.7365)
														return 0;
													else
														return 1;
												}
											}
											else
												return 0;
										}
									}
								}
							}
						}
					}
					else
					{
						if(d_max < 243.2985)
							return 0;
						else
							return 1;
					}
				}
				else
				{
					if(rss_max < -59.34115)
					{
						if(d_min < 30.8501)
						{
							if(d_max < 252.414)
								return 0;
							else
								return 1;
						}
						else
							return 1;
					}
					else
					{
						if(d_max < 237.569)
							return 0;
						else
							return 1;
					}
				}
			}
			else
			{
				if(d_mean < 136.804)
				{
					if(d_min < 33.3638)
					{
						if(rss_std < 10.71095)
							return 0;
						else
						{
							if(d_max < 224.2105)
								return 0;
							else
								return 1;
						}
					}
					else
					{
						if(rss_max < -60.1978)
							return 0;
						else
							return 1;
					}
				}
				else
				{
					if(d_max < 228.871)
						return 0;
					else
					{
						if(d_max < 315.808)
							return 1;
						else
							return 2;
					}
				}
			}
		}
		else
		{
			if(rss_std < 12.33135)
				return 2;
			else
				return 1;
		}
	}
}

int tree_15(float d_max, float d_min, float d_mean, float d_std, float rss_max, float rss_min, float rss_mean, float rss_std)
{
	if(rss_mean < -70.57365)
	{
		if(d_max < 234.994)
		{
			if(rss_max < -70.5105)
			{
				if(rss_max < -74.6755)
				{
					if(rss_min < -84.8855)
						return 0;
					else
					{
						if(rss_min < -84.88495)
							return 1;
						else
						{
							if(d_max < 234.4045)
							{
								if(d_min < 168.82)
								{
									if(d_mean < 176.9225)
									{
										if(d_max < 229.4915)
										{
											if(rss_mean < -82.3134)
											{
												if(d_max < 220.287)
													return 1;
												else
													return 0;
											}
											else
											{
												if(d_min < 94.80835)
												{
													if(rss_min < -84.7657)
													{
														if(d_min < 94.65235)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
												else
												{
													if(rss_std < 0.8241275)
													{
														if(d_std < 26.532)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
											}
										}
										else
										{
											if(rss_min < -84.2605)
												return 0;
											else
											{
												if(d_max < 229.671)
													return 1;
												else
													return 0;
											}
										}
									}
									else
										return 0;
								}
								else
								{
									if(rss_mean < -82.19385)
									{
										if(rss_std < 1.45845)
										{
											if(d_std < 20.99775)
												return 0;
											else
											{
												if(d_min < 169.3675)
													return 0;
												else
													return 1;
											}
										}
										else
											return 1;
									}
									else
									{
										if(d_std < 17.8206)
											return 1;
										else
										{
											if(d_max < 213.668)
												return 0;
											else
												return 1;
										}
									}
								}
							}
							else
							{
								if(d_max < 234.621)
									return 1;
								else
									return 0;
							}
						}
					}
				}
				else
				{
					if(d_min < 101.9425)
					{
						if(rss_std < 3.842265)
						{
							if(rss_max < -71.5086)
							{
								if(d_std < 41.35555)
								{
									if(rss_min < -84.6979)
									{
										if(rss_max < -73.33985)
										{
											if(d_min < 94.78375)
											{
												if(d_max < 216.343)
												{
													if(d_mean < 157.747)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
											else
											{
												if(d_min < 94.7927)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(d_max < 223.185)
											{
												if(d_mean < 157.767)
												{
													if(rss_min < -84.9791)
														return 1;
													else
													{
														if(d_min < 82.2784)
														{
															if(rss_max < -73.05365)
															{
																if(d_min < 78.7563)
																	return 1;
																else
																	return 0;
															}
															else
																return 0;
														}
														else
														{
															if(d_max < 206.527)
																return 0;
															else
																return 1;
														}
													}
												}
												else
												{
													if(d_min < 81.9725)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(rss_mean < -79.5368)
												{
													if(d_max < 228.6255)
													{
														if(d_max < 228.1845)
														{
															if(rss_max < -72.67775)
															{
																if(rss_max < -72.8049)
																	return 0;
																else
																	return 1;
															}
															else
																return 0;
														}
														else
															return 1;
													}
													else
														return 0;
												}
												else
												{
													if(d_mean < 141.8055)
														return 0;
													else
													{
														if(d_max < 228.126)
															return 0;
														else
														{
															if(d_max < 231.372)
															{
																if(d_mean < 148.972)
																	return 1;
																else
																{
																	if(d_min < 84.8217)
																		return 0;
																	else
																		return 1;
																}
															}
															else
																return 0;
														}
													}
												}
											}
										}
									}
									else
										return 0;
								}
								else
								{
									if(d_min < 94.9007)
									{
										if(rss_std < 3.31289)
										{
											if(rss_min < -84.98205)
											{
												if(d_min < 90.1791)
													return 0;
												else
													return 1;
											}
											else
											{
												if(d_mean < 151.216)
												{
													if(d_std < 41.68335)
													{
														if(rss_mean < -79.68335)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
												else
													return 0;
											}
										}
										else
											return 0;
									}
									else
									{
										if(d_mean < 143.5275)
											return 1;
										else
											return 0;
									}
								}
							}
							else
							{
								if(d_min < 74.0218)
								{
									if(d_max < 232.93)
										return 0;
									else
									{
										if(d_max < 234.0185)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(d_min < 80.84575)
									{
										if(rss_min < -84.277)
										{
											if(d_min < 76.85825)
											{
												if(rss_max < -71.3898)
													return 1;
												else
												{
													if(d_max < 216.1275)
														return 1;
													else
													{
														if(rss_min < -84.86025)
														{
															if(d_max < 230.664)
																return 0;
															else
																return 1;
														}
														else
															return 0;
													}
												}
											}
											else
												return 1;
										}
										else
										{
											if(d_min < 74.6482)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(rss_min < -82.37)
										{
											if(d_mean < 165.1415)
												return 1;
											else
												return 0;
										}
										else
											return 0;
									}
								}
							}
						}
						else
						{
							if(d_std < 46.20905)
							{
								if(d_max < 234.1155)
								{
									if(rss_max < -71.04665)
										return 0;
									else
									{
										if(rss_max < -71.0443)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(d_min < 77.11255)
										return 0;
									else
										return 1;
								}
							}
							else
								return 0;
						}
					}
					else
					{
						if(rss_min < -84.39025)
						{
							if(rss_std < 2.373535)
							{
								if(d_mean < 192.9755)
									return 0;
								else
									return 1;
							}
							else
							{
								if(d_max < 219.7145)
									return 1;
								else
								{
									if(d_min < 105.306)
									{
										if(d_mean < 144.765)
											return 1;
										else
											return 0;
									}
									else
									{
										if(d_std < 29.2938)
										{
											if(rss_max < -73.05995)
												return 1;
											else
											{
												if(d_max < 228.4315)
													return 0;
												else
													return 1;
											}
										}
										else
											return 1;
									}
								}
							}
						}
						else
						{
							if(d_max < 198.8075)
							{
								if(rss_max < -72.62445)
									return 1;
								else
									return 0;
							}
							else
							{
								if(d_max < 227.7485)
									return 0;
								else
									return 1;
							}
						}
					}
				}
			}
			else
			{
				if(d_std < 49.9733)
				{
					if(d_min < 71.0243)
					{
						if(rss_max < -67.0051)
						{
							if(rss_max < -68.2635)
							{
								if(d_min < 62.5733)
								{
									if(rss_max < -68.71175)
										return 0;
									else
									{
										if(rss_max < -68.7092)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(d_max < 226.935)
									{
										if(rss_min < -84.60515)
										{
											if(rss_mean < -78.7126)
											{
												if(rss_max < -69.95755)
												{
													if(rss_std < 3.85736)
														return 1;
													else
														return 0;
												}
												else
													return 0;
											}
											else
											{
												if(d_mean < 123.923)
												{
													if(rss_max < -68.7302)
													{
														if(d_min < 66.66565)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
												else
												{
													if(d_std < 48.55665)
														return 1;
													else
														return 0;
												}
											}
										}
										else
											return 0;
									}
									else
									{
										if(rss_max < -69.4211)
										{
											if(d_min < 67.4899)
											{
												if(rss_mean < -78.77915)
													return 0;
												else
												{
													if(d_mean < 135.3425)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(rss_min < -84.89445)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(d_max < 229.9815)
												return 0;
											else
											{
												if(d_max < 231.5105)
													return 1;
												else
												{
													if(d_min < 66.74715)
														return 0;
													else
														return 1;
												}
											}
										}
									}
								}
							}
							else
							{
								if(d_min < 57.60195)
								{
									if(d_max < 195.3955)
										return 0;
									else
									{
										if(d_max < 197.1375)
											return 1;
										else
										{
											if(d_min < 56.541)
											{
												if(rss_mean < -77.16825)
													return 0;
												else
												{
													if(d_min < 49.23275)
														return 1;
													else
														return 0;
												}
											}
											else
												return 1;
										}
									}
								}
								else
								{
									if(rss_min < -84.4779)
									{
										if(d_max < 222.112)
											return 1;
										else
										{
											if(d_max < 225.5485)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(d_mean < 119.307)
										{
											if(rss_min < -83.1956)
												return 1;
											else
												return 0;
										}
										else
											return 0;
									}
								}
							}
						}
						else
						{
							if(rss_min < -83.96075)
							{
								if(d_max < 173.4935)
									return 0;
								else
								{
									if(rss_max < -65.00105)
									{
										if(d_min < 51.13785)
										{
											if(d_min < 48.1152)
												return 0;
											else
											{
												if(d_min < 48.86745)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(d_mean < 157.868)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(rss_min < -84.38465)
											return 1;
										else
										{
											if(d_mean < 132.247)
												return 1;
											else
												return 0;
										}
									}
								}
							}
							else
							{
								if(rss_min < -82.9272)
								{
									if(d_mean < 125.7545)
									{
										if(d_min < 50.04065)
										{
											if(rss_min < -83.56135)
											{
												if(d_std < 41.9474)
												{
													if(d_max < 194.4835)
														return 1;
													else
														return 0;
												}
												else
												{
													if(d_max < 193.0335)
														return 1;
													else
														return 0;
												}
											}
											else
												return 1;
										}
										else
											return 1;
									}
									else
										return 0;
								}
								else
									return 0;
							}
						}
					}
					else
					{
						if(rss_std < 3.672265)
						{
							if(rss_max < -69.734)
							{
								if(rss_min < -83.85825)
								{
									if(d_min < 86.07785)
									{
										if(rss_min < -84.4713)
											return 1;
										else
										{
											if(d_std < 32.62615)
												return 1;
											else
												return 0;
										}
									}
									else
										return 1;
								}
								else
									return 0;
							}
							else
							{
								if(d_max < 230.9935)
								{
									if(d_mean < 143.324)
										return 1;
									else
									{
										if(d_max < 219.0215)
											return 1;
										else
										{
											if(rss_max < -69.6308)
												return 0;
											else
											{
												if(d_mean < 169.506)
													return 1;
												else
												{
													if(d_std < 39.12195)
														return 0;
													else
														return 1;
												}
											}
										}
									}
								}
								else
									return 1;
							}
						}
						else
						{
							if(d_min < 73.12285)
							{
								if(rss_max < -70.1403)
									return 0;
								else
									return 1;
							}
							else
							{
								if(rss_std < 3.699175)
								{
									if(rss_std < 3.69754)
										return 1;
									else
									{
										if(rss_min < -84.93595)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(d_mean < 171.825)
										return 1;
									else
										return 0;
								}
							}
						}
					}
				}
				else
				{
					if(d_min < 70.05825)
					{
						if(rss_max < -62.5797)
						{
							if(d_mean < 138.4605)
							{
								if(rss_std < 4.833305)
								{
									if(rss_min < -84.5799)
									{
										if(d_min < 50.7227)
											return 0;
										else
										{
											if(d_mean < 137.128)
												return 1;
											else
											{
												if(rss_min < -84.9095)
													return 0;
												else
													return 1;
											}
										}
									}
									else
										return 0;
								}
								else
								{
									if(rss_min < -84.57045)
									{
										if(d_max < 229.875)
										{
											if(rss_mean < -76.6057)
											{
												if(rss_max < -64.39375)
												{
													if(rss_min < -84.85755)
													{
														if(rss_std < 5.220935)
														{
															if(d_min < 45.8422)
																return 1;
															else
																return 0;
														}
														else
															return 0;
													}
													else
													{
														if(d_min < 53.87335)
															return 0;
														else
														{
															if(rss_min < -84.81335)
																return 1;
															else
															{
																if(rss_max < -68.53715)
																{
																	if(d_max < 227.6455)
																	{
																		if(d_mean < 127.1435)
																		{
																			if(d_mean < 126.779)
																				return 0;
																			else
																				return 1;
																		}
																		else
																			return 0;
																	}
																	else
																		return 1;
																}
																else
																{
																	if(rss_std < 6.160425)
																		return 1;
																	else
																	{
																		if(d_min < 56.4491)
																			return 1;
																		else
																			return 0;
																	}
																}
															}
														}
													}
												}
												else
												{
													if(d_min < 39.39425)
													{
														if(rss_min < -84.75145)
															return 1;
														else
															return 0;
													}
													else
														return 1;
												}
											}
											else
											{
												if(d_std < 50.92695)
												{
													if(d_min < 54.19205)
													{
														if(d_min < 48.75485)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
												else
												{
													if(d_max < 229.5255)
													{
														if(rss_min < -84.57795)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
											}
										}
										else
										{
											if(d_max < 233.5775)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(d_std < 50.0759)
										{
											if(rss_min < -84.138)
											{
												if(d_max < 214.742)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
										else
											return 0;
									}
								}
							}
							else
							{
								if(d_std < 54.4669)
								{
									if(d_mean < 159.2925)
									{
										if(rss_min < -84.7517)
										{
											if(d_max < 221.6695)
											{
												if(d_std < 50.78745)
													return 0;
												else
													return 1;
											}
											else
											{
												if(rss_min < -84.8864)
													return 0;
												else
												{
													if(d_max < 228.052)
													{
														if(d_min < 63.98695)
														{
															if(rss_min < -84.7702)
																return 0;
															else
															{
																if(d_max < 224.2495)
																	return 1;
																else
																	return 0;
															}
														}
														else
														{
															if(d_min < 66.30985)
																return 1;
															else
																return 0;
														}
													}
													else
													{
														if(rss_std < 4.84978)
															return 1;
														else
															return 0;
													}
												}
											}
										}
										else
											return 0;
									}
									else
										return 0;
								}
								else
								{
									if(d_min < 65.81685)
										return 0;
									else
									{
										if(d_min < 66.2641)
											return 1;
										else
											return 0;
									}
								}
							}
						}
						else
						{
							if(d_min < 35.7338)
							{
								if(rss_max < -59.24095)
									return 0;
								else
								{
									if(rss_std < 8.195785)
									{
										if(rss_min < -84.27155)
											return 1;
										else
											return 0;
									}
									else
									{
										if(rss_max < -51.3688)
											return 0;
										else
											return 1;
									}
								}
							}
							else
							{
								if(rss_mean < -77.33355)
								{
									if(d_max < 215.4865)
									{
										if(rss_max < -61.63905)
											return 0;
										else
											return 1;
									}
									else
									{
										if(d_std < 68.14065)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(d_std < 74.0934)
										return 1;
									else
										return 0;
								}
							}
						}
					}
					else
					{
						if(d_max < 234.5135)
							return 1;
						else
							return 0;
					}
				}
			}
		}
		else
		{
			if(d_mean < 157.5675)
			{
				if(rss_min < -84.2976)
				{
					if(rss_min < -84.91965)
					{
						if(d_max < 249.231)
						{
							if(d_max < 236.7205)
								return 0;
							else
							{
								if(d_mean < 153.712)
								{
									if(d_max < 242.3875)
									{
										if(rss_std < 2.938415)
										{
											if(d_std < 29.36765)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
									else
									{
										if(d_std < 50.6929)
										{
											if(rss_min < -84.9694)
												return 0;
											else
												return 1;
										}
										else
										{
											if(rss_min < -84.9691)
												return 0;
											else
												return 1;
										}
									}
								}
								else
								{
									if(rss_min < -84.9512)
									{
										if(d_min < 87.01245)
										{
											if(rss_min < -84.9844)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
									else
										return 0;
								}
							}
						}
						else
						{
							if(rss_min < -84.94605)
							{
								if(rss_min < -84.9759)
									return 1;
								else
								{
									if(rss_min < -84.9686)
										return 0;
									else
									{
										if(d_max < 277.108)
										{
											if(d_mean < 140.6285)
											{
												if(d_max < 267.8275)
													return 0;
												else
													return 1;
											}
											else
											{
												if(d_max < 261.333)
													return 1;
												else
												{
													if(d_min < 71.37765)
													{
														if(rss_max < -67.9073)
															return 0;
														else
															return 1;
													}
													else
													{
														if(d_mean < 156.658)
															return 1;
														else
															return 0;
													}
												}
											}
										}
										else
											return 1;
									}
								}
							}
							else
							{
								if(d_max < 263.6485)
									return 1;
								else
									return 0;
							}
						}
					}
					else
					{
						if(d_std < 79.6605)
						{
							if(d_min < 66.53925)
							{
								if(rss_mean < -77.25405)
								{
									if(rss_min < -84.76675)
									{
										if(rss_max < -68.14)
										{
											if(d_std < 64.2908)
											{
												if(rss_max < -69.44745)
												{
													if(d_max < 261.647)
													{
														if(d_mean < 152.719)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
												else
												{
													if(rss_std < 4.77241)
														return 1;
													else
													{
														if(rss_mean < -78.91325)
															return 0;
														else
															return 1;
													}
												}
											}
											else
												return 0;
										}
										else
											return 1;
									}
									else
										return 1;
								}
								else
									return 1;
							}
							else
							{
								if(d_max < 247.431)
								{
									if(rss_max < -71.15625)
									{
										if(d_min < 73.99165)
											return 0;
										else
											return 1;
									}
									else
										return 1;
								}
								else
									return 1;
							}
						}
						else
						{
							if(d_min < 25.2566)
								return 1;
							else
							{
								if(d_max < 287.697)
									return 0;
								else
									return 1;
							}
						}
					}
				}
				else
				{
					if(rss_std < 3.19722)
					{
						if(rss_mean < -78.52465)
						{
							if(rss_min < -84.2059)
							{
								if(d_max < 244.2165)
									return 1;
								else
									return 0;
							}
							else
							{
								if(rss_min < -82.8241)
								{
									if(rss_max < -77.66315)
										return 0;
									else
										return 1;
								}
								else
								{
									if(rss_mean < -80.36895)
										return 1;
									else
										return 0;
								}
							}
						}
						else
							return 0;
					}
					else
					{
						if(d_max < 236.881)
						{
							if(d_mean < 134.2805)
								return 1;
							else
							{
								if(d_std < 47.90285)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(rss_std < 3.365505)
							{
								if(d_std < 43.0872)
									return 1;
								else
									return 0;
							}
							else
								return 1;
						}
					}
				}
			}
			else
			{
				if(rss_max < -76.0856)
				{
					if(d_max < 247.839)
					{
						if(d_mean < 165.881)
						{
							if(rss_std < 1.843195)
								return 0;
							else
							{
								if(d_max < 241.2535)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(d_max < 242.901)
								return 0;
							else
							{
								if(rss_min < -83.8133)
								{
									if(rss_max < -76.3949)
										return 0;
									else
										return 1;
								}
								else
									return 1;
							}
						}
					}
					else
					{
						if(d_min < 131.7315)
						{
							if(rss_mean < -80.09805)
							{
								if(d_max < 307.5625)
								{
									if(rss_std < 1.994005)
									{
										if(d_min < 125.644)
										{
											if(rss_max < -79.23125)
												return 1;
											else
												return 0;
										}
										else
										{
											if(d_max < 258.128)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(d_mean < 168.2645)
											return 1;
										else
										{
											if(rss_std < 2.01863)
											{
												if(rss_min < -84.9801)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
									}
								}
								else
								{
									if(d_max < 319.7465)
										return 1;
									else
									{
										if(rss_min < -84.9827)
											return 1;
										else
											return 0;
									}
								}
							}
							else
							{
								if(rss_std < 2.470575)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(rss_max < -78.37795)
							{
								if(rss_min < -84.89615)
									return 0;
								else
								{
									if(d_mean < 221.642)
									{
										if(rss_std < 1.42925)
										{
											if(d_std < 35.0724)
												return 0;
											else
												return 1;
										}
										else
										{
											if(rss_min < -84.8207)
												return 0;
											else
												return 1;
										}
									}
									else
										return 1;
								}
							}
							else
							{
								if(d_mean < 172.484)
									return 0;
								else
									return 1;
							}
						}
					}
				}
				else
				{
					if(d_max < 280.9065)
					{
						if(rss_min < -84.50065)
						{
							if(d_max < 244.1955)
							{
								if(rss_std < 4.036265)
								{
									if(d_mean < 170.5325)
									{
										if(rss_max < -74.81685)
											return 0;
										else
										{
											if(d_max < 235.991)
											{
												if(rss_min < -84.9233)
													return 0;
												else
													return 1;
											}
											else
											{
												if(d_mean < 157.724)
												{
													if(d_mean < 157.7085)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
										}
									}
									else
									{
										if(rss_std < 3.192955)
										{
											if(rss_min < -84.9017)
											{
												if(d_max < 243.478)
													return 0;
												else
													return 1;
											}
											else
											{
												if(rss_std < 2.13869)
													return 0;
												else
													return 1;
											}
										}
										else
											return 0;
									}
								}
								else
								{
									if(rss_min < -84.9204)
										return 0;
									else
									{
										if(rss_min < -84.861)
											return 1;
										else
										{
											if(d_max < 235.981)
												return 1;
											else
												return 0;
										}
									}
								}
							}
							else
							{
								if(d_min < 108.8375)
								{
									if(d_mean < 181.272)
									{
										if(d_std < 66.04935)
										{
											if(rss_min < -84.9112)
											{
												if(d_max < 263.93)
												{
													if(d_max < 263.085)
													{
														if(d_min < 92.42915)
														{
															if(d_std < 53.0901)
																return 1;
															else
																return 0;
														}
														else
														{
															if(rss_max < -73.72535)
																return 0;
															else
																return 1;
														}
													}
													else
														return 0;
												}
												else
												{
													if(rss_min < -84.9492)
														return 1;
													else
													{
														if(d_max < 273.9415)
															return 1;
														else
															return 0;
													}
												}
											}
											else
											{
												if(rss_mean < -80.63515)
												{
													if(rss_mean < -81.23245)
													{
														if(d_max < 261.6955)
															return 0;
														else
															return 1;
													}
													else
													{
														if(d_min < 92.814)
														{
															if(rss_max < -73.82495)
																return 0;
															else
																return 1;
														}
														else
														{
															if(rss_max < -74.65205)
															{
																if(d_min < 104.748)
																	return 0;
																else
																	return 1;
															}
															else
																return 1;
														}
													}
												}
												else
												{
													if(rss_max < -74.2374)
														return 0;
													else
													{
														if(d_min < 65.0785)
														{
															if(d_min < 64.0145)
																return 1;
															else
																return 0;
														}
														else
														{
															if(rss_std < 2.62345)
															{
																if(d_min < 90.0423)
																	return 0;
																else
																	return 1;
															}
															else
															{
																if(rss_min < -84.76295)
																	return 1;
																else
																{
																	if(rss_min < -84.75815)
																		return 0;
																	else
																		return 1;
																}
															}
														}
													}
												}
											}
										}
										else
										{
											if(rss_max < -66.32175)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(rss_max < -73.0575)
										{
											if(d_mean < 194.7035)
												return 0;
											else
												return 1;
										}
										else
											return 1;
									}
								}
								else
								{
									if(rss_max < -76.0302)
									{
										if(d_min < 118.384)
										{
											if(d_min < 112.7995)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
									else
										return 1;
								}
							}
						}
						else
						{
							if(rss_max < -74.0866)
							{
								if(rss_min < -84.1378)
									return 1;
								else
								{
									if(d_max < 264.0345)
										return 0;
									else
										return 1;
								}
							}
							else
							{
								if(rss_max < -65.92235)
								{
									if(rss_max < -73.8441)
									{
										if(d_max < 263.319)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
								else
									return 1;
							}
						}
					}
					else
					{
						if(rss_std < 4.5664)
						{
							if(rss_min < -84.9674)
							{
								if(rss_min < -84.975)
								{
									if(rss_std < 4.24839)
										return 1;
									else
									{
										if(rss_max < -70.7578)
											return 0;
										else
											return 1;
									}
								}
								else
									return 0;
							}
							else
							{
								if(d_max < 353.296)
								{
									if(d_max < 297.7595)
									{
										if(rss_max < -75.6293)
										{
											if(d_min < 123.311)
												return 0;
											else
												return 1;
										}
										else
											return 1;
									}
									else
										return 1;
								}
								else
									return 2;
							}
						}
						else
						{
							if(rss_max < -70.16115)
								return 0;
							else
							{
								if(d_mean < 228.931)
								{
									if(rss_max < -69.80135)
									{
										if(d_min < 70.95865)
											return 0;
										else
											return 1;
									}
									else
										return 1;
								}
								else
									return 2;
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if(d_mean < 107.965)
		{
			if(d_max < 224.2105)
				return 0;
			else
				return 1;
		}
		else
			return 2;
	}
}

int tree_16(float d_max, float d_min, float d_mean, float d_std, float rss_max, float rss_min, float rss_mean, float rss_std)
{
	if(rss_max < -61.50405)
	{
		if(rss_min < -84.467)
		{
			if(rss_max < -70.5108)
			{
				if(d_max < 237.527)
				{
					if(d_max < 218.478)
					{
						if(d_mean < 170.776)
						{
							if(rss_min < -84.64725)
							{
								if(d_std < 38.06775)
								{
									if(rss_mean < -79.44505)
									{
										if(d_max < 217.851)
											return 1;
										else
										{
											if(d_max < 218.2915)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(rss_min < -84.8722)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(d_mean < 137.071)
										return 0;
									else
									{
										if(d_min < 87.0028)
										{
											if(rss_std < 3.401785)
											{
												if(d_min < 77.7731)
													return 1;
												else
													return 0;
											}
											else
											{
												if(rss_max < -70.65)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(d_std < 38.17225)
												return 1;
											else
												return 0;
										}
									}
								}
							}
							else
							{
								if(rss_mean < -79.6097)
									return 0;
								else
								{
									if(d_max < 217.7295)
									{
										if(d_std < 24.57515)
											return 1;
										else
										{
											if(rss_max < -70.71595)
											{
												if(rss_max < -71.6178)
													return 0;
												else
												{
													if(d_max < 210.237)
														return 1;
													else
														return 0;
												}
											}
											else
												return 1;
										}
									}
									else
										return 1;
								}
							}
						}
						else
						{
							if(d_min < 167.5185)
								return 0;
							else
								return 1;
						}
					}
					else
					{
						if(rss_max < -74.7407)
						{
							if(d_mean < 179.775)
								return 0;
							else
							{
								if(rss_min < -84.8855)
									return 0;
								else
								{
									if(rss_min < -84.88495)
										return 1;
									else
									{
										if(rss_max < -76.0906)
											return 0;
										else
										{
											if(d_max < 234.1545)
												return 0;
											else
												return 1;
										}
									}
								}
							}
						}
						else
						{
							if(d_std < 38.1704)
							{
								if(rss_min < -84.9152)
								{
									if(rss_min < -84.9824)
									{
										if(rss_max < -72.00735)
										{
											if(d_mean < 187.1875)
											{
												if(d_max < 230.668)
												{
													if(rss_mean < -77.66515)
														return 1;
													else
														return 0;
												}
												else
													return 0;
											}
											else
												return 0;
										}
										else
											return 0;
									}
									else
										return 0;
								}
								else
								{
									if(d_min < 105.306)
									{
										if(rss_max < -71.54915)
										{
											if(d_std < 34.49175)
											{
												if(rss_std < 3.17024)
													return 0;
												else
												{
													if(d_min < 86.98595)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(d_max < 219.011)
													return 0;
												else
												{
													if(rss_max < -73.28345)
													{
														if(d_max < 223.862)
														{
															if(d_max < 222.924)
																return 0;
															else
																return 1;
														}
														else
															return 0;
													}
													else
													{
														if(d_mean < 152.0755)
														{
															if(rss_std < 3.14316)
															{
																if(rss_min < -84.8837)
																{
																	if(rss_max < -72.92755)
																		return 1;
																	else
																		return 0;
																}
																else
																	return 0;
															}
															else
																return 1;
														}
														else
														{
															if(d_max < 221.146)
																return 1;
															else
															{
																if(d_std < 37.39635)
																{
																	if(d_min < 81.9725)
																		return 0;
																	else
																	{
																		if(rss_min < -84.84505)
																			return 0;
																		else
																		{
																			if(rss_max < -72.9362)
																				return 0;
																			else
																				return 1;
																		}
																	}
																}
																else
																{
																	if(d_mean < 167.05)
																		return 1;
																	else
																		return 0;
																}
															}
														}
													}
												}
											}
										}
										else
										{
											if(rss_std < 3.79425)
											{
												if(d_std < 31.74595)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
									}
									else
									{
										if(rss_min < -84.85375)
										{
											if(d_min < 154.737)
												return 1;
											else
												return 0;
										}
										else
										{
											if(rss_std < 2.78783)
												return 0;
											else
											{
												if(d_min < 106.877)
												{
													if(d_max < 223.377)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
										}
									}
								}
							}
							else
							{
								if(rss_max < -71.17735)
								{
									if(d_std < 44.70745)
									{
										if(d_max < 234.291)
										{
											if(rss_mean < -80.662)
												return 0;
											else
											{
												if(rss_max < -72.0761)
												{
													if(d_mean < 148.716)
													{
														if(rss_std < 3.14306)
														{
															if(d_max < 227.6035)
																return 0;
															else
															{
																if(d_mean < 137.0375)
																	return 0;
																else
																{
																	if(d_max < 232.0855)
																		return 1;
																	else
																		return 0;
																}
															}
														}
														else
															return 0;
													}
													else
													{
														if(d_std < 39.06575)
														{
															if(d_min < 93.0105)
																return 0;
															else
																return 1;
														}
														else
														{
															if(rss_std < 3.20562)
															{
																if(rss_max < -72.6712)
																	return 0;
																else
																	return 1;
															}
															else
																return 0;
														}
													}
												}
												else
												{
													if(rss_min < -84.8323)
													{
														if(rss_std < 3.321425)
														{
															if(d_max < 223.143)
																return 0;
															else
																return 1;
														}
														else
															return 0;
													}
													else
													{
														if(rss_std < 3.429425)
														{
															if(rss_min < -84.8001)
																return 1;
															else
															{
																if(d_min < 79.8481)
																	return 0;
																else
																	return 1;
															}
														}
														else
														{
															if(d_mean < 147.647)
															{
																if(d_min < 73.7701)
																	return 0;
																else
																	return 1;
															}
															else
																return 0;
														}
													}
												}
											}
										}
										else
										{
											if(rss_min < -84.9195)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(d_max < 235.991)
											return 0;
										else
										{
											if(d_min < 93.83275)
												return 0;
											else
												return 1;
										}
									}
								}
								else
								{
									if(rss_max < -70.91885)
									{
										if(d_min < 73.3444)
										{
											if(d_std < 49.80415)
												return 0;
											else
											{
												if(d_max < 234.923)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(rss_mean < -78.7858)
												return 1;
											else
											{
												if(d_min < 73.39295)
													return 1;
												else
													return 0;
											}
										}
									}
									else
									{
										if(d_min < 80.13535)
											return 0;
										else
											return 1;
									}
								}
							}
						}
					}
				}
				else
				{
					if(rss_min < -84.91765)
					{
						if(d_max < 250.0935)
						{
							if(rss_mean < -80.9734)
								return 0;
							else
							{
								if(rss_max < -73.43275)
								{
									if(rss_std < 2.53728)
										return 1;
									else
										return 0;
								}
								else
								{
									if(rss_std < 3.932425)
									{
										if(rss_max < -71.0211)
											return 1;
										else
										{
											if(d_min < 73.72505)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(d_max < 238.299)
											return 1;
										else
											return 0;
									}
								}
							}
						}
						else
						{
							if(d_mean < 202.058)
							{
								if(rss_min < -84.97915)
								{
									if(rss_min < -84.9856)
									{
										if(d_std < 50.61155)
										{
											if(d_min < 118.3495)
												return 1;
											else
												return 0;
										}
										else
											return 0;
									}
									else
									{
										if(rss_std < 2.30591)
										{
											if(d_mean < 185.476)
												return 0;
											else
											{
												if(rss_max < -77.6678)
												{
													if(d_max < 324.709)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
										}
										else
											return 1;
									}
								}
								else
								{
									if(rss_max < -73.9594)
									{
										if(rss_min < -84.96225)
										{
											if(d_mean < 189.323)
												return 0;
											else
											{
												if(rss_max < -77.0447)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(d_max < 299.8985)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(d_min < 85.1195)
										{
											if(d_max < 289.925)
											{
												if(d_max < 261.327)
													return 1;
												else
												{
													if(rss_max < -70.74875)
													{
														if(rss_mean < -80.4313)
														{
															if(d_mean < 169.087)
																return 1;
															else
																return 0;
														}
														else
															return 0;
													}
													else
													{
														if(d_min < 75.10745)
															return 0;
														else
															return 1;
													}
												}
											}
											else
												return 1;
										}
										else
											return 1;
									}
								}
							}
							else
							{
								if(rss_max < -77.61805)
									return 0;
								else
									return 1;
							}
						}
					}
					else
					{
						if(d_max < 279.129)
						{
							if(rss_min < -84.82395)
							{
								if(rss_mean < -81.24695)
								{
									if(d_min < 97.9022)
										return 0;
									else
									{
										if(d_min < 166.9665)
										{
											if(d_max < 243.84)
											{
												if(d_mean < 185.706)
													return 1;
												else
												{
													if(d_std < 34.8154)
														return 1;
													else
														return 0;
												}
											}
											else
												return 1;
										}
										else
											return 0;
									}
								}
								else
								{
									if(d_min < 75.711)
									{
										if(d_min < 73.3609)
											return 1;
										else
										{
											if(rss_max < -71.39765)
											{
												if(d_max < 255.6315)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
									}
									else
									{
										if(rss_min < -84.91355)
										{
											if(d_min < 109.164)
												return 0;
											else
												return 1;
										}
										else
										{
											if(rss_mean < -81.2094)
											{
												if(d_max < 271.5275)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
									}
								}
							}
							else
							{
								if(rss_max < -73.9764)
								{
									if(d_min < 131.0955)
									{
										if(rss_std < 3.19501)
										{
											if(rss_mean < -80.32465)
											{
												if(rss_min < -84.8013)
												{
													if(d_mean < 180.756)
														return 1;
													else
														return 0;
												}
												else
												{
													if(d_std < 36.92285)
													{
														if(rss_max < -74.7219)
														{
															if(d_mean < 176.2705)
																return 1;
															else
																return 0;
														}
														else
															return 0;
													}
													else
													{
														if(rss_mean < -80.85355)
														{
															if(d_min < 99.59885)
																return 0;
															else
															{
																if(d_min < 102.1455)
																	return 1;
																else
																	return 0;
															}
														}
														else
															return 0;
													}
												}
											}
											else
											{
												if(d_max < 263.984)
													return 1;
												else
													return 0;
											}
										}
										else
											return 0;
									}
									else
									{
										if(d_std < 21.9273)
										{
											if(rss_mean < -82.09585)
												return 0;
											else
												return 1;
										}
										else
											return 1;
									}
								}
								else
								{
									if(rss_std < 3.793705)
										return 1;
									else
									{
										if(rss_std < 3.806245)
										{
											if(d_max < 252.5025)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
								}
							}
						}
						else
						{
							if(d_max < 300.797)
							{
								if(rss_std < 2.633315)
									return 1;
								else
								{
									if(d_max < 300.6905)
									{
										if(rss_std < 2.76318)
										{
											if(d_std < 43.59435)
												return 1;
											else
											{
												if(d_min < 106.3765)
												{
													if(rss_max < -75.10455)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
										}
										else
											return 1;
									}
									else
										return 0;
								}
							}
							else
							{
								if(d_mean < 216.5995)
									return 1;
								else
								{
									if(d_std < 49.68205)
										return 1;
									else
										return 0;
								}
							}
						}
					}
				}
			}
			else
			{
				if(d_std < 48.607)
				{
					if(d_min < 69.6034)
					{
						if(d_mean < 142.814)
						{
							if(rss_min < -84.85365)
							{
								if(d_max < 236.5905)
								{
									if(rss_max < -68.7292)
										return 0;
									else
									{
										if(d_max < 218.598)
											return 1;
										else
										{
											if(d_min < 56.28005)
											{
												if(rss_max < -66.8593)
													return 0;
												else
												{
													if(rss_mean < -76.6287)
													{
														if(d_min < 46.8008)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
											}
											else
											{
												if(d_mean < 140.27)
													return 1;
												else
												{
													if(d_max < 234.036)
														return 0;
													else
														return 1;
												}
											}
										}
									}
								}
								else
								{
									if(rss_min < -84.86095)
									{
										if(rss_min < -84.9564)
											return 1;
										else
										{
											if(d_mean < 132.536)
												return 1;
											else
											{
												if(rss_min < -84.9317)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(d_std < 47.644)
											return 0;
										else
											return 1;
									}
								}
							}
							else
							{
								if(rss_mean < -75.06975)
								{
									if(rss_min < -84.4989)
									{
										if(d_mean < 137.631)
										{
											if(d_std < 48.21785)
											{
												if(d_min < 64.5677)
													return 1;
												else
												{
													if(d_min < 65.2944)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(rss_std < 4.819875)
													return 1;
												else
												{
													if(rss_max < -68.10335)
														return 0;
													else
														return 1;
												}
											}
										}
										else
										{
											if(rss_std < 4.02118)
											{
												if(d_max < 225.1395)
													return 0;
												else
													return 1;
											}
											else
											{
												if(rss_std < 4.847875)
													return 1;
												else
												{
													if(rss_std < 4.955145)
														return 0;
													else
														return 1;
												}
											}
										}
									}
									else
									{
										if(d_min < 46.44765)
											return 1;
										else
											return 0;
									}
								}
								else
									return 0;
							}
						}
						else
						{
							if(rss_max < -68.25425)
							{
								if(d_max < 244.5535)
								{
									if(d_min < 68.24945)
										return 0;
									else
									{
										if(rss_min < -84.88835)
											return 0;
										else
											return 1;
									}
								}
								else
									return 1;
							}
							else
							{
								if(rss_mean < -81.0894)
									return 0;
								else
								{
									if(d_mean < 155.8935)
									{
										if(rss_std < 5.49015)
											return 1;
										else
										{
											if(d_min < 50.0244)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(d_min < 58.85755)
										{
											if(rss_mean < -79.65295)
											{
												if(d_mean < 157.332)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
										else
											return 1;
									}
								}
							}
						}
					}
					else
					{
						if(d_std < 40.34855)
						{
							if(rss_max < -69.7283)
								return 1;
							else
							{
								if(d_max < 230.887)
								{
									if(rss_max < -69.6341)
										return 0;
									else
									{
										if(d_mean < 169.4875)
											return 1;
										else
											return 0;
									}
								}
								else
									return 1;
							}
						}
						else
						{
							if(d_min < 70.0983)
							{
								if(d_mean < 167.0455)
									return 1;
								else
									return 0;
							}
							else
								return 1;
						}
					}
				}
				else
				{
					if(d_max < 234.982)
					{
						if(d_min < 69.9001)
						{
							if(d_std < 54.30615)
							{
								if(rss_max < -67.03265)
								{
									if(rss_mean < -78.6658)
									{
										if(rss_max < -69.03515)
											return 0;
										else
										{
											if(d_min < 62.44115)
											{
												if(d_std < 49.322)
												{
													if(rss_std < 3.947695)
														return 1;
													else
														return 0;
												}
												else
													return 0;
											}
											else
											{
												if(d_max < 228.263)
													return 1;
												else
													return 0;
											}
										}
									}
									else
									{
										if(rss_std < 4.83195)
										{
											if(d_std < 50.07355)
											{
												if(rss_std < 4.47866)
													return 1;
												else
												{
													if(rss_max < -69.1111)
														return 0;
													else
													{
														if(d_max < 229.7585)
														{
															if(d_mean < 139.099)
																return 1;
															else
																return 0;
														}
														else
															return 0;
													}
												}
											}
											else
											{
												if(rss_max < -69.96465)
													return 0;
												else
												{
													if(rss_mean < -77.23505)
													{
														if(rss_std < 4.761635)
															return 1;
														else
														{
															if(rss_min < -84.89095)
																return 0;
															else
																return 1;
														}
													}
													else
														return 0;
												}
											}
										}
										else
										{
											if(d_max < 222.0025)
											{
												if(rss_min < -84.82055)
													return 1;
												else
													return 0;
											}
											else
											{
												if(rss_std < 4.88367)
												{
													if(d_min < 63.433)
														return 0;
													else
														return 1;
												}
												else
												{
													if(rss_min < -84.7757)
														return 0;
													else
													{
														if(rss_min < -84.76575)
															return 1;
														else
															return 0;
													}
												}
											}
										}
									}
								}
								else
								{
									if(d_min < 47.3721)
									{
										if(rss_max < -64.904)
											return 0;
										else
										{
											if(d_std < 50.71155)
												return 1;
											else
											{
												if(rss_max < -63.51765)
												{
													if(rss_min < -84.75145)
													{
														if(rss_min < -84.965)
															return 0;
														else
														{
															if(rss_max < -64.0639)
																return 1;
															else
																return 0;
														}
													}
													else
														return 0;
												}
												else
												{
													if(rss_max < -61.91825)
														return 1;
													else
													{
														if(d_max < 222.875)
															return 0;
														else
															return 1;
													}
												}
											}
										}
									}
									else
									{
										if(rss_max < -66.43495)
										{
											if(d_min < 62.07435)
											{
												if(rss_mean < -75.92345)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
										else
										{
											if(d_std < 49.05395)
											{
												if(d_std < 49.0467)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
									}
								}
							}
							else
							{
								if(d_max < 221.159)
								{
									if(rss_mean < -77.1463)
									{
										if(d_min < 65.8614)
											return 0;
										else
											return 1;
									}
									else
									{
										if(d_mean < 126.7025)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(d_std < 58.659)
									{
										if(d_max < 224.727)
											return 0;
										else
										{
											if(rss_std < 4.46852)
											{
												if(d_max < 231.3705)
													return 0;
												else
													return 1;
											}
											else
											{
												if(d_max < 228.454)
												{
													if(rss_mean < -78.29875)
													{
														if(d_std < 54.4669)
														{
															if(d_max < 225.344)
																return 1;
															else
																return 0;
														}
														else
															return 0;
													}
													else
													{
														if(rss_max < -65.649)
														{
															if(d_max < 225.344)
																return 1;
															else
																return 0;
														}
														else
															return 1;
													}
												}
												else
													return 0;
											}
										}
									}
									else
										return 0;
								}
							}
						}
						else
						{
							if(d_max < 234.5135)
								return 1;
							else
								return 0;
						}
					}
					else
					{
						if(d_min < 169.2275)
						{
							if(rss_max < -67.3581)
							{
								if(rss_std < 4.790155)
								{
									if(d_max < 241.5095)
									{
										if(d_min < 68.90945)
										{
											if(rss_min < -84.9159)
												return 0;
											else
											{
												if(d_mean < 144.833)
													return 1;
												else
												{
													if(d_max < 241.027)
														return 1;
													else
														return 0;
												}
											}
										}
										else
											return 1;
									}
									else
									{
										if(d_min < 72.4328)
										{
											if(rss_mean < -79.95425)
											{
												if(rss_std < 4.151195)
													return 1;
												else
												{
													if(d_mean < 166.6505)
													{
														if(d_mean < 160.1915)
															return 1;
														else
															return 0;
													}
													else
														return 1;
												}
											}
											else
											{
												if(rss_max < -70.1953)
												{
													if(d_max < 298.5475)
													{
														if(d_min < 71.91755)
															return 1;
														else
															return 0;
													}
													else
													{
														if(d_min < 67.73055)
															return 0;
														else
															return 1;
													}
												}
												else
												{
													if(d_std < 51.22425)
													{
														if(d_min < 65.3748)
														{
															if(d_max < 248.101)
																return 0;
															else
																return 1;
														}
														else
															return 1;
													}
													else
														return 1;
												}
											}
										}
										else
											return 1;
									}
								}
								else
								{
									if(d_min < 67.5258)
									{
										if(rss_max < -68.74085)
										{
											if(rss_std < 4.876775)
											{
												if(rss_mean < -78.18395)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
										else
										{
											if(d_std < 70.7841)
											{
												if(rss_min < -84.91215)
												{
													if(d_std < 59.9831)
														return 0;
													else
													{
														if(d_max < 278.625)
															return 0;
														else
															return 1;
													}
												}
												else
													return 1;
											}
											else
												return 0;
										}
									}
									else
									{
										if(d_min < 68.43875)
										{
											if(d_max < 257.9995)
												return 0;
											else
												return 1;
										}
										else
											return 1;
									}
								}
							}
							else
							{
								if(d_min < 35.1518)
								{
									if(d_max < 242.3805)
										return 0;
									else
										return 1;
								}
								else
									return 1;
							}
						}
						else
							return 2;
					}
				}
			}
		}
		else
		{
			if(d_max < 224.2945)
			{
				if(rss_mean < -78.3546)
				{
					if(d_mean < 148.394)
					{
						if(d_std < 24.4879)
						{
							if(rss_min < -83.666)
								return 1;
							else
								return 0;
						}
						else
						{
							if(d_mean < 122.973)
							{
								if(d_min < 68.95065)
									return 0;
								else
									return 1;
							}
							else
							{
								if(rss_mean < -80.94065)
									return 1;
								else
									return 0;
							}
						}
					}
					else
					{
						if(rss_max < -80.1862)
						{
							if(d_min < 123.848)
								return 1;
							else
								return 0;
						}
						else
							return 0;
					}
				}
				else
				{
					if(rss_min < -83.2771)
					{
						if(d_std < 40.95055)
						{
							if(rss_max < -66.89065)
							{
								if(rss_min < -84.2804)
								{
									if(rss_min < -84.33765)
										return 0;
									else
									{
										if(d_min < 70.7852)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(rss_max < -69.1818)
									{
										if(d_std < 30.4587)
										{
											if(d_std < 24.70375)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
									else
									{
										if(d_min < 60.4698)
											return 0;
										else
											return 1;
									}
								}
							}
							else
							{
								if(d_max < 181.998)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(d_mean < 133.808)
							{
								if(rss_max < -62.95615)
								{
									if(rss_mean < -78.069)
									{
										if(d_max < 211.142)
											return 0;
										else
											return 1;
									}
									else
									{
										if(d_std < 48.2963)
										{
											if(rss_max < -66.8758)
												return 0;
											else
											{
												if(d_max < 208.2675)
													return 1;
												else
												{
													if(d_std < 41.5022)
														return 1;
													else
														return 0;
												}
											}
										}
										else
											return 0;
									}
								}
								else
								{
									if(rss_std < 6.494555)
									{
										if(d_max < 210.1815)
										{
											if(d_std < 44.3803)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
									else
										return 0;
								}
							}
							else
							{
								if(rss_std < 4.04449)
								{
									if(d_min < 71.44385)
										return 0;
									else
									{
										if(rss_max < -71.04805)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(rss_max < -62.2305)
										return 0;
									else
									{
										if(d_min < 37.4621)
											return 0;
										else
											return 1;
									}
								}
							}
						}
					}
					else
					{
						if(rss_std < 9.47048)
						{
							if(d_mean < 112.4275)
							{
								if(rss_mean < -76.2127)
								{
									if(d_max < 163.365)
									{
										if(d_max < 151.5895)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
								else
									return 0;
							}
							else
								return 0;
						}
						else
							return 1;
					}
				}
			}
			else
			{
				if(rss_mean < -73.4854)
				{
					if(rss_max < -70.7681)
					{
						if(d_max < 283.5345)
						{
							if(d_mean < 175.918)
							{
								if(d_min < 120.684)
								{
									if(rss_min < -83.19075)
									{
										if(d_std < 38.12525)
										{
											if(rss_std < 3.273535)
											{
												if(d_max < 244.2165)
												{
													if(d_max < 234.4635)
														return 0;
													else
													{
														if(d_mean < 139.0015)
															return 0;
														else
															return 1;
													}
												}
												else
													return 0;
											}
											else
											{
												if(d_min < 90.59755)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(rss_std < 3.53959)
											{
												if(rss_max < -73.17055)
												{
													if(d_min < 107.316)
														return 1;
													else
														return 0;
												}
												else
												{
													if(rss_std < 3.30792)
														return 0;
													else
													{
														if(d_min < 71.8204)
															return 0;
														else
															return 1;
													}
												}
											}
											else
											{
												if(rss_max < -71.6649)
													return 0;
												else
												{
													if(d_max < 236.881)
													{
														if(d_min < 74.6285)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
											}
										}
									}
									else
										return 0;
								}
								else
								{
									if(rss_std < 2.07018)
									{
										if(rss_std < 1.9316)
										{
											if(d_std < 39.86325)
											{
												if(rss_mean < -81.2705)
												{
													if(d_min < 134.511)
														return 1;
													else
														return 0;
												}
												else
													return 0;
											}
											else
												return 1;
										}
										else
										{
											if(d_max < 275.5405)
											{
												if(d_max < 229.239)
													return 0;
												else
												{
													if(d_std < 27.75745)
														return 0;
													else
														return 1;
												}
											}
											else
												return 0;
										}
									}
									else
										return 1;
								}
							}
							else
							{
								if(rss_max < -78.7813)
								{
									if(d_std < 47.71865)
									{
										if(rss_max < -78.8278)
											return 0;
										else
											return 1;
									}
									else
										return 1;
								}
								else
									return 0;
							}
						}
						else
						{
							if(d_min < 271.4185)
								return 1;
							else
								return 2;
						}
					}
					else
					{
						if(d_min < 73.35855)
						{
							if(rss_mean < -77.403)
							{
								if(rss_max < -67.83615)
									return 0;
								else
								{
									if(d_min < 50.49415)
									{
										if(d_max < 249.39)
											return 0;
										else
											return 1;
									}
									else
										return 1;
								}
							}
							else
							{
								if(rss_max < -67.7724)
								{
									if(d_max < 233.027)
										return 0;
									else
										return 1;
								}
								else
									return 1;
							}
						}
						else
							return 1;
					}
				}
				else
					return 2;
			}
		}
	}
	else
	{
		if(rss_mean < -69.7687)
		{
			if(rss_min < -83.9597)
			{
				if(rss_std < 9.637255)
				{
					if(d_max < 239.751)
					{
						if(d_std < 62.5168)
						{
							if(rss_min < -84.5671)
								return 1;
							else
							{
								if(rss_std < 6.48394)
								{
									if(d_max < 170.958)
										return 0;
									else
									{
										if(d_max < 215.737)
											return 1;
										else
											return 0;
									}
								}
								else
									return 0;
							}
						}
						else
							return 0;
					}
					else
						return 1;
				}
				else
				{
					if(rss_min < -84.87235)
					{
						if(d_mean < 163.38)
						{
							if(d_min < 15.77775)
								return 1;
							else
								return 0;
						}
						else
							return 1;
					}
					else
					{
						if(d_min < 25.2566)
							return 1;
						else
						{
							if(d_max < 253.698)
								return 0;
							else
								return 1;
						}
					}
				}
			}
			else
			{
				if(d_min < 33.3638)
				{
					if(d_max < 234.66)
						return 0;
					else
						return 1;
				}
				else
				{
					if(rss_max < -60.992)
						return 0;
					else
						return 1;
				}
			}
		}
		else
		{
			if(rss_std < 12.5507)
				return 2;
			else
				return 1;
		}
	}
}

int tree_17(float d_max, float d_min, float d_mean, float d_std, float rss_max, float rss_min, float rss_mean, float rss_std)
{
	if(d_max < 237.091)
	{
		if(rss_mean < -68.2208)
		{
			if(rss_max < -70.5105)
			{
				if(rss_max < -74.67505)
				{
					if(d_max < 228.164)
					{
						if(rss_max < -79.7664)
						{
							if(rss_std < 1.777545)
							{
								if(d_min < 103.544)
									return 1;
								else
								{
									if(d_max < 183.514)
									{
										if(d_mean < 173.9245)
											return 0;
										else
											return 1;
									}
									else
									{
										if(d_min < 169.3675)
											return 0;
										else
										{
											if(rss_std < 1.17577)
												return 0;
											else
											{
												if(d_max < 213.668)
													return 0;
												else
													return 1;
											}
										}
									}
								}
							}
							else
							{
								if(d_min < 170.267)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(rss_max < -74.74)
								return 0;
							else
							{
								if(rss_max < -74.73955)
									return 1;
								else
									return 0;
							}
						}
					}
					else
					{
						if(rss_min < -84.2605)
						{
							if(d_max < 228.1955)
								return 1;
							else
							{
								if(rss_max < -75.9693)
									return 0;
								else
								{
									if(d_min < 120.755)
										return 0;
									else
									{
										if(d_max < 229.6575)
											return 0;
										else
											return 1;
									}
								}
							}
						}
						else
						{
							if(d_min < 122.6695)
								return 0;
							else
								return 1;
						}
					}
				}
				else
				{
					if(d_min < 101.9425)
					{
						if(rss_min < -84.2819)
						{
							if(d_std < 38.8136)
							{
								if(d_max < 218.4815)
								{
									if(d_min < 81.14715)
									{
										if(rss_max < -73.0503)
										{
											if(d_max < 182.575)
												return 1;
											else
												return 0;
										}
										else
											return 0;
									}
									else
									{
										if(rss_min < -84.5565)
										{
											if(rss_max < -73.5217)
											{
												if(d_mean < 163.4255)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
										else
											return 0;
									}
								}
								else
								{
									if(rss_min < -84.8853)
									{
										if(rss_min < -84.98355)
										{
											if(d_min < 75.18385)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
									else
									{
										if(rss_std < 2.90469)
										{
											if(d_max < 219.4545)
												return 1;
											else
											{
												if(rss_std < 2.895665)
													return 0;
												else
												{
													if(d_mean < 152.762)
														return 0;
													else
													{
														if(d_max < 221.796)
															return 0;
														else
															return 1;
													}
												}
											}
										}
										else
										{
											if(rss_min < -84.7559)
											{
												if(rss_max < -73.2766)
												{
													if(rss_min < -84.77705)
														return 0;
													else
														return 1;
												}
												else
												{
													if(rss_mean < -80.79645)
													{
														if(d_max < 226.986)
														{
															if(d_std < 37.3998)
																return 1;
															else
																return 0;
														}
														else
															return 0;
													}
													else
													{
														if(d_min < 88.3892)
														{
															if(d_min < 79.65345)
															{
																if(d_max < 225.21)
																	return 0;
																else
																	return 1;
															}
															else
																return 0;
														}
														else
														{
															if(rss_min < -84.84505)
																return 0;
															else
																return 1;
														}
													}
												}
											}
											else
											{
												if(d_mean < 148.606)
												{
													if(d_max < 222.2395)
														return 0;
													else
													{
														if(d_std < 34.0838)
															return 0;
														else
															return 1;
													}
												}
												else
													return 0;
											}
										}
									}
								}
							}
							else
							{
								if(rss_max < -71.50645)
								{
									if(rss_std < 3.35594)
									{
										if(rss_max < -72.0969)
										{
											if(d_mean < 158.103)
											{
												if(rss_std < 3.205925)
												{
													if(d_max < 231.769)
													{
														if(d_max < 228.1375)
														{
															if(rss_max < -72.55975)
															{
																if(d_mean < 157.5095)
																	return 0;
																else
																	return 1;
															}
															else
															{
																if(d_min < 80.82125)
																	return 0;
																else
																	return 1;
															}
														}
														else
														{
															if(rss_mean < -78.7707)
															{
																if(d_mean < 151.991)
																	return 1;
																else
																	return 0;
															}
															else
																return 0;
														}
													}
													else
														return 0;
												}
												else
													return 0;
											}
											else
												return 0;
										}
										else
										{
											if(d_min < 81.03915)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(d_max < 216.7205)
										{
											if(d_max < 216.4325)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
								}
								else
								{
									if(d_min < 73.3632)
									{
										if(d_max < 234.923)
											return 0;
										else
										{
											if(d_max < 235.5965)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(rss_min < -84.89845)
										{
											if(rss_std < 3.652015)
											{
												if(d_min < 77.34675)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
										else
										{
											if(rss_std < 4.06263)
											{
												if(d_min < 74.0218)
												{
													if(d_min < 73.39295)
														return 1;
													else
													{
														if(rss_mean < -80.35965)
															return 1;
														else
															return 0;
													}
												}
												else
												{
													if(rss_max < -70.67405)
													{
														if(d_mean < 170.4255)
														{
															if(rss_max < -70.72095)
																return 1;
															else
															{
																if(rss_max < -70.68175)
																	return 0;
																else
																{
																	if(d_mean < 148.4225)
																		return 1;
																	else
																		return 0;
																}
															}
														}
														else
															return 0;
													}
													else
														return 0;
												}
											}
											else
											{
												if(d_max < 234.1155)
													return 0;
												else
													return 1;
											}
										}
									}
								}
							}
						}
						else
						{
							if(d_max < 223.6645)
								return 0;
							else
							{
								if(d_min < 74.0048)
									return 0;
								else
								{
									if(rss_max < -71.6768)
										return 0;
									else
										return 1;
								}
							}
						}
					}
					else
					{
						if(rss_std < 2.47522)
						{
							if(rss_max < -74.486)
								return 1;
							else
							{
								if(d_mean < 193.1035)
								{
									if(d_std < 16.9441)
										return 1;
									else
										return 0;
								}
								else
									return 1;
							}
						}
						else
						{
							if(rss_max < -72.154)
							{
								if(rss_mean < -81.84665)
									return 0;
								else
								{
									if(d_std < 40.5658)
									{
										if(d_min < 105.4355)
										{
											if(d_min < 102.286)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
									else
									{
										if(d_min < 110.64)
											return 0;
										else
											return 1;
									}
								}
							}
							else
							{
								if(d_max < 230.0315)
								{
									if(d_min < 103.099)
										return 1;
									else
									{
										if(d_std < 38.80075)
											return 0;
										else
											return 1;
									}
								}
								else
									return 1;
							}
						}
					}
				}
			}
			else
			{
				if(d_std < 52.49235)
				{
					if(rss_min < -84.4989)
					{
						if(d_min < 69.6034)
						{
							if(rss_max < -67.27985)
							{
								if(d_mean < 140.7885)
								{
									if(rss_std < 4.789895)
									{
										if(rss_min < -84.98285)
											return 0;
										else
										{
											if(d_min < 54.28745)
												return 0;
											else
											{
												if(rss_std < 3.429465)
													return 0;
												else
												{
													if(d_min < 68.7746)
													{
														if(d_min < 61.99795)
														{
															if(rss_mean < -77.951)
															{
																if(rss_max < -69.63205)
																	return 0;
																else
																	return 1;
															}
															else
															{
																if(d_max < 210.539)
																	return 1;
																else
																	return 0;
															}
														}
														else
														{
															if(rss_max < -70.2875)
																return 0;
															else
																return 1;
														}
													}
													else
														return 0;
												}
											}
										}
									}
									else
									{
										if(d_max < 222.0025)
										{
											if(rss_min < -84.77485)
												return 1;
											else
											{
												if(d_std < 45.9679)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(d_std < 51.31795)
												return 0;
											else
											{
												if(rss_min < -84.77975)
													return 0;
												else
												{
													if(rss_max < -69.0242)
														return 1;
													else
													{
														if(d_min < 58.73755)
															return 0;
														else
															return 1;
													}
												}
											}
										}
									}
								}
								else
								{
									if(rss_min < -84.8864)
										return 0;
									else
									{
										if(rss_min < -84.8656)
										{
											if(d_mean < 159.6245)
											{
												if(rss_min < -84.8826)
													return 1;
												else
													return 0;
											}
											else
											{
												if(d_mean < 176.279)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(d_max < 217.1995)
											{
												if(d_mean < 148.777)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
									}
								}
							}
							else
							{
								if(rss_max < -65.60055)
								{
									if(d_max < 217.9635)
										return 1;
									else
									{
										if(d_min < 52.0732)
											return 0;
										else
										{
											if(rss_max < -65.791)
											{
												if(d_max < 231.5005)
													return 1;
												else
												{
													if(rss_min < -84.9349)
														return 0;
													else
														return 1;
												}
											}
											else
												return 0;
										}
									}
								}
								else
								{
									if(rss_mean < -80.68625)
										return 0;
									else
									{
										if(d_std < 50.9133)
										{
											if(d_mean < 149.8105)
											{
												if(d_std < 50.7268)
													return 1;
												else
												{
													if(d_std < 50.7375)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(d_min < 51.50495)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(rss_std < 5.470645)
											{
												if(d_mean < 132.9155)
													return 1;
												else
												{
													if(d_max < 232.706)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(d_max < 214.055)
													return 1;
												else
												{
													if(d_mean < 126.818)
														return 0;
													else
													{
														if(rss_max < -64.8344)
															return 0;
														else
															return 1;
													}
												}
											}
										}
									}
								}
							}
						}
						else
						{
							if(rss_std < 3.69909)
							{
								if(rss_min < -84.9364)
								{
									if(rss_min < -84.9582)
										return 1;
									else
										return 0;
								}
								else
								{
									if(d_mean < 170.5525)
									{
										if(d_mean < 147.5875)
											return 1;
										else
										{
											if(d_mean < 148.867)
											{
												if(d_min < 86.69825)
												{
													if(rss_max < -70.07245)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
											else
											{
												if(rss_max < -67.9736)
													return 1;
												else
												{
													if(d_max < 233.1845)
														return 0;
													else
														return 1;
												}
											}
										}
									}
									else
									{
										if(d_std < 34.39695)
											return 0;
										else
										{
											if(rss_min < -84.79105)
												return 1;
											else
												return 0;
										}
									}
								}
							}
							else
							{
								if(rss_mean < -80.69355)
								{
									if(d_min < 75.19795)
										return 0;
									else
										return 1;
								}
								else
								{
									if(d_std < 52.4629)
										return 1;
									else
									{
										if(d_min < 70.03745)
											return 0;
										else
											return 1;
									}
								}
							}
						}
					}
					else
					{
						if(d_min < 71.0243)
						{
							if(d_mean < 128.9005)
							{
								if(rss_min < -83.7324)
								{
									if(rss_max < -66.8758)
										return 0;
									else
									{
										if(rss_max < -62.95615)
										{
											if(rss_std < 4.3097)
												return 1;
											else
											{
												if(d_min < 56.86855)
												{
													if(rss_max < -66.86535)
														return 1;
													else
													{
														if(rss_max < -64.1257)
															return 0;
														else
														{
															if(d_max < 209.707)
																return 0;
															else
																return 1;
														}
													}
												}
												else
													return 1;
											}
										}
										else
										{
											if(d_max < 166.4165)
												return 0;
											else
												return 1;
										}
									}
								}
								else
								{
									if(rss_min < -82.9286)
									{
										if(rss_min < -82.93165)
										{
											if(rss_std < 4.130375)
											{
												if(d_max < 176.3915)
													return 1;
												else
												{
													if(d_min < 67.4988)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(rss_max < -62.7985)
												{
													if(d_min < 67.1928)
														return 0;
													else
													{
														if(d_std < 43.88525)
															return 1;
														else
															return 0;
													}
												}
												else
												{
													if(rss_min < -83.4868)
														return 0;
													else
													{
														if(d_min < 30.28815)
															return 0;
														else
															return 1;
													}
												}
											}
										}
										else
											return 1;
									}
									else
										return 0;
								}
							}
							else
							{
								if(d_max < 216.196)
									return 0;
								else
								{
									if(d_max < 216.3355)
										return 1;
									else
									{
										if(rss_mean < -77.11265)
											return 0;
										else
										{
											if(d_max < 233.7835)
												return 0;
											else
												return 1;
										}
									}
								}
							}
						}
						else
						{
							if(d_mean < 143.4595)
							{
								if(rss_min < -83.86395)
									return 1;
								else
								{
									if(d_std < 38.56505)
									{
										if(d_mean < 140.9)
											return 1;
										else
											return 0;
									}
									else
										return 0;
								}
							}
							else
							{
								if(d_max < 225.276)
									return 0;
								else
									return 1;
							}
						}
					}
				}
				else
				{
					if(d_max < 234.982)
					{
						if(rss_min < -84.56835)
						{
							if(d_std < 61.70485)
							{
								if(d_max < 221.418)
								{
									if(rss_max < -63.64085)
									{
										if(d_min < 67.3136)
										{
											if(d_min < 51.19565)
											{
												if(d_max < 214.4845)
													return 1;
												else
													return 0;
											}
											else
											{
												if(rss_min < -84.8088)
													return 1;
												else
												{
													if(d_min < 55.15165)
														return 1;
													else
														return 0;
												}
											}
										}
										else
											return 1;
									}
									else
										return 1;
								}
								else
								{
									if(d_min < 72.74445)
									{
										if(d_mean < 139.045)
										{
											if(rss_min < -84.9644)
												return 0;
											else
											{
												if(rss_mean < -77.99405)
												{
													if(d_min < 63.37265)
														return 0;
													else
														return 1;
												}
												else
												{
													if(rss_max < -65.1802)
													{
														if(rss_std < 4.88206)
														{
															if(d_min < 63.37265)
																return 0;
															else
															{
																if(d_min < 67.744)
																	return 1;
																else
																	return 0;
															}
														}
														else
														{
															if(d_std < 52.70035)
															{
																if(d_min < 62.4877)
																	return 0;
																else
																	return 1;
															}
															else
																return 0;
														}
													}
													else
													{
														if(rss_min < -84.8801)
															return 1;
														else
														{
															if(d_min < 46.0302)
															{
																if(rss_max < -62.21815)
																	return 0;
																else
																{
																	if(d_max < 227.2545)
																		return 1;
																	else
																		return 0;
																}
															}
															else
																return 1;
														}
													}
												}
											}
										}
										else
										{
											if(rss_min < -84.8864)
												return 0;
											else
											{
												if(rss_std < 4.498865)
													return 1;
												else
												{
													if(rss_mean < -78.44805)
														return 0;
													else
													{
														if(rss_max < -63.21165)
														{
															if(d_min < 62.30655)
																return 0;
															else
															{
																if(d_std < 54.48985)
																	return 1;
																else
																	return 0;
															}
														}
														else
															return 1;
													}
												}
											}
										}
									}
									else
										return 1;
								}
							}
							else
							{
								if(d_std < 62.02935)
								{
									if(d_max < 221.3705)
										return 1;
									else
										return 0;
								}
								else
									return 0;
							}
						}
						else
						{
							if(rss_max < -62.2201)
							{
								if(rss_std < 10.4347)
									return 0;
								else
								{
									if(d_max < 216.3685)
										return 1;
									else
										return 0;
								}
							}
							else
							{
								if(rss_std < 6.527785)
								{
									if(rss_min < -84.55995)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
						}
					}
					else
					{
						if(rss_std < 6.350105)
						{
							if(d_max < 236.101)
								return 1;
							else
							{
								if(rss_mean < -80.015)
									return 0;
								else
									return 1;
							}
						}
						else
							return 0;
					}
				}
			}
		}
		else
			return 2;
	}
	else
	{
		if(rss_mean < -70.5615)
		{
			if(rss_max < -73.9499)
			{
				if(d_min < 105.69)
				{
					if(rss_std < 3.23817)
					{
						if(d_min < 95.73415)
							return 0;
						else
						{
							if(rss_max < -74.2655)
							{
								if(d_min < 95.92385)
									return 1;
								else
								{
									if(rss_mean < -81.0916)
									{
										if(d_min < 102.6075)
										{
											if(d_max < 310.179)
												return 1;
											else
												return 0;
										}
										else
											return 0;
									}
									else
										return 0;
								}
							}
							else
							{
								if(rss_max < -74.11165)
									return 1;
								else
									return 0;
							}
						}
					}
					else
						return 0;
				}
				else
				{
					if(rss_max < -76.0864)
					{
						if(rss_min < -84.90165)
						{
							if(rss_max < -77.26515)
							{
								if(d_min < 162.502)
								{
									if(d_std < 21.8834)
									{
										if(d_mean < 192.7905)
											return 1;
										else
											return 0;
									}
									else
										return 0;
								}
								else
								{
									if(d_max < 279.633)
										return 0;
									else
										return 1;
								}
							}
							else
							{
								if(rss_min < -84.9787)
								{
									if(rss_max < -77.10165)
										return 1;
									else
									{
										if(d_max < 319.6055)
											return 1;
										else
											return 0;
									}
								}
								else
									return 0;
							}
						}
						else
						{
							if(rss_min < -84.66945)
							{
								if(d_min < 121.307)
								{
									if(rss_min < -84.8773)
										return 1;
									else
										return 0;
								}
								else
								{
									if(rss_std < 1.0047785)
										return 0;
									else
									{
										if(d_max < 266.2665)
										{
											if(rss_max < -77.7046)
											{
												if(d_max < 263.063)
												{
													if(d_max < 250.9285)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
											else
												return 1;
										}
										else
										{
											if(rss_mean < -80.53745)
												return 1;
											else
												return 0;
										}
									}
								}
							}
							else
							{
								if(rss_min < -84.5715)
								{
									if(d_min < 141.327)
									{
										if(d_min < 130.5235)
											return 1;
										else
											return 0;
									}
									else
										return 1;
								}
								else
								{
									if(d_max < 246.753)
									{
										if(rss_max < -81.1162)
											return 1;
										else
										{
											if(d_max < 246.458)
												return 0;
											else
												return 1;
										}
									}
									else
										return 0;
								}
							}
						}
					}
					else
					{
						if(d_max < 246.9765)
						{
							if(d_min < 109.052)
								return 0;
							else
							{
								if(rss_max < -74.48895)
								{
									if(d_min < 115.998)
										return 0;
									else
										return 1;
								}
								else
								{
									if(rss_max < -74.47925)
										return 0;
									else
										return 1;
								}
							}
						}
						else
						{
							if(rss_mean < -79.60865)
							{
								if(rss_std < 3.31045)
								{
									if(d_std < 22.5087)
									{
										if(d_min < 151.47)
											return 0;
										else
											return 1;
									}
									else
									{
										if(rss_max < -74.3732)
											return 1;
										else
										{
											if(rss_std < 3.14852)
												return 1;
											else
												return 0;
										}
									}
								}
								else
									return 0;
							}
							else
								return 0;
						}
					}
				}
			}
			else
			{
				if(rss_min < -84.45135)
				{
					if(rss_min < -84.91355)
					{
						if(d_min < 85.0723)
						{
							if(d_max < 242.8785)
							{
								if(rss_std < 4.13631)
								{
									if(d_max < 240.3245)
										return 1;
									else
									{
										if(d_min < 81.4396)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(rss_std < 5.51946)
									{
										if(rss_mean < -79.15295)
											return 0;
										else
										{
											if(d_std < 48.40835)
												return 1;
											else
											{
												if(d_min < 67.0154)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(d_mean < 155.994)
											return 1;
										else
											return 0;
									}
								}
							}
							else
							{
								if(rss_min < -84.914)
								{
									if(d_max < 299.624)
									{
										if(rss_max < -70.31655)
										{
											if(d_mean < 161.166)
											{
												if(rss_min < -84.9573)
													return 1;
												else
												{
													if(rss_max < -70.47815)
													{
														if(rss_mean < -79.86745)
															return 1;
														else
														{
															if(d_max < 254.9195)
																return 1;
															else
																return 0;
														}
													}
													else
														return 1;
												}
											}
											else
											{
												if(d_std < 62.0778)
												{
													if(d_std < 47.89795)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
										}
										else
										{
											if(rss_mean < -78.0587)
												return 1;
											else
											{
												if(d_min < 55.25235)
												{
													if(rss_min < -84.97795)
														return 1;
													else
													{
														if(rss_max < -66.0068)
															return 0;
														else
															return 1;
													}
												}
												else
												{
													if(rss_mean < -78.00185)
													{
														if(d_min < 59.6938)
															return 1;
														else
															return 0;
													}
													else
														return 1;
												}
											}
										}
									}
									else
										return 1;
								}
								else
									return 0;
							}
						}
						else
						{
							if(d_max < 247.4245)
							{
								if(rss_max < -73.34265)
									return 0;
								else
									return 1;
							}
							else
							{
								if(d_mean < 143.7245)
								{
									if(rss_max < -73.18085)
									{
										if(d_min < 103.84865)
											return 0;
										else
											return 1;
									}
									else
										return 1;
								}
								else
									return 1;
							}
						}
					}
					else
					{
						if(d_std < 68.444)
						{
							if(d_max < 239.2885)
							{
								if(d_mean < 154.7245)
								{
									if(d_mean < 151.3935)
										return 1;
									else
									{
										if(d_max < 238.2235)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(d_min < 69.62235)
										return 0;
									else
										return 1;
								}
							}
							else
							{
								if(rss_max < -68.74755)
								{
									if(rss_std < 4.521635)
									{
										if(d_mean < 129.7745)
										{
											if(rss_min < -84.8444)
											{
												if(rss_min < -84.8634)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
										else
										{
											if(d_max < 247.4035)
											{
												if(d_max < 246.9795)
												{
													if(d_min < 73.47395)
													{
														if(d_std < 43.58145)
														{
															if(d_min < 73.3609)
																return 1;
															else
																return 0;
														}
														else
															return 1;
													}
													else
														return 1;
												}
												else
													return 0;
											}
											else
											{
												if(rss_min < -84.76245)
													return 1;
												else
												{
													if(rss_min < -84.7613)
													{
														if(d_min < 78.465)
															return 1;
														else
															return 0;
													}
													else
														return 1;
												}
											}
										}
									}
									else
									{
										if(d_min < 66.12255)
										{
											if(d_max < 252.4135)
											{
												if(d_mean < 143.5185)
													return 1;
												else
													return 0;
											}
											else
											{
												if(d_std < 46.1287)
													return 1;
												else
													return 0;
											}
										}
										else
											return 1;
									}
								}
								else
									return 1;
							}
						}
						else
						{
							if(rss_max < -67.5132)
							{
								if(rss_std < 4.68193)
									return 1;
								else
									return 0;
							}
							else
								return 1;
						}
					}
				}
				else
				{
					if(rss_max < -71.22)
					{
						if(d_std < 42.0107)
						{
							if(rss_min < -84.29405)
								return 0;
							else
							{
								if(rss_mean < -78.69335)
								{
									if(rss_min < -82.67485)
										return 1;
									else
										return 0;
								}
								else
								{
									if(d_min < 185.78785)
										return 0;
									else
										return 2;
								}
							}
						}
						else
						{
							if(d_max < 315.057)
								return 0;
							else
								return 2;
						}
					}
					else
					{
						if(d_mean < 146.5075)
						{
							if(rss_min < -83.15675)
								return 1;
							else
							{
								if(rss_max < -64.50775)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(d_std < 72.1903)
							{
								if(d_std < 50.1739)
									return 1;
								else
									return 0;
							}
							else
							{
								if(d_max < 347.189)
									return 1;
								else
									return 2;
							}
						}
					}
				}
			}
		}
		else
		{
			if(d_std < 155.5305)
			{
				if(d_mean < 108.3107)
					return 1;
				else
					return 2;
			}
			else
			{
				if(rss_max < -56.46445)
					return 1;
				else
					return 2;
			}
		}
	}
}

int tree_18(float d_max, float d_min, float d_mean, float d_std, float rss_max, float rss_min, float rss_mean, float rss_std)
{
	if(rss_std < 5.09277)
	{
		if(d_max < 237.091)
		{
			if(rss_std < 2.911555)
			{
				if(rss_max < -74.6755)
				{
					if(d_min < 121.2515)
					{
						if(rss_max < -79.6209)
						{
							if(d_max < 220.6315)
								return 1;
							else
								return 0;
						}
						else
						{
							if(rss_std < 2.866765)
								return 0;
							else
							{
								if(rss_std < 2.866805)
									return 1;
								else
								{
									if(d_mean < 158.5845)
									{
										if(rss_max < -74.75085)
											return 0;
										else
										{
											if(d_mean < 155.6415)
												return 0;
											else
												return 1;
										}
									}
									else
										return 0;
								}
							}
						}
					}
					else
					{
						if(rss_max < -76.28535)
						{
							if(rss_std < 1.81342)
							{
								if(d_min < 168.82)
									return 0;
								else
								{
									if(d_mean < 182.803)
									{
										if(rss_std < 1.44002)
										{
											if(d_max < 213.668)
												return 0;
											else
												return 1;
										}
										else
											return 1;
									}
									else
										return 0;
								}
							}
							else
							{
								if(d_std < 20.48755)
									return 1;
								else
								{
									if(rss_min < -84.26245)
										return 0;
									else
									{
										if(rss_max < -77.58485)
										{
											if(rss_min < -83.01325)
												return 0;
											else
											{
												if(d_mean < 165.48)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(d_max < 223.8465)
												return 0;
											else
												return 1;
										}
									}
								}
							}
						}
						else
						{
							if(rss_min < -84.9342)
								return 0;
							else
								return 1;
						}
					}
				}
				else
				{
					if(rss_mean < -79.18595)
					{
						if(rss_min < -84.46485)
						{
							if(d_min < 99.73425)
							{
								if(rss_max < -72.8049)
									return 0;
								else
								{
									if(d_max < 216.343)
										return 1;
									else
									{
										if(d_min < 81.91025)
											return 0;
										else
										{
											if(d_std < 33.595)
												return 0;
											else
												return 1;
										}
									}
								}
							}
							else
							{
								if(rss_std < 2.357335)
								{
									if(d_mean < 193.113)
										return 0;
									else
										return 1;
								}
								else
								{
									if(rss_max < -72.06425)
										return 1;
									else
									{
										if(d_std < 32.4591)
											return 0;
										else
											return 1;
									}
								}
							}
						}
						else
						{
							if(d_mean < 148.3505)
							{
								if(d_std < 31.42)
								{
									if(rss_min < -83.75305)
									{
										if(rss_max < -74.4173)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
								else
									return 0;
							}
							else
								return 0;
						}
					}
					else
					{
						if(d_min < 99.12555)
							return 0;
						else
						{
							if(rss_mean < -78.64155)
								return 0;
							else
								return 1;
						}
					}
				}
			}
			else
			{
				if(rss_max < -70.5021)
				{
					if(rss_min < -84.2805)
					{
						if(d_std < 38.08115)
						{
							if(d_min < 76.82605)
								return 0;
							else
							{
								if(rss_min < -84.9193)
								{
									if(d_max < 220.6985)
										return 1;
									else
										return 0;
								}
								else
								{
									if(d_min < 108.94)
									{
										if(rss_max < -74.81545)
											return 0;
										else
										{
											if(d_max < 218.524)
											{
												if(d_min < 84.15975)
												{
													if(d_min < 78.28805)
														return 1;
													else
													{
														if(d_std < 35.2162)
															return 1;
														else
															return 0;
													}
												}
												else
												{
													if(d_mean < 176.6955)
													{
														if(rss_std < 3.29329)
															return 1;
														else
														{
															if(d_min < 85.9139)
																return 0;
															else
																return 1;
														}
													}
													else
														return 0;
												}
											}
											else
											{
												if(rss_std < 3.30034)
												{
													if(d_min < 79.18455)
													{
														if(d_max < 224.047)
															return 0;
														else
															return 1;
													}
													else
													{
														if(d_max < 226.2915)
														{
															if(rss_max < -72.90755)
															{
																if(d_min < 94.3527)
																	return 0;
																else
																{
																	if(rss_min < -84.7979)
																		return 0;
																	else
																		return 1;
																}
															}
															else
															{
																if(rss_min < -84.73715)
																	return 1;
																else
																{
																	if(rss_mean < -79.05765)
																		return 0;
																	else
																		return 1;
																}
															}
														}
														else
														{
															if(d_min < 97.49525)
																return 0;
															else
																return 1;
														}
													}
												}
												else
												{
													if(d_max < 228.1675)
													{
														if(d_min < 94.04505)
															return 1;
														else
															return 0;
													}
													else
														return 1;
												}
											}
										}
									}
									else
										return 1;
								}
							}
						}
						else
						{
							if(d_max < 235.0305)
							{
								if(d_mean < 151.4995)
								{
									if(rss_max < -71.5066)
									{
										if(rss_mean < -79.78595)
										{
											if(d_std < 40.1385)
												return 0;
											else
											{
												if(d_std < 44.1099)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(d_std < 39.8649)
											{
												if(rss_std < 3.00858)
												{
													if(rss_max < -73.3728)
														return 0;
													else
														return 1;
												}
												else
												{
													if(rss_std < 3.03768)
													{
														if(d_max < 228.1905)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
											}
											else
												return 0;
										}
									}
									else
									{
										if(d_min < 73.35345)
											return 0;
										else
										{
											if(d_std < 47.7873)
											{
												if(rss_std < 3.82735)
												{
													if(d_min < 77.37755)
													{
														if(d_min < 76.2267)
														{
															if(rss_min < -84.86405)
															{
																if(d_min < 73.39295)
																	return 1;
																else
																	return 0;
															}
															else
																return 1;
														}
														else
															return 0;
													}
													else
														return 1;
												}
												else
												{
													if(d_min < 74.98915)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(d_max < 232.7735)
												{
													if(rss_std < 3.74918)
														return 1;
													else
														return 0;
												}
												else
												{
													if(d_min < 73.98395)
														return 1;
													else
														return 0;
												}
											}
										}
									}
								}
								else
								{
									if(rss_std < 3.623015)
									{
										if(d_mean < 164.1045)
										{
											if(d_max < 234.2835)
											{
												if(rss_min < -84.8859)
												{
													if(d_max < 219.006)
														return 1;
													else
													{
														if(rss_min < -84.98305)
														{
															if(rss_min < -84.9846)
																return 0;
															else
																return 1;
														}
														else
															return 0;
													}
												}
												else
												{
													if(rss_min < -84.8268)
													{
														if(rss_min < -84.83055)
														{
															if(d_min < 79.78485)
																return 1;
															else
																return 0;
														}
														else
															return 1;
													}
													else
													{
														if(rss_std < 3.058605)
														{
															if(rss_max < -74.4616)
																return 0;
															else
															{
																if(d_max < 222.6725)
																	return 0;
																else
																	return 1;
															}
														}
														else
														{
															if(rss_max < -71.23265)
																return 0;
															else
															{
																if(d_mean < 154.9345)
																	return 1;
																else
																	return 0;
															}
														}
													}
												}
											}
											else
												return 1;
										}
										else
										{
											if(rss_max < -71.20025)
												return 0;
											else
											{
												if(d_min < 73.4254)
													return 0;
												else
													return 1;
											}
										}
									}
									else
										return 0;
								}
							}
							else
							{
								if(rss_max < -71.4353)
									return 0;
								else
								{
									if(rss_max < -70.87705)
									{
										if(rss_min < -84.9421)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
							}
						}
					}
					else
					{
						if(rss_min < -83.90345)
						{
							if(d_max < 223.2415)
								return 0;
							else
							{
								if(d_mean < 137.9285)
									return 0;
								else
								{
									if(d_max < 234.205)
									{
										if(d_min < 71.9574)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
							}
						}
						else
							return 0;
					}
				}
				else
				{
					if(d_min < 69.9001)
					{
						if(rss_max < -67.27985)
						{
							if(rss_min < -84.6074)
							{
								if(d_mean < 140.791)
								{
									if(rss_std < 4.878595)
									{
										if(rss_min < -84.98285)
											return 0;
										else
										{
											if(d_max < 216.4645)
												return 1;
											else
											{
												if(d_min < 54.28745)
													return 0;
												else
												{
													if(rss_max < -70.2335)
														return 0;
													else
													{
														if(d_max < 225.168)
														{
															if(d_mean < 127.4895)
															{
																if(d_max < 222.2465)
																	return 1;
																else
																	return 0;
															}
															else
															{
																if(d_max < 221.4935)
																	return 1;
																else
																{
																	if(d_min < 56.749)
																		return 1;
																	else
																		return 0;
																}
															}
														}
														else
														{
															if(rss_min < -84.888)
															{
																if(d_mean < 134.0085)
																{
																	if(d_min < 59.0629)
																		return 0;
																	else
																		return 1;
																}
																else
																	return 0;
															}
															else
																return 1;
														}
													}
												}
											}
										}
									}
									else
									{
										if(d_max < 221.092)
											return 1;
										else
										{
											if(rss_min < -84.77975)
											{
												if(rss_std < 4.88218)
												{
													if(d_min < 64.8317)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
											else
											{
												if(d_std < 53.0194)
													return 1;
												else
													return 0;
											}
										}
									}
								}
								else
								{
									if(rss_min < -84.9002)
										return 0;
									else
									{
										if(rss_min < -84.86875)
										{
											if(rss_std < 4.035155)
												return 1;
											else
											{
												if(rss_std < 4.63348)
												{
													if(d_std < 50.3749)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
										}
										else
										{
											if(rss_mean < -79.1585)
												return 0;
											else
											{
												if(rss_std < 4.590215)
												{
													if(rss_max < -69.4198)
														return 0;
													else
													{
														if(rss_max < -68.5519)
															return 1;
														else
															return 0;
													}
												}
												else
													return 0;
											}
										}
									}
								}
							}
							else
							{
								if(d_std < 33.31525)
								{
									if(rss_max < -67.7465)
									{
										if(rss_std < 3.97632)
											return 0;
										else
										{
											if(rss_min < -83.29725)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(d_min < 61.08745)
											return 0;
										else
											return 1;
									}
								}
								else
									return 0;
							}
						}
						else
						{
							if(rss_min < -84.4989)
							{
								if(d_max < 219.4315)
									return 1;
								else
								{
									if(d_mean < 158.0805)
									{
										if(rss_min < -84.93755)
										{
											if(d_min < 51.13775)
												return 0;
											else
												return 1;
										}
										else
										{
											if(d_min < 50.5743)
											{
												if(d_mean < 130.4745)
												{
													if(d_mean < 112.7545)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
											else
												return 1;
										}
									}
									else
									{
										if(d_std < 52.2821)
											return 0;
										else
										{
											if(d_max < 230.627)
												return 0;
											else
												return 1;
										}
									}
								}
							}
							else
							{
								if(d_min < 53.31785)
								{
									if(rss_min < -84.1814)
									{
										if(rss_max < -64.3743)
										{
											if(d_max < 210.8155)
											{
												if(d_max < 184.1655)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
										else
											return 1;
									}
									else
										return 0;
								}
								else
								{
									if(d_min < 56.86855)
									{
										if(d_max < 206.0525)
											return 0;
										else
											return 1;
									}
									else
									{
										if(d_max < 192.349)
											return 0;
										else
											return 1;
									}
								}
							}
						}
					}
					else
					{
						if(rss_max < -61.17625)
						{
							if(d_mean < 144.764)
							{
								if(rss_max < -70.1967)
								{
									if(rss_max < -70.36295)
										return 1;
									else
										return 0;
								}
								else
								{
									if(d_min < 92.42905)
										return 1;
									else
									{
										if(rss_min < -84.9364)
											return 0;
										else
											return 1;
									}
								}
							}
							else
							{
								if(rss_min < -84.4156)
								{
									if(rss_mean < -78.8958)
									{
										if(rss_mean < -80.6346)
										{
											if(d_max < 230.5715)
											{
												if(rss_min < -84.81355)
													return 1;
												else
												{
													if(rss_max < -69.81375)
														return 1;
													else
														return 0;
												}
											}
											else
												return 1;
										}
										else
										{
											if(rss_std < 4.96064)
											{
												if(rss_std < 3.42029)
												{
													if(rss_max < -68.1424)
													{
														if(rss_mean < -78.9954)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
												else
													return 1;
											}
											else
											{
												if(d_mean < 160.088)
													return 1;
												else
													return 0;
											}
										}
									}
									else
									{
										if(rss_std < 3.635645)
										{
											if(d_max < 219.1825)
												return 1;
											else
											{
												if(d_mean < 148.958)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(rss_max < -69.74795)
												return 1;
											else
											{
												if(d_min < 85.50385)
													return 1;
												else
												{
													if(d_std < 43.93805)
														return 0;
													else
														return 1;
												}
											}
										}
									}
								}
								else
									return 0;
							}
						}
						else
							return 2;
					}
				}
			}
		}
		else
		{
			if(rss_mean < -73.69515)
			{
				if(rss_max < -73.9499)
				{
					if(rss_max < -77.79035)
					{
						if(d_max < 291.901)
						{
							if(rss_mean < -82.55285)
							{
								if(d_std < 36.0322)
									return 0;
								else
								{
									if(d_min < 164.2695)
										return 0;
									else
										return 1;
								}
							}
							else
							{
								if(d_mean < 169.4995)
								{
									if(d_std < 47.3274)
									{
										if(d_min < 127.6975)
											return 0;
										else
											return 1;
									}
									else
										return 1;
								}
								else
								{
									if(rss_std < 1.94066)
									{
										if(rss_min < -84.5882)
										{
											if(rss_min < -84.79195)
											{
												if(d_std < 29.67345)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
										else
										{
											if(d_std < 46.40865)
												return 0;
											else
												return 1;
										}
									}
									else
										return 0;
								}
							}
						}
						else
						{
							if(rss_min < -84.92335)
							{
								if(rss_max < -78.26935)
									return 0;
								else
								{
									if(d_min < 142.2635)
										return 0;
									else
										return 1;
								}
							}
							else
							{
								if(rss_mean < -80.49795)
									return 1;
								else
									return 0;
							}
						}
					}
					else
					{
						if(rss_std < 3.221685)
						{
							if(d_min < 131.092)
							{
								if(rss_std < 2.170345)
								{
									if(rss_mean < -81.77445)
									{
										if(d_max < 249.031)
											return 0;
										else
											return 1;
									}
									else
									{
										if(d_mean < 191.4135)
										{
											if(d_mean < 171.3375)
											{
												if(rss_std < 1.8583)
													return 0;
												else
												{
													if(d_min < 117.1955)
													{
														if(d_mean < 154.878)
															return 1;
														else
															return 0;
													}
													else
														return 1;
												}
											}
											else
											{
												if(d_std < 36.00615)
												{
													if(d_std < 32.79735)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
										}
										else
											return 1;
									}
								}
								else
								{
									if(rss_max < -76.0857)
									{
										if(d_max < 307.326)
										{
											if(rss_mean < -80.32125)
											{
												if(rss_mean < -80.4997)
													return 0;
												else
												{
													if(d_mean < 172.878)
														return 1;
													else
														return 0;
												}
											}
											else
												return 1;
										}
										else
										{
											if(d_max < 319.6055)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(d_min < 107.0855)
										{
											if(rss_min < -84.9177)
												return 0;
											else
											{
												if(d_max < 258.9575)
													return 0;
												else
												{
													if(d_mean < 148.4255)
													{
														if(d_min < 99.5562)
															return 0;
														else
															return 1;
													}
													else
													{
														if(rss_max < -75.4136)
															return 0;
														else
														{
															if(rss_std < 3.059945)
																return 1;
															else
															{
																if(rss_min < -84.76085)
																	return 1;
																else
																	return 0;
															}
														}
													}
												}
											}
										}
										else
										{
											if(rss_min < -84.9489)
											{
												if(rss_max < -75.78485)
												{
													if(d_min < 118.052)
														return 0;
													else
														return 1;
												}
												else
												{
													if(d_max < 243.5555)
														return 0;
													else
													{
														if(d_min < 112.591)
														{
															if(d_min < 110.468)
																return 1;
															else
																return 0;
														}
														else
															return 1;
													}
												}
											}
											else
												return 1;
										}
									}
								}
							}
							else
							{
								if(rss_min < -84.31275)
									return 1;
								else
									return 0;
							}
						}
						else
						{
							if(d_std < 35.60425)
								return 1;
							else
							{
								if(d_min < 131.2055)
								{
									if(rss_std < 3.23817)
									{
										if(d_min < 100.13415)
											return 0;
										else
										{
											if(d_max < 251.228)
												return 0;
											else
												return 1;
										}
									}
									else
										return 0;
								}
								else
								{
									if(rss_max < -74.26)
										return 1;
									else
										return 0;
								}
							}
						}
					}
				}
				else
				{
					if(rss_min < -84.45075)
					{
						if(d_max < 241.4465)
						{
							if(d_max < 240.7555)
							{
								if(d_std < 51.15145)
								{
									if(d_mean < 181.8475)
									{
										if(rss_std < 3.896035)
											return 1;
										else
										{
											if(rss_mean < -79.28545)
											{
												if(rss_max < -70.89455)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
									}
									else
									{
										if(d_max < 237.8115)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(rss_min < -84.9159)
										return 0;
									else
									{
										if(d_max < 238.349)
										{
											if(d_mean < 148.2405)
												return 1;
											else
												return 0;
										}
										else
										{
											if(rss_mean < -80.82935)
												return 0;
											else
												return 1;
										}
									}
								}
							}
							else
							{
								if(d_max < 240.96)
									return 0;
								else
								{
									if(d_std < 48.32655)
									{
										if(rss_std < 3.075565)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
							}
						}
						else
						{
							if(rss_min < -84.9134)
							{
								if(rss_min < -84.914)
								{
									if(d_max < 299.6735)
									{
										if(d_max < 299.4735)
										{
											if(rss_min < -84.9492)
											{
												if(rss_max < -73.6198)
												{
													if(d_max < 258.105)
														return 0;
													else
														return 1;
												}
												else
												{
													if(d_mean < 127.0775)
													{
														if(d_max < 257.8985)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
											}
											else
											{
												if(rss_min < -84.9488)
													return 0;
												else
												{
													if(rss_max < -71.07705)
													{
														if(rss_mean < -79.58505)
															return 1;
														else
														{
															if(d_max < 258.1475)
																return 1;
															else
																return 0;
														}
													}
													else
														return 1;
												}
											}
										}
										else
											return 0;
									}
									else
										return 1;
								}
								else
									return 0;
							}
							else
							{
								if(rss_std < 4.803595)
								{
									if(rss_max < -69.5061)
									{
										if(d_min < 66.1233)
										{
											if(rss_mean < -78.88225)
												return 1;
											else
											{
												if(rss_max < -70.3789)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(d_min < 82.73485)
											{
												if(d_min < 82.6258)
												{
													if(d_max < 247.431)
													{
														if(rss_std < 2.849325)
															return 0;
														else
														{
															if(rss_std < 3.874565)
																return 1;
															else
															{
																if(d_max < 246.2185)
																	return 1;
																else
																	return 0;
															}
														}
													}
													else
														return 1;
												}
												else
													return 0;
											}
											else
												return 1;
										}
									}
									else
										return 1;
								}
								else
								{
									if(rss_max < -68.8553)
									{
										if(d_min < 70.0881)
											return 0;
										else
											return 1;
									}
									else
										return 1;
								}
							}
						}
					}
					else
					{
						if(rss_max < -71.21825)
						{
							if(d_max < 279.8395)
							{
								if(d_std < 42.75755)
								{
									if(rss_min < -84.29405)
										return 0;
									else
									{
										if(rss_max < -73.19355)
											return 1;
										else
										{
											if(d_max < 244.2165)
												return 1;
											else
											{
												if(d_min < 95.78605)
													return 0;
												else
													return 1;
											}
										}
									}
								}
								else
									return 0;
							}
							else
								return 1;
						}
						else
						{
							if(d_mean < 144.437)
							{
								if(rss_std < 3.365825)
								{
									if(d_max < 240.549)
										return 1;
									else
										return 0;
								}
								else
									return 1;
							}
							else
							{
								if(rss_std < 4.235895)
								{
									if(d_max < 250.208)
										return 0;
									else
										return 1;
								}
								else
								{
									if(d_max < 290.704)
										return 0;
									else
										return 1;
								}
							}
						}
					}
				}
			}
			else
				return 2;
		}
	}
	else
	{
		if(rss_mean < -70.57365)
		{
			if(d_max < 234.899)
			{
				if(d_mean < 138.461)
				{
					if(rss_min < -83.9608)
					{
						if(rss_max < -65.6019)
						{
							if(d_min < 67.3319)
							{
								if(rss_std < 5.47078)
								{
									if(d_std < 45.7338)
									{
										if(d_mean < 132.3025)
										{
											if(d_max < 223.447)
												return 1;
											else
												return 0;
										}
										else
										{
											if(d_mean < 132.8085)
											{
												if(rss_max < -68.00945)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
									}
									else
									{
										if(rss_min < -84.76895)
										{
											if(rss_min < -84.8655)
											{
												if(d_max < 213.126)
													return 1;
												else
													return 0;
											}
											else
											{
												if(d_min < 62.4877)
												{
													if(d_std < 48.6602)
														return 1;
													else
													{
														if(rss_max < -66.41215)
															return 0;
														else
														{
															if(d_max < 226.3595)
																return 0;
															else
																return 1;
														}
													}
												}
												else
													return 1;
											}
										}
										else
											return 0;
									}
								}
								else
									return 0;
							}
							else
								return 1;
						}
						else
						{
							if(d_std < 61.5329)
							{
								if(d_min < 47.3645)
								{
									if(d_max < 216.2405)
									{
										if(rss_min < -84.4559)
											return 1;
										else
										{
											if(d_mean < 125.707)
											{
												if(d_max < 171.399)
													return 0;
												else
												{
													if(d_std < 51.00725)
														return 1;
													else
													{
														if(d_max < 206.6475)
															return 1;
														else
															return 0;
													}
												}
											}
											else
											{
												if(d_std < 50.39825)
													return 1;
												else
													return 0;
											}
										}
									}
									else
									{
										if(rss_max < -64.3915)
										{
											if(rss_std < 5.213165)
											{
												if(d_max < 221.2345)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
										else
										{
											if(d_max < 218.0055)
												return 0;
											else
											{
												if(d_std < 50.69025)
													return 1;
												else
												{
													if(d_max < 227.2545)
													{
														if(rss_min < -84.79375)
															return 1;
														else
														{
															if(d_mean < 126.4375)
															{
																if(d_max < 219.6075)
																	return 1;
																else
																	return 0;
															}
															else
															{
																if(rss_max < -62.9076)
																	return 0;
																else
																	return 1;
															}
														}
													}
													else
														return 0;
												}
											}
										}
									}
								}
								else
									return 1;
							}
							else
							{
								if(d_max < 221.5)
								{
									if(d_max < 220.6335)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
						}
					}
					else
					{
						if(d_std < 49.1784)
						{
							if(rss_max < -62.83475)
								return 0;
							else
							{
								if(rss_std < 5.626015)
								{
									if(rss_min < -82.7818)
									{
										if(d_min < 32.6214)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
								else
									return 0;
							}
						}
						else
							return 0;
					}
				}
				else
				{
					if(d_std < 50.09965)
					{
						if(d_max < 224.727)
						{
							if(rss_max < -62.93355)
							{
								if(rss_mean < -79.518)
								{
									if(d_min < 53.21465)
										return 1;
									else
										return 0;
								}
								else
									return 0;
							}
							else
								return 1;
						}
						else
						{
							if(rss_max < -68.59095)
								return 1;
							else
							{
								if(rss_mean < -77.79905)
									return 0;
								else
									return 1;
							}
						}
					}
					else
					{
						if(d_std < 57.55625)
						{
							if(rss_min < -84.8316)
							{
								if(d_max < 227.7315)
								{
									if(d_std < 53.4541)
										return 0;
									else
									{
										if(rss_max < -67.04995)
											return 0;
										else
										{
											if(d_max < 224.825)
											{
												if(d_min < 51.02145)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
									}
								}
								else
									return 0;
							}
							else
							{
								if(d_min < 37.3401)
								{
									if(d_max < 207.2355)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
						}
						else
							return 0;
					}
				}
			}
			else
			{
				if(rss_mean < -79.1836)
				{
					if(rss_min < -84.85695)
					{
						if(rss_max < -67.39915)
							return 0;
						else
							return 1;
					}
					else
					{
						if(rss_max < -68.75605)
							return 0;
						else
						{
							if(d_max < 241.3155)
								return 0;
							else
								return 1;
						}
					}
				}
				else
				{
					if(d_std < 74.0191)
					{
						if(rss_min < -84.92955)
						{
							if(d_max < 277.321)
							{
								if(rss_std < 6.040365)
								{
									if(rss_min < -84.97795)
										return 1;
									else
									{
										if(rss_min < -84.96815)
											return 0;
										else
										{
											if(rss_max < -67.5315)
												return 0;
											else
												return 1;
										}
									}
								}
								else
									return 1;
							}
							else
							{
								if(d_max < 387.9445)
									return 1;
								else
									return 2;
							}
						}
						else
						{
							if(rss_mean < -78.819)
							{
								if(rss_max < -60.829)
									return 1;
								else
									return 0;
							}
							else
								return 1;
						}
					}
					else
					{
						if(d_min < 52.2598)
						{
							if(rss_max < -59.33835)
							{
								if(rss_std < 9.318055)
								{
									if(d_max < 252.1295)
										return 0;
									else
										return 1;
								}
								else
								{
									if(d_min < 31.15655)
										return 0;
									else
										return 1;
								}
							}
							else
								return 1;
						}
						else
						{
							if(rss_max < -67.45025)
								return 0;
							else
							{
								if(d_max < 334.049)
									return 1;
								else
									return 2;
							}
						}
					}
				}
			}
		}
		else
		{
			if(rss_std < 12.2188)
				return 2;
			else
				return 0;
		}
	}
}

int tree_19(float d_max, float d_min, float d_mean, float d_std, float rss_max, float rss_min, float rss_mean, float rss_std)
{
	if(rss_std < 5.053775)
	{
		if(d_max < 237.091)
		{
			if(rss_max < -70.5105)
			{
				if(rss_max < -74.67505)
				{
					if(d_max < 228.164)
					{
						if(d_max < 222.9955)
						{
							if(rss_min < -84.66985)
							{
								if(d_max < 222.9345)
								{
									if(d_max < 214.843)
									{
										if(d_max < 206.7645)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
								else
									return 1;
							}
							else
							{
								if(d_min < 101.6775)
								{
									if(d_min < 101.576)
										return 0;
									else
										return 1;
								}
								else
								{
									if(d_min < 168.7785)
										return 0;
									else
									{
										if(d_min < 168.9895)
											return 1;
										else
											return 0;
									}
								}
							}
						}
						else
							return 0;
					}
					else
					{
						if(rss_min < -84.6173)
						{
							if(d_max < 228.1955)
								return 1;
							else
							{
								if(d_mean < 181.0925)
									return 0;
								else
								{
									if(rss_mean < -81.55035)
									{
										if(d_max < 234.44)
											return 0;
										else
										{
											if(rss_max < -76.72815)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(d_max < 230.8595)
											return 1;
										else
											return 0;
									}
								}
							}
						}
						else
						{
							if(rss_max < -77.6486)
							{
								if(rss_mean < -80.73315)
									return 0;
								else
									return 1;
							}
							else
							{
								if(rss_max < -75.71325)
								{
									if(d_std < 31.0054)
									{
										if(d_std < 29.40525)
											return 1;
										else
										{
											if(d_max < 232.1185)
												return 1;
											else
												return 0;
										}
									}
									else
										return 0;
								}
								else
									return 0;
							}
						}
					}
				}
				else
				{
					if(d_min < 105.798)
					{
						if(rss_min < -84.2019)
						{
							if(d_std < 38.40085)
							{
								if(rss_max < -73.33985)
								{
									if(d_max < 223.422)
									{
										if(rss_min < -84.75875)
										{
											if(rss_min < -84.88675)
												return 0;
											else
											{
												if(d_mean < 158.136)
													return 1;
												else
												{
													if(d_std < 34.7984)
														return 1;
													else
														return 0;
												}
											}
										}
										else
											return 0;
									}
									else
										return 0;
								}
								else
								{
									if(d_min < 88.89285)
									{
										if(rss_min < -84.8853)
										{
											if(rss_min < -84.98355)
											{
												if(d_max < 229.022)
													return 0;
												else
													return 1;
											}
											else
											{
												if(rss_std < 3.55099)
													return 0;
												else
												{
													if(rss_mean < -79.6616)
													{
														if(d_min < 79.14395)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
											}
										}
										else
										{
											if(rss_std < 2.889535)
												return 0;
											else
											{
												if(rss_max < -73.2465)
													return 1;
												else
												{
													if(d_mean < 160.8375)
													{
														if(rss_max < -73.05305)
														{
															if(rss_max < -73.0634)
																return 0;
															else
																return 1;
														}
														else
														{
															if(d_min < 82.8857)
															{
																if(rss_mean < -79.1751)
																{
																	if(d_mean < 146.346)
																		return 1;
																	else
																		return 0;
																}
																else
																	return 0;
															}
															else
															{
																if(rss_max < -71.8485)
																	return 0;
																else
																	return 1;
															}
														}
													}
													else
													{
														if(rss_min < -84.82665)
															return 1;
														else
														{
															if(d_max < 213.0495)
																return 1;
															else
																return 0;
														}
													}
												}
											}
										}
									}
									else
									{
										if(d_max < 221.024)
											return 1;
										else
										{
											if(rss_min < -84.84505)
												return 0;
											else
											{
												if(d_mean < 162.089)
													return 1;
												else
													return 0;
											}
										}
									}
								}
							}
							else
							{
								if(d_mean < 151.7385)
								{
									if(rss_min < -84.89895)
									{
										if(rss_mean < -79.7692)
										{
											if(rss_max < -74.35985)
												return 0;
											else
												return 1;
										}
										else
										{
											if(rss_std < 4.87693)
											{
												if(d_min < 100.63795)
													return 0;
												else
													return 1;
											}
											else
											{
												if(d_max < 232.582)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(rss_max < -71.5066)
										{
											if(d_std < 41.66605)
											{
												if(d_mean < 146.4785)
													return 0;
												else
												{
													if(rss_mean < -78.9)
													{
														if(rss_min < -84.80205)
														{
															if(d_max < 230.29)
																return 1;
															else
																return 0;
														}
														else
															return 0;
													}
													else
														return 1;
												}
											}
											else
												return 0;
										}
										else
										{
											if(rss_std < 3.76433)
											{
												if(d_min < 72.83305)
													return 0;
												else
												{
													if(d_min < 77.37755)
													{
														if(d_min < 76.33665)
														{
															if(rss_std < 3.295085)
																return 0;
															else
																return 1;
														}
														else
															return 0;
													}
													else
														return 1;
												}
											}
											else
											{
												if(d_max < 234.1155)
												{
													if(d_min < 74.98915)
													{
														if(rss_max < -70.67845)
															return 0;
														else
														{
															if(rss_min < -84.5397)
																return 0;
															else
																return 1;
														}
													}
													else
													{
														if(rss_max < -71.1873)
															return 0;
														else
															return 1;
													}
												}
												else
												{
													if(d_std < 43.8657)
														return 0;
													else
														return 1;
												}
											}
										}
									}
								}
								else
								{
									if(d_max < 235.0305)
									{
										if(d_std < 41.20935)
										{
											if(rss_max < -72.08135)
											{
												if(d_min < 94.6123)
													return 0;
												else
												{
													if(d_min < 94.81685)
														return 1;
													else
														return 0;
												}
											}
											else
											{
												if(d_min < 82.0999)
												{
													if(rss_std < 3.046715)
													{
														if(d_max < 233.405)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
												else
												{
													if(d_mean < 168.0075)
														return 1;
													else
														return 0;
												}
											}
										}
										else
										{
											if(rss_max < -71.04425)
												return 0;
											else
											{
												if(rss_std < 3.601865)
												{
													if(d_mean < 160.766)
														return 1;
													else
														return 0;
												}
												else
													return 0;
											}
										}
									}
									else
									{
										if(d_mean < 166.313)
										{
											if(rss_min < -84.92005)
												return 0;
											else
												return 1;
										}
										else
										{
											if(d_std < 43.8584)
											{
												if(d_max < 235.9885)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
									}
								}
							}
						}
						else
						{
							if(d_max < 223.6645)
								return 0;
							else
							{
								if(rss_min < -83.7527)
								{
									if(d_min < 71.9574)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
						}
					}
					else
					{
						if(rss_min < -84.39025)
						{
							if(d_min < 154.737)
							{
								if(rss_min < -84.85375)
									return 1;
								else
								{
									if(d_mean < 160.4005)
									{
										if(d_min < 111.4895)
										{
											if(rss_max < -72.3673)
											{
												if(rss_min < -84.57375)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
										else
											return 1;
									}
									else
									{
										if(d_max < 211.092)
											return 1;
										else
											return 0;
									}
								}
							}
							else
								return 0;
						}
						else
						{
							if(rss_std < 2.558655)
								return 0;
							else
							{
								if(d_mean < 149.1495)
								{
									if(d_mean < 139.457)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
						}
					}
				}
			}
			else
			{
				if(rss_mean < -75.55475)
				{
					if(d_min < 69.9001)
					{
						if(rss_max < -67.48355)
						{
							if(rss_min < -84.6074)
							{
								if(rss_mean < -78.7043)
								{
									if(rss_min < -84.9002)
										return 0;
									else
									{
										if(d_mean < 141.7495)
											return 1;
										else
										{
											if(rss_min < -84.8656)
											{
												if(d_mean < 157.054)
													return 0;
												else
												{
													if(d_min < 62.44115)
													{
														if(d_max < 227.7065)
															return 1;
														else
															return 0;
													}
													else
														return 1;
												}
											}
											else
											{
												if(d_max < 235.044)
												{
													if(rss_mean < -79.15815)
														return 0;
													else
													{
														if(d_max < 219.09)
														{
															if(d_std < 50.26155)
																return 0;
															else
																return 1;
														}
														else
															return 0;
													}
												}
												else
													return 1;
											}
										}
									}
								}
								else
								{
									if(rss_std < 4.64326)
									{
										if(rss_max < -70.26345)
											return 0;
										else
										{
											if(rss_min < -84.98285)
												return 0;
											else
											{
												if(d_max < 221.789)
													return 1;
												else
												{
													if(d_std < 39.9671)
														return 1;
													else
													{
														if(d_max < 225.221)
															return 0;
														else
														{
															if(d_mean < 139.3325)
																return 1;
															else
															{
																if(d_max < 229.3125)
																{
																	if(d_min < 65.73555)
																		return 1;
																	else
																		return 0;
																}
																else
																	return 0;
															}
														}
													}
												}
											}
										}
									}
									else
									{
										if(d_max < 220.37)
											return 1;
										else
										{
											if(d_mean < 138.063)
											{
												if(d_min < 62.4877)
												{
													if(d_std < 51.7459)
														return 0;
													else
													{
														if(rss_max < -68.49995)
															return 0;
														else
														{
															if(d_min < 57.50285)
																return 0;
															else
																return 1;
														}
													}
												}
												else
												{
													if(d_std < 54.3856)
													{
														if(rss_max < -69.0003)
															return 1;
														else
														{
															if(d_max < 227.3385)
																return 1;
															else
																return 0;
														}
													}
													else
														return 0;
												}
											}
											else
												return 0;
										}
									}
								}
							}
							else
							{
								if(d_max < 157.65)
								{
									if(d_max < 157.1495)
										return 0;
									else
										return 1;
								}
								else
								{
									if(d_std < 33.31525)
									{
										if(d_std < 32.7669)
											return 0;
										else
										{
											if(rss_min < -83.32435)
												return 1;
											else
												return 0;
										}
									}
									else
										return 0;
								}
							}
						}
						else
						{
							if(rss_mean < -80.18365)
								return 0;
							else
							{
								if(d_min < 53.30325)
								{
									if(rss_min < -84.51425)
									{
										if(rss_max < -66.8883)
											return 0;
										else
										{
											if(rss_min < -84.97095)
											{
												if(d_min < 49.1984)
													return 0;
												else
													return 1;
											}
											else
											{
												if(d_mean < 158.8225)
													return 1;
												else
													return 0;
											}
										}
									}
									else
									{
										if(rss_std < 4.98882)
											return 0;
										else
										{
											if(rss_min < -84.1707)
											{
												if(d_mean < 131.924)
												{
													if(d_max < 180.918)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
											else
												return 0;
										}
									}
								}
								else
								{
									if(rss_std < 3.59464)
									{
										if(d_mean < 120.88)
											return 1;
										else
											return 0;
									}
									else
									{
										if(rss_min < -83.3008)
										{
											if(d_max < 174.025)
												return 0;
											else
											{
												if(d_mean < 157.7555)
												{
													if(d_max < 231.5005)
														return 1;
													else
													{
														if(rss_std < 4.25767)
														{
															if(d_max < 232.706)
																return 0;
															else
																return 1;
														}
														else
															return 1;
													}
												}
												else
												{
													if(d_max < 230.5205)
													{
														if(rss_max < -65.0684)
															return 0;
														else
															return 1;
													}
													else
													{
														if(d_std < 51.64025)
															return 0;
														else
															return 1;
													}
												}
											}
										}
										else
											return 0;
									}
								}
							}
						}
					}
					else
					{
						if(d_std < 40.50145)
						{
							if(d_mean < 143.914)
							{
								if(rss_min < -83.86395)
								{
									if(d_mean < 143.343)
										return 1;
									else
									{
										if(d_min < 101.0662)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(d_mean < 134.3715)
										return 1;
									else
									{
										if(rss_max < -69.93115)
											return 0;
										else
											return 1;
									}
								}
							}
							else
							{
								if(rss_mean < -78.89845)
								{
									if(rss_min < -84.7578)
									{
										if(rss_mean < -78.9212)
											return 1;
										else
										{
											if(d_max < 229.844)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(d_mean < 168.184)
										{
											if(d_max < 221.0115)
											{
												if(d_min < 73.3209)
													return 0;
												else
												{
													if(rss_min < -84.4654)
														return 1;
													else
														return 0;
												}
											}
											else
												return 1;
										}
										else
											return 0;
									}
								}
								else
								{
									if(d_max < 223.4575)
									{
										if(d_min < 73.3209)
											return 0;
										else
										{
											if(rss_min < -84.47585)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(rss_max < -69.76125)
											return 1;
										else
										{
											if(rss_max < -69.12425)
												return 0;
											else
												return 1;
										}
									}
								}
							}
						}
						else
						{
							if(d_std < 56.66625)
							{
								if(rss_min < -83.7968)
								{
									if(rss_mean < -80.69355)
									{
										if(d_min < 72.66215)
											return 0;
										else
											return 1;
									}
									else
										return 1;
								}
								else
									return 0;
							}
							else
							{
								if(d_max < 235.2395)
									return 0;
								else
									return 1;
							}
						}
					}
				}
				else
				{
					if(d_min < 73.88905)
					{
						if(d_max < 221.405)
							return 0;
						else
						{
							if(d_mean < 108.234)
								return 0;
							else
								return 1;
						}
					}
					else
						return 2;
				}
			}
		}
		else
		{
			if(d_max < 347.2005)
			{
				if(rss_min < -84.4003)
				{
					if(d_min < 91.3203)
					{
						if(rss_max < -70.15335)
						{
							if(rss_min < -84.91355)
							{
								if(rss_std < 4.39429)
								{
									if(d_max < 274.9505)
									{
										if(d_max < 270.854)
										{
											if(rss_min < -84.9147)
											{
												if(d_max < 244.2255)
												{
													if(d_mean < 155.163)
													{
														if(rss_std < 3.67248)
														{
															if(d_max < 240.3245)
																return 1;
															else
																return 0;
														}
														else
															return 1;
													}
													else
													{
														if(rss_min < -84.97015)
															return 0;
														else
															return 1;
													}
												}
												else
												{
													if(d_min < 67.24675)
													{
														if(d_min < 61.0989)
															return 1;
														else
															return 0;
													}
													else
													{
														if(rss_max < -73.33075)
														{
															if(d_std < 42.5328)
																return 0;
															else
																return 1;
														}
														else
														{
															if(d_min < 74.2356)
															{
																if(rss_max < -70.79155)
																{
																	if(d_max < 261.327)
																		return 1;
																	else
																		return 0;
																}
																else
																	return 1;
															}
															else
																return 1;
														}
													}
												}
											}
											else
												return 0;
										}
										else
										{
											if(rss_min < -84.9642)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(rss_max < -73.99425)
											return 0;
										else
										{
											if(rss_min < -84.9855)
											{
												if(d_min < 73.96105)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
									}
								}
								else
									return 0;
							}
							else
							{
								if(rss_max < -73.825)
									return 0;
								else
								{
									if(d_min < 73.99165)
									{
										if(rss_std < 4.5441)
										{
											if(d_max < 247.431)
											{
												if(rss_max < -71.14725)
												{
													if(d_min < 73.3609)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
											else
											{
												if(rss_mean < -77.8375)
													return 1;
												else
												{
													if(rss_min < -84.8343)
														return 0;
													else
														return 1;
												}
											}
										}
										else
										{
											if(d_std < 55.40845)
											{
												if(d_mean < 137.0815)
													return 1;
												else
													return 0;
											}
											else
											{
												if(d_min < 62.8682)
													return 1;
												else
													return 0;
											}
										}
									}
									else
									{
										if(rss_mean < -79.98795)
										{
											if(rss_min < -84.7682)
												return 1;
											else
											{
												if(d_min < 84.02005)
													return 0;
												else
													return 1;
											}
										}
										else
											return 1;
									}
								}
							}
						}
						else
						{
							if(rss_mean < -70.3442)
							{
								if(d_max < 263.572)
								{
									if(d_mean < 161.281)
									{
										if(d_min < 65.0984)
										{
											if(d_min < 64.5456)
											{
												if(rss_max < -69.473)
												{
													if(d_min < 59.88655)
														return 1;
													else
														return 0;
												}
												else
												{
													if(rss_mean < -79.4684)
													{
														if(d_max < 242.45)
															return 0;
														else
															return 1;
													}
													else
													{
														if(rss_min < -84.9691)
														{
															if(d_mean < 127.839)
																return 0;
															else
																return 1;
														}
														else
															return 1;
													}
												}
											}
											else
												return 0;
										}
										else
											return 1;
									}
									else
									{
										if(d_max < 263.379)
										{
											if(d_std < 49.93635)
												return 1;
											else
											{
												if(rss_min < -84.92955)
													return 0;
												else
												{
													if(d_max < 238.349)
														return 0;
													else
														return 1;
												}
											}
										}
										else
											return 0;
									}
								}
								else
								{
									if(rss_std < 4.811345)
										return 1;
									else
									{
										if(rss_max < -69.1175)
										{
											if(d_std < 56.88755)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
								}
							}
							else
								return 2;
						}
					}
					else
					{
						if(rss_max < -73.6185)
						{
							if(d_min < 105.69)
							{
								if(rss_std < 3.217965)
								{
									if(d_max < 258.9575)
										return 0;
									else
									{
										if(d_max < 271.6095)
											return 1;
										else
										{
											if(d_min < 101.272)
												return 0;
											else
											{
												if(rss_max < -74.2808)
												{
													if(rss_max < -75.0849)
														return 0;
													else
													{
														if(d_min < 103.9915)
															return 1;
														else
															return 0;
													}
												}
												else
													return 1;
											}
										}
									}
								}
								else
									return 0;
							}
							else
							{
								if(rss_mean < -83.39305)
								{
									if(d_max < 325.67)
										return 0;
									else
										return 1;
								}
								else
								{
									if(rss_max < -76.0864)
									{
										if(rss_min < -84.9024)
										{
											if(rss_max < -77.26515)
											{
												if(d_min < 162.502)
												{
													if(rss_std < 1.907325)
													{
														if(d_min < 154.6055)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
												else
												{
													if(d_max < 274.004)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(rss_max < -76.97105)
												{
													if(d_max < 329.534)
														return 1;
													else
													{
														if(d_mean < 185.5675)
															return 0;
														else
															return 1;
													}
												}
												else
												{
													if(rss_min < -84.98265)
														return 1;
													else
														return 0;
												}
											}
										}
										else
										{
											if(d_max < 300.797)
											{
												if(rss_mean < -81.125)
												{
													if(d_max < 247.084)
													{
														if(rss_max < -76.6421)
															return 0;
														else
															return 1;
													}
													else
													{
														if(d_min < 117.1275)
															return 0;
														else
														{
															if(rss_max < -78.90575)
															{
																if(rss_min < -84.8207)
																	return 0;
																else
																	return 1;
															}
															else
																return 1;
														}
													}
												}
												else
												{
													if(rss_min < -84.86215)
														return 1;
													else
													{
														if(d_mean < 165.7465)
															return 1;
														else
															return 0;
													}
												}
											}
											else
											{
												if(d_std < 51.51825)
													return 1;
												else
													return 0;
											}
										}
									}
									else
									{
										if(rss_max < -73.80465)
										{
											if(rss_std < 3.45202)
											{
												if(d_max < 246.9765)
												{
													if(rss_min < -84.91585)
													{
														if(rss_min < -84.96965)
															return 0;
														else
														{
															if(d_min < 126.8465)
																return 1;
															else
																return 0;
														}
													}
													else
													{
														if(rss_std < 2.13056)
														{
															if(d_min < 133.6175)
																return 0;
															else
																return 1;
														}
														else
															return 1;
													}
												}
												else
												{
													if(rss_mean < -80.62585)
														return 1;
													else
													{
														if(d_mean < 178.837)
															return 1;
														else
														{
															if(rss_min < -84.935)
															{
																if(d_max < 295.3695)
																	return 1;
																else
																	return 0;
															}
															else
																return 1;
														}
													}
												}
											}
											else
												return 0;
										}
										else
											return 0;
									}
								}
							}
						}
						else
							return 1;
					}
				}
				else
				{
					if(rss_mean < -71.9957)
					{
						if(rss_std < 3.155265)
						{
							if(d_max < 283.5345)
							{
								if(rss_min < -83.51815)
								{
									if(rss_max < -76.31815)
									{
										if(rss_min < -83.80485)
										{
											if(d_mean < 167.8895)
											{
												if(d_min < 107.316)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
										else
											return 1;
									}
									else
									{
										if(d_min < 99.5562)
										{
											if(d_max < 244.2165)
												return 1;
											else
												return 0;
										}
										else
										{
											if(d_std < 25.9792)
												return 0;
											else
												return 1;
										}
									}
								}
								else
								{
									if(rss_max < -80.06725)
										return 1;
									else
										return 0;
								}
							}
							else
								return 1;
						}
						else
						{
							if(rss_mean < -79.36665)
								return 0;
							else
							{
								if(rss_std < 3.36435)
								{
									if(d_min < 70.50805)
										return 0;
									else
									{
										if(d_mean < 135.839)
											return 0;
										else
											return 1;
									}
								}
								else
									return 1;
							}
						}
					}
					else
						return 2;
				}
			}
			else
				return 2;
		}
	}
	else
	{
		if(rss_mean < -70.51245)
		{
			if(rss_min < -84.4652)
			{
				if(d_max < 239.762)
				{
					if(d_mean < 138.8645)
					{
						if(d_max < 218.1355)
						{
							if(d_min < 56.3599)
							{
								if(rss_min < -84.526)
								{
									if(rss_max < -64.58675)
									{
										if(d_min < 44.1461)
											return 0;
										else
											return 1;
									}
									else
										return 1;
								}
								else
								{
									if(d_min < 43.02005)
										return 1;
									else
										return 0;
								}
							}
							else
							{
								if(rss_min < -84.79515)
									return 1;
								else
								{
									if(d_std < 47.1804)
										return 1;
									else
										return 0;
								}
							}
						}
						else
						{
							if(d_std < 62.60645)
							{
								if(rss_max < -65.5857)
								{
									if(d_min < 62.4877)
									{
										if(d_std < 52.68685)
										{
											if(rss_std < 5.13454)
											{
												if(rss_max < -66.3258)
												{
													if(d_max < 220.37)
													{
														if(d_std < 48.72335)
															return 0;
														else
															return 1;
													}
													else
													{
														if(rss_max < -70.03765)
															return 1;
														else
															return 0;
													}
												}
												else
												{
													if(d_max < 221.852)
														return 0;
													else
														return 1;
												}
											}
											else
												return 0;
										}
										else
											return 0;
									}
									else
									{
										if(d_std < 53.9204)
											return 1;
										else
										{
											if(rss_max < -67.95465)
												return 0;
											else
												return 1;
										}
									}
								}
								else
								{
									if(d_min < 45.14865)
									{
										if(d_std < 50.7055)
											return 1;
										else
										{
											if(rss_min < -84.965)
												return 0;
											else
											{
												if(rss_min < -84.65595)
												{
													if(d_mean < 107.8585)
														return 0;
													else
													{
														if(rss_max < -62.92835)
														{
															if(rss_std < 5.4894)
																return 1;
															else
															{
																if(rss_min < -84.83135)
																	return 1;
																else
																	return 0;
															}
														}
														else
															return 1;
													}
												}
												else
												{
													if(d_min < 39.5302)
														return 0;
													else
													{
														if(d_max < 221.9535)
															return 1;
														else
															return 0;
													}
												}
											}
										}
									}
									else
										return 1;
								}
							}
							else
							{
								if(rss_mean < -77.705)
									return 1;
								else
									return 0;
							}
						}
					}
					else
					{
						if(d_mean < 156.0975)
						{
							if(d_max < 215.904)
							{
								if(d_min < 44.0861)
								{
									if(d_mean < 144.2555)
										return 1;
									else
										return 0;
								}
								else
									return 1;
							}
							else
							{
								if(rss_std < 5.887165)
								{
									if(d_max < 234.899)
									{
										if(d_std < 49.04095)
										{
											if(d_min < 66.06975)
											{
												if(rss_max < -64.9491)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
										else
										{
											if(rss_std < 5.72551)
											{
												if(rss_max < -67.04995)
													return 0;
												else
												{
													if(d_min < 62.07435)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(rss_max < -63.1398)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(d_max < 237.6595)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(d_std < 58.2013)
									{
										if(rss_max < -62.5194)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
							}
						}
						else
						{
							if(d_max < 234.961)
								return 0;
							else
							{
								if(rss_min < -84.86975)
								{
									if(d_min < 62.50575)
										return 1;
									else
										return 0;
								}
								else
									return 0;
							}
						}
					}
				}
				else
				{
					if(rss_max < -67.70385)
					{
						if(d_mean < 157.485)
						{
							if(rss_std < 5.569135)
							{
								if(rss_min < -84.94475)
								{
									if(rss_max < -68.074)
										return 1;
									else
										return 0;
								}
								else
									return 1;
							}
							else
								return 0;
						}
						else
						{
							if(d_std < 65.31605)
							{
								if(d_mean < 160.104)
								{
									if(d_max < 268.255)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
							else
								return 0;
						}
					}
					else
					{
						if(rss_max < -67.27115)
						{
							if(d_max < 245.0595)
								return 0;
							else
								return 1;
						}
						else
							return 1;
					}
				}
			}
			else
			{
				if(d_max < 232.275)
				{
					if(rss_max < -62.89085)
					{
						if(rss_std < 5.06076)
						{
							if(rss_mean < -76.92015)
								return 0;
							else
							{
								if(d_min < 59.5319)
									return 1;
								else
									return 0;
							}
						}
						else
						{
							if(rss_std < 5.149245)
							{
								if(d_max < 224.6035)
									return 0;
								else
								{
									if(d_mean < 127.857)
										return 1;
									else
										return 0;
								}
							}
							else
								return 0;
						}
					}
					else
					{
						if(rss_std < 6.474905)
						{
							if(d_min < 42.0511)
							{
								if(d_mean < 133.902)
								{
									if(d_std < 40.3898)
										return 0;
									else
									{
										if(rss_min < -83.7928)
											return 1;
										else
										{
											if(d_std < 45.5006)
											{
												if(rss_std < 5.628125)
												{
													if(d_min < 34.5023)
														return 1;
													else
														return 0;
												}
												else
													return 0;
											}
											else
												return 0;
										}
									}
								}
								else
									return 0;
							}
							else
								return 1;
						}
						else
							return 0;
					}
				}
				else
				{
					if(d_mean < 157.299)
						return 1;
					else
					{
						if(d_min < 53.6866)
							return 1;
						else
						{
							if(d_std < 72.1903)
								return 0;
							else
								return 2;
						}
					}
				}
			}
		}
		else
		{
			if(rss_mean < -69.8306)
			{
				if(d_max < 312.5785)
					return 0;
				else
					return 2;
			}
			else
			{
				if(rss_std < 12.5507)
					return 2;
				else
					return 1;
			}
		}
	}
}

int tree_20(float d_max, float d_min, float d_mean, float d_std, float rss_max, float rss_min, float rss_mean, float rss_std)
{
	if(rss_mean < -70.5388)
	{
		if(d_max < 234.994)
		{
			if(rss_min < -84.54085)
			{
				if(d_max < 217.8285)
				{
					if(rss_max < -68.2642)
					{
						if(rss_std < 1.81563)
						{
							if(d_min < 166.4445)
								return 0;
							else
								return 1;
						}
						else
						{
							if(d_min < 73.48005)
							{
								if(rss_max < -69.9955)
									return 0;
								else
								{
									if(d_min < 67.06725)
									{
										if(d_max < 178.439)
											return 0;
										else
										{
											if(d_std < 46.67025)
												return 1;
											else
											{
												if(d_max < 215.982)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(rss_std < 5.264975)
											return 1;
										else
										{
											if(d_max < 204.2135)
												return 0;
											else
												return 1;
										}
									}
								}
							}
							else
							{
								if(rss_min < -84.65465)
								{
									if(rss_max < -72.8762)
									{
										if(d_std < 35.1733)
											return 1;
										else
											return 0;
									}
									else
										return 1;
								}
								else
								{
									if(d_max < 213.3085)
										return 1;
									else
									{
										if(d_max < 217.76)
										{
											if(d_max < 216.0205)
											{
												if(d_max < 215.3875)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
										else
											return 1;
									}
								}
							}
						}
					}
					else
					{
						if(d_max < 216.3205)
							return 1;
						else
						{
							if(d_min < 45.53055)
								return 0;
							else
								return 1;
						}
					}
				}
				else
				{
					if(rss_mean < -80.62935)
					{
						if(rss_max < -75.96905)
							return 0;
						else
						{
							if(rss_min < -84.89925)
							{
								if(d_max < 219.268)
									return 1;
								else
								{
									if(rss_min < -84.9828)
									{
										if(d_std < 28.5838)
										{
											if(d_min < 152.5675)
												return 1;
											else
												return 0;
										}
										else
											return 0;
									}
									else
										return 0;
								}
							}
							else
							{
								if(d_max < 229.7905)
								{
									if(rss_std < 3.099795)
									{
										if(d_min < 112.336)
										{
											if(rss_min < -84.89665)
												return 1;
											else
											{
												if(rss_max < -72.8049)
												{
													if(d_min < 106.336)
														return 0;
													else
													{
														if(d_mean < 160.4585)
															return 1;
														else
															return 0;
													}
												}
												else
												{
													if(rss_mean < -80.8394)
													{
														if(rss_max < -72.67775)
															return 1;
														else
														{
															if(rss_mean < -80.88585)
																return 0;
															else
															{
																if(d_max < 220.9565)
																	return 1;
																else
																	return 0;
															}
														}
													}
													else
													{
														if(rss_min < -84.8397)
															return 0;
														else
															return 1;
													}
												}
											}
										}
										else
										{
											if(rss_min < -84.70305)
											{
												if(rss_mean < -82.3483)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
									}
									else
									{
										if(rss_min < -84.8723)
										{
											if(rss_mean < -80.91495)
												return 0;
											else
											{
												if(rss_max < -70.51325)
													return 0;
												else
												{
													if(d_mean < 178.853)
														return 1;
													else
														return 0;
												}
											}
										}
										else
										{
											if(d_std < 35.9865)
											{
												if(d_std < 35.48365)
													return 0;
												else
												{
													if(rss_mean < -80.9098)
														return 0;
													else
														return 1;
												}
											}
											else
												return 0;
										}
									}
								}
								else
								{
									if(d_std < 40.50825)
									{
										if(rss_min < -84.79955)
											return 1;
										else
										{
											if(d_max < 234.3485)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(d_std < 41.8744)
										{
											if(d_max < 233.875)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
								}
							}
						}
					}
					else
					{
						if(rss_max < -70.5035)
						{
							if(rss_min < -84.91505)
							{
								if(rss_max < -70.73495)
								{
									if(d_std < 44.09555)
									{
										if(rss_min < -84.9821)
										{
											if(d_max < 231.769)
											{
												if(d_max < 230.8745)
												{
													if(rss_std < 3.649695)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
											else
												return 0;
										}
										else
										{
											if(rss_max < -71.4922)
												return 0;
											else
											{
												if(d_min < 89.55275)
													return 0;
												else
													return 1;
											}
										}
									}
									else
										return 0;
								}
								else
								{
									if(d_min < 80.13535)
										return 0;
									else
										return 1;
								}
							}
							else
							{
								if(rss_std < 3.69237)
								{
									if(rss_max < -72.47055)
									{
										if(rss_std < 2.80006)
											return 0;
										else
										{
											if(d_min < 116.1585)
											{
												if(d_std < 39.8703)
												{
													if(rss_max < -74.74205)
														return 0;
													else
													{
														if(d_min < 94.78375)
														{
															if(d_min < 78.4718)
															{
																if(rss_min < -84.8156)
																	return 1;
																else
																	return 0;
															}
															else
															{
																if(d_max < 218.495)
																	return 1;
																else
																{
																	if(d_min < 94.2796)
																		return 0;
																	else
																	{
																		if(d_max < 224.7825)
																			return 1;
																		else
																			return 0;
																	}
																}
															}
														}
														else
														{
															if(rss_min < -84.81795)
															{
																if(d_std < 33.00325)
																	return 1;
																else
																	return 0;
															}
															else
																return 1;
														}
													}
												}
												else
													return 0;
											}
											else
												return 1;
										}
									}
									else
									{
										if(d_min < 81.0472)
										{
											if(d_max < 231.367)
											{
												if(d_min < 79.03025)
												{
													if(d_mean < 168.424)
														return 0;
													else
														return 1;
												}
												else
												{
													if(rss_max < -71.82875)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(d_mean < 143.662)
													return 0;
												else
												{
													if(d_min < 76.33665)
													{
														if(d_std < 41.1565)
															return 0;
														else
															return 1;
													}
													else
													{
														if(d_max < 231.8525)
															return 1;
														else
															return 0;
													}
												}
											}
										}
										else
										{
											if(rss_std < 2.888515)
												return 0;
											else
											{
												if(d_std < 33.52495)
												{
													if(d_max < 228.4315)
													{
														if(rss_max < -71.6618)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
												else
													return 1;
											}
										}
									}
								}
								else
								{
									if(d_mean < 144.939)
									{
										if(d_std < 36.89925)
											return 1;
										else
										{
											if(rss_mean < -79.0149)
											{
												if(rss_min < -84.854)
													return 1;
												else
													return 0;
											}
											else
											{
												if(d_std < 43.8359)
												{
													if(d_min < 73.6513)
														return 0;
													else
													{
														if(d_mean < 142.05)
															return 1;
														else
															return 0;
													}
												}
												else
													return 0;
											}
										}
									}
									else
										return 0;
								}
							}
						}
						else
						{
							if(d_std < 49.02425)
							{
								if(d_min < 67.254)
								{
									if(rss_max < -67.76415)
									{
										if(rss_mean < -78.5025)
											return 0;
										else
										{
											if(d_min < 62.4961)
											{
												if(rss_mean < -78.1849)
												{
													if(d_mean < 134.689)
														return 1;
													else
														return 0;
												}
												else
													return 0;
											}
											else
											{
												if(d_max < 219.1405)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(rss_max < -65.03295)
										{
											if(d_min < 52.5104)
												return 0;
											else
											{
												if(rss_max < -65.791)
												{
													if(rss_min < -84.9709)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
										}
										else
											return 1;
									}
								}
								else
								{
									if(rss_min < -84.9214)
									{
										if(rss_std < 3.673055)
										{
											if(rss_min < -84.96055)
												return 1;
											else
												return 0;
										}
										else
										{
											if(rss_min < -84.95805)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(rss_min < -84.7061)
										{
											if(d_std < 48.785)
												return 1;
											else
											{
												if(d_min < 71.12035)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(rss_min < -84.67795)
											{
												if(d_std < 38.44555)
												{
													if(d_max < 229.289)
														return 1;
													else
														return 0;
												}
												else
												{
													if(d_max < 226.5725)
														return 0;
													else
														return 1;
												}
											}
											else
												return 1;
										}
									}
								}
							}
							else
							{
								if(d_min < 70.7459)
								{
									if(d_mean < 138.4245)
									{
										if(d_std < 61.6809)
										{
											if(rss_mean < -78.0953)
												return 1;
											else
											{
												if(d_max < 229.875)
												{
													if(d_min < 37.97085)
													{
														if(d_mean < 126.0705)
														{
															if(rss_min < -84.63645)
															{
																if(rss_mean < -73.167)
																	return 1;
																else
																	return 0;
															}
															else
																return 0;
														}
														else
														{
															if(d_mean < 135.0825)
															{
																if(rss_min < -84.63645)
																	return 1;
																else
																	return 0;
															}
															else
															{
																if(d_std < 56.76705)
																	return 0;
																else
																	return 1;
															}
														}
													}
													else
													{
														if(rss_max < -65.5857)
														{
															if(d_min < 62.4877)
															{
																if(rss_std < 5.10119)
																{
																	if(d_min < 57.8118)
																	{
																		if(d_min < 51.76755)
																			return 0;
																		else
																			return 1;
																	}
																	else
																	{
																		if(d_max < 227.6455)
																			return 0;
																		else
																			return 1;
																	}
																}
																else
																	return 0;
															}
															else
															{
																if(d_std < 55.14095)
																	return 1;
																else
																	return 0;
															}
														}
														else
														{
															if(rss_std < 5.51018)
																return 1;
															else
															{
																if(d_min < 46.1022)
																{
																	if(d_min < 42.38155)
																	{
																		if(rss_max < -63.16305)
																			return 0;
																		else
																			return 1;
																	}
																	else
																	{
																		if(rss_std < 6.356045)
																			return 0;
																		else
																			return 1;
																	}
																}
																else
																	return 1;
															}
														}
													}
												}
												else
												{
													if(d_max < 232.851)
													{
														if(rss_std < 4.76615)
														{
															if(d_min < 49.9021)
																return 0;
															else
																return 1;
														}
														else
															return 0;
													}
													else
													{
														if(d_std < 56.41655)
															return 1;
														else
															return 0;
													}
												}
											}
										}
										else
										{
											if(d_max < 221.7955)
											{
												if(d_max < 220.68)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
									}
									else
									{
										if(rss_min < -84.8864)
											return 0;
										else
										{
											if(rss_min < -84.82535)
											{
												if(d_std < 57.72045)
												{
													if(rss_std < 4.645345)
														return 1;
													else
													{
														if(rss_max < -63.8638)
														{
															if(d_mean < 140.351)
																return 1;
															else
																return 0;
														}
														else
															return 1;
													}
												}
												else
													return 0;
											}
											else
											{
												if(rss_std < 4.66424)
												{
													if(rss_min < -84.75685)
													{
														if(d_mean < 149.296)
															return 1;
														else
															return 0;
													}
													else
													{
														if(d_mean < 142.723)
															return 1;
														else
															return 0;
													}
												}
												else
													return 0;
											}
										}
									}
								}
								else
								{
									if(d_max < 234.5135)
										return 1;
									else
										return 0;
								}
							}
						}
					}
				}
			}
			else
			{
				if(rss_min < -83.74015)
				{
					if(d_mean < 131.5825)
					{
						if(d_min < 77.42875)
						{
							if(d_max < 203.9685)
							{
								if(rss_min < -84.30545)
								{
									if(d_mean < 125.739)
									{
										if(d_max < 182.1905)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
								else
								{
									if(d_std < 49.94755)
									{
										if(rss_max < -72.2876)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
							}
							else
							{
								if(d_mean < 119.377)
								{
									if(rss_max < -67.3369)
										return 0;
									else
									{
										if(rss_std < 6.100135)
										{
											if(d_min < 39.61365)
											{
												if(rss_min < -84.19185)
													return 1;
												else
													return 0;
											}
											else
											{
												if(d_min < 49.143)
												{
													if(rss_min < -84.02855)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
										}
										else
											return 0;
									}
								}
								else
								{
									if(rss_max < -66.8758)
										return 0;
									else
									{
										if(rss_min < -84.39525)
										{
											if(d_max < 219.9505)
												return 1;
											else
												return 0;
										}
										else
										{
											if(rss_mean < -77.30265)
											{
												if(d_max < 216.9195)
													return 1;
												else
													return 0;
											}
											else
											{
												if(d_min < 49.3151)
												{
													if(d_max < 220.4425)
														return 0;
													else
													{
														if(d_max < 221.9535)
															return 1;
														else
															return 0;
													}
												}
												else
													return 1;
											}
										}
									}
								}
							}
						}
						else
						{
							if(rss_max < -71.59655)
								return 0;
							else
								return 1;
						}
					}
					else
					{
						if(d_mean < 146.196)
						{
							if(d_max < 224.1565)
							{
								if(d_min < 106.4175)
								{
									if(rss_max < -62.3919)
									{
										if(d_min < 54.6477)
											return 0;
										else
										{
											if(rss_max < -70.6776)
												return 0;
											else
											{
												if(rss_min < -83.9648)
												{
													if(rss_std < 4.991035)
													{
														if(d_min < 70.47595)
														{
															if(d_min < 54.74095)
																return 1;
															else
																return 0;
														}
														else
														{
															if(d_mean < 142.8285)
																return 1;
															else
																return 0;
														}
													}
													else
														return 0;
												}
												else
													return 0;
											}
										}
									}
									else
									{
										if(d_min < 37.4621)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(d_std < 25.23435)
										return 1;
									else
										return 0;
								}
							}
							else
							{
								if(rss_min < -84.26365)
								{
									if(rss_std < 3.99919)
									{
										if(rss_min < -84.34365)
										{
											if(d_mean < 134.303)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
									else
										return 0;
								}
								else
								{
									if(d_mean < 143.9745)
										return 1;
									else
										return 0;
								}
							}
						}
						else
						{
							if(d_max < 229.327)
							{
								if(rss_std < 1.31273)
								{
									if(d_min < 103.544)
									{
										if(d_min < 93.8141)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
								else
								{
									if(d_max < 201.285)
									{
										if(rss_min < -84.3658)
											return 1;
										else
											return 0;
									}
									else
										return 0;
								}
							}
							else
							{
								if(rss_min < -84.4775)
									return 0;
								else
								{
									if(rss_std < 3.923505)
									{
										if(d_std < 35.9621)
										{
											if(d_max < 233.1155)
												return 1;
											else
											{
												if(d_max < 234.741)
													return 0;
												else
													return 1;
											}
										}
										else
											return 0;
									}
									else
										return 0;
								}
							}
						}
					}
				}
				else
				{
					if(rss_max < -69.5965)
					{
						if(rss_max < -78.7589)
						{
							if(rss_min < -82.03515)
							{
								if(d_max < 183.358)
									return 1;
								else
									return 0;
							}
							else
							{
								if(d_min < 135.446)
									return 1;
								else
									return 0;
							}
						}
						else
							return 0;
					}
					else
					{
						if(d_min < 70.27095)
						{
							if(d_max < 216.196)
							{
								if(d_std < 46.15195)
								{
									if(rss_min < -82.9267)
									{
										if(d_min < 34.932)
											return 1;
										else
										{
											if(d_min < 60.5874)
												return 0;
											else
											{
												if(rss_min < -83.24455)
												{
													if(rss_mean < -78.2747)
														return 0;
													else
													{
														if(d_max < 196.2845)
															return 1;
														else
															return 0;
													}
												}
												else
													return 0;
											}
										}
									}
									else
										return 0;
								}
								else
									return 0;
							}
							else
								return 1;
						}
						else
							return 1;
					}
				}
			}
		}
		else
		{
			if(rss_max < -76.0856)
			{
				if(d_max < 247.839)
				{
					if(d_max < 242.901)
						return 0;
					else
					{
						if(d_max < 243.1305)
							return 1;
						else
						{
							if(d_std < 46.5784)
							{
								if(d_mean < 159.292)
								{
									if(d_max < 246.753)
										return 1;
									else
										return 0;
								}
								else
									return 0;
							}
							else
								return 1;
						}
					}
				}
				else
				{
					if(rss_max < -78.1798)
					{
						if(rss_min < -84.89615)
							return 0;
						else
						{
							if(d_mean < 218.991)
							{
								if(rss_std < 1.94724)
								{
									if(d_max < 286.5855)
									{
										if(d_std < 27.41775)
										{
											if(d_max < 263.063)
												return 1;
											else
											{
												if(d_std < 25.79765)
													return 0;
												else
												{
													if(rss_std < 1.733305)
														return 0;
													else
													{
														if(d_min < 174.5575)
															return 1;
														else
															return 0;
													}
												}
											}
										}
										else
											return 1;
									}
									else
										return 1;
								}
								else
									return 0;
							}
							else
								return 1;
						}
					}
					else
					{
						if(rss_min < -84.6077)
						{
							if(d_std < 40.66615)
							{
								if(rss_mean < -80.87185)
									return 1;
								else
									return 0;
							}
							else
							{
								if(rss_std < 2.76268)
								{
									if(d_mean < 196.0855)
									{
										if(d_mean < 174.1995)
											return 1;
										else
										{
											if(d_min < 133.0965)
											{
												if(rss_min < -84.98265)
													return 1;
												else
												{
													if(d_mean < 194.6985)
														return 0;
													else
													{
														if(d_max < 310.826)
															return 1;
														else
															return 0;
													}
												}
											}
											else
												return 1;
										}
									}
									else
									{
										if(d_std < 53.34305)
											return 1;
										else
											return 0;
									}
								}
								else
									return 0;
							}
						}
						else
						{
							if(d_max < 300.2475)
								return 0;
							else
								return 1;
						}
					}
				}
			}
			else
			{
				if(d_max < 247.4035)
				{
					if(d_mean < 153.7915)
					{
						if(rss_std < 9.93053)
						{
							if(rss_max < -67.11665)
							{
								if(rss_mean < -76.8351)
								{
									if(d_max < 236.3455)
									{
										if(d_max < 235.844)
											return 1;
										else
										{
											if(rss_max < -70.13395)
												return 0;
											else
											{
												if(d_max < 235.9075)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(rss_min < -84.25925)
										{
											if(d_mean < 142.8265)
											{
												if(rss_std < 4.97068)
													return 1;
												else
													return 0;
											}
											else
											{
												if(d_max < 246.4315)
												{
													if(rss_std < 4.737985)
													{
														if(d_max < 237.921)
															return 0;
														else
														{
															if(rss_std < 2.8222)
																return 0;
															else
															{
																if(d_min < 73.99165)
																{
																	if(d_max < 240.1)
																		return 0;
																	else
																		return 1;
																}
																else
																	return 1;
															}
														}
													}
													else
														return 0;
												}
												else
													return 0;
											}
										}
										else
										{
											if(d_max < 243.9985)
											{
												if(rss_min < -83.22065)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
									}
								}
								else
								{
									if(d_min < 56.22225)
										return 0;
									else
									{
										if(rss_std < 3.130975)
											return 0;
										else
											return 1;
									}
								}
							}
							else
								return 1;
						}
						else
						{
							if(d_max < 239.683)
								return 0;
							else
								return 1;
						}
					}
					else
					{
						if(rss_min < -84.91585)
						{
							if(d_max < 243.478)
							{
								if(rss_mean < -79.18465)
								{
									if(rss_min < -84.9854)
										return 1;
									else
									{
										if(d_mean < 155.4555)
										{
											if(rss_mean < -79.9995)
												return 1;
											else
												return 0;
										}
										else
										{
											if(rss_min < -84.98315)
											{
												if(d_min < 100.4717)
												{
													if(rss_max < -69.2027)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
											else
												return 0;
										}
									}
								}
								else
								{
									if(rss_min < -84.9512)
										return 1;
									else
										return 0;
								}
							}
							else
							{
								if(rss_max < -73.3873)
								{
									if(d_min < 112.5765)
										return 0;
									else
										return 1;
								}
								else
									return 1;
							}
						}
						else
						{
							if(rss_min < -84.4624)
							{
								if(rss_std < 4.95119)
								{
									if(d_mean < 169.0855)
									{
										if(d_max < 247.2265)
										{
											if(rss_max < -73.65985)
											{
												if(d_min < 104.505)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
										else
											return 0;
									}
									else
									{
										if(d_min < 101.13)
										{
											if(rss_mean < -80.6068)
											{
												if(d_max < 243.85)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
										else
										{
											if(rss_std < 2.13056)
											{
												if(d_max < 244.028)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
									}
								}
								else
								{
									if(rss_min < -84.86535)
										return 1;
									else
									{
										if(d_max < 240.7465)
										{
											if(d_mean < 154.408)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
								}
							}
							else
								return 0;
						}
					}
				}
				else
				{
					if(rss_min < -84.4601)
					{
						if(rss_max < -73.9504)
						{
							if(rss_std < 3.242025)
							{
								if(d_min < 105.6755)
								{
									if(rss_min < -84.9177)
										return 0;
									else
									{
										if(d_min < 95.71755)
											return 0;
										else
										{
											if(rss_min < -84.74875)
											{
												if(d_min < 104.7635)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
									}
								}
								else
								{
									if(rss_std < 3.21758)
										return 1;
									else
									{
										if(d_std < 44.24515)
											return 1;
										else
											return 0;
									}
								}
							}
							else
							{
								if(d_max < 309.127)
									return 0;
								else
								{
									if(d_max < 315.899)
										return 1;
									else
										return 0;
								}
							}
						}
						else
						{
							if(d_min < 84.90925)
							{
								if(rss_max < -70.1979)
								{
									if(rss_min < -84.841)
									{
										if(rss_std < 4.515315)
										{
											if(d_std < 60.5545)
											{
												if(rss_min < -84.9115)
												{
													if(d_max < 261.327)
														return 1;
													else
													{
														if(d_mean < 157.7345)
														{
															if(rss_max < -71.53675)
															{
																if(rss_min < -84.9645)
																	return 1;
																else
																{
																	if(d_max < 269.656)
																		return 1;
																	else
																		return 0;
																}
															}
															else
															{
																if(rss_min < -84.95595)
																	return 1;
																else
																{
																	if(rss_min < -84.9478)
																		return 0;
																	else
																	{
																		if(d_min < 77.6169)
																			return 0;
																		else
																			return 1;
																	}
																}
															}
														}
														else
														{
															if(d_min < 84.4577)
																return 0;
															else
																return 1;
														}
													}
												}
												else
													return 1;
											}
											else
												return 1;
										}
										else
											return 0;
									}
									else
										return 1;
								}
								else
								{
									if(rss_max < -67.7295)
									{
										if(d_min < 65.4565)
										{
											if(rss_std < 5.56068)
											{
												if(rss_mean < -79.2247)
												{
													if(rss_std < 4.767325)
													{
														if(d_mean < 164.327)
															return 1;
														else
														{
															if(d_max < 267.3765)
															{
																if(d_max < 263.379)
																	return 1;
																else
																	return 0;
															}
															else
																return 1;
														}
													}
													else
														return 0;
												}
												else
												{
													if(rss_max < -69.473)
													{
														if(d_max < 269.339)
															return 0;
														else
															return 1;
													}
													else
													{
														if(d_max < 248.757)
														{
															if(d_min < 54.42695)
																return 0;
															else
															{
																if(d_max < 248.101)
																	return 0;
																else
																	return 1;
															}
														}
														else
															return 1;
													}
												}
											}
											else
											{
												if(rss_max < -67.93435)
													return 0;
												else
												{
													if(d_mean < 138.1265)
														return 0;
													else
														return 1;
												}
											}
										}
										else
										{
											if(d_std < 81.3575)
												return 1;
											else
												return 0;
										}
									}
									else
										return 1;
								}
							}
							else
							{
								if(d_min < 211.2435)
									return 1;
								else
									return 2;
							}
						}
					}
					else
					{
						if(rss_mean < -77.1922)
						{
							if(rss_max < -68.8087)
							{
								if(d_max < 276.006)
								{
									if(rss_min < -84.0639)
									{
										if(d_max < 270.399)
										{
											if(d_min < 125.517)
											{
												if(d_min < 84.93815)
												{
													if(rss_mean < -78.7426)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
											else
												return 0;
										}
										else
											return 0;
									}
									else
										return 0;
								}
								else
									return 1;
							}
							else
								return 1;
						}
						else
						{
							if(d_max < 347.189)
							{
								if(rss_max < -71.1815)
									return 0;
								else
									return 1;
							}
							else
								return 2;
						}
					}
				}
			}
		}
	}
	else
	{
		if(rss_mean < -70.09475)
		{
			if(d_max < 335.3185)
			{
				if(d_std < 131.892)
					return 0;
				else
					return 1;
			}
			else
				return 2;
		}
		else
			return 2;
	}
}

int tree_21(float d_max, float d_min, float d_mean, float d_std, float rss_max, float rss_min, float rss_mean, float rss_std)
{
	if(rss_max < -61.50405)
	{
		if(rss_max < -70.5048)
		{
			if(d_max < 237.527)
			{
				if(rss_max < -74.74)
				{
					if(rss_min < -84.8855)
						return 0;
					else
					{
						if(d_max < 228.164)
						{
							if(d_mean < 195.494)
							{
								if(d_std < 39.5028)
								{
									if(rss_max < -81.75905)
									{
										if(d_min < 172.043)
											return 1;
										else
											return 0;
									}
									else
									{
										if(rss_max < -78.7903)
										{
											if(rss_std < 2.37046)
											{
												if(rss_max < -78.7908)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
										else
											return 0;
									}
								}
								else
								{
									if(rss_max < -79.6209)
										return 1;
									else
										return 0;
								}
							}
							else
							{
								if(rss_std < 1.81529)
									return 0;
								else
								{
									if(d_min < 170.267)
										return 0;
									else
										return 1;
								}
							}
						}
						else
						{
							if(rss_min < -84.88495)
								return 1;
							else
							{
								if(d_std < 31.08165)
								{
									if(rss_max < -77.59825)
										return 0;
									else
									{
										if(rss_mean < -79.80835)
										{
											if(rss_min < -84.66245)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
								}
								else
								{
									if(d_min < 136.352)
										return 0;
									else
										return 1;
								}
							}
						}
					}
				}
				else
				{
					if(rss_min < -84.2805)
					{
						if(rss_std < 3.43469)
						{
							if(d_min < 105.2665)
							{
								if(rss_max < -72.82625)
								{
									if(d_min < 78.06975)
									{
										if(d_max < 227.82)
											return 0;
										else
										{
											if(d_max < 229.3515)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(d_max < 223.0135)
										{
											if(d_max < 222.9375)
											{
												if(rss_min < -84.7001)
												{
													if(rss_min < -84.71085)
													{
														if(d_std < 33.5534)
														{
															if(d_max < 216.343)
																return 1;
															else
																return 0;
														}
														else
														{
															if(rss_max < -73.4219)
																return 0;
															else
															{
																if(d_min < 86.6324)
																	return 0;
																else
																	return 1;
															}
														}
													}
													else
														return 1;
												}
												else
													return 0;
											}
											else
												return 1;
										}
										else
										{
											if(d_mean < 142.8865)
											{
												if(rss_mean < -79.46125)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
									}
								}
								else
								{
									if(d_mean < 174.1505)
									{
										if(d_min < 83.4217)
										{
											if(rss_max < -71.5535)
											{
												if(d_min < 82.62965)
													return 0;
												else
												{
													if(d_max < 226.2915)
														return 1;
													else
														return 0;
												}
											}
											else
											{
												if(d_min < 74.0218)
												{
													if(d_max < 231.873)
														return 0;
													else
													{
														if(rss_mean < -79.1197)
															return 1;
														else
															return 0;
													}
												}
												else
												{
													if(d_std < 34.48855)
														return 0;
													else
														return 1;
												}
											}
										}
										else
										{
											if(rss_min < -84.84835)
											{
												if(rss_min < -84.86665)
												{
													if(d_min < 86.8113)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
											else
											{
												if(rss_min < -84.50175)
												{
													if(rss_std < 2.855965)
													{
														if(d_max < 216.233)
															return 1;
														else
															return 0;
													}
													else
														return 1;
												}
												else
													return 0;
											}
										}
									}
									else
										return 0;
								}
							}
							else
							{
								if(rss_mean < -81.4413)
								{
									if(rss_min < -84.8411)
									{
										if(d_max < 226.0665)
											return 0;
										else
											return 1;
									}
									else
									{
										if(d_max < 216.734)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(rss_std < 2.46813)
									{
										if(d_min < 130.2255)
										{
											if(d_max < 197.011)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
									else
									{
										if(d_max < 222.0095)
											return 1;
										else
										{
											if(d_max < 223.377)
												return 0;
											else
											{
												if(d_std < 28.4831)
												{
													if(d_max < 228.928)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
										}
									}
								}
							}
						}
						else
						{
							if(rss_max < -71.4942)
							{
								if(d_std < 37.40935)
								{
									if(rss_mean < -78.281)
									{
										if(rss_mean < -79.59565)
										{
											if(rss_max < -71.8034)
											{
												if(rss_min < -84.84505)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
										else
										{
											if(rss_min < -84.4988)
											{
												if(d_std < 36.86625)
													return 1;
												else
												{
													if(d_max < 231.994)
														return 0;
													else
														return 1;
												}
											}
											else
												return 0;
										}
									}
									else
										return 0;
								}
								else
								{
									if(rss_std < 3.47096)
									{
										if(d_max < 217.132)
										{
											if(d_max < 216.2165)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
									else
										return 0;
								}
							}
							else
							{
								if(d_max < 234.923)
								{
									if(d_mean < 152.336)
									{
										if(rss_std < 3.804375)
										{
											if(d_min < 72.8991)
												return 0;
											else
											{
												if(rss_max < -70.67405)
												{
													if(d_min < 77.37755)
													{
														if(rss_max < -71.15665)
															return 1;
														else
														{
															if(rss_max < -70.6768)
															{
																if(rss_mean < -79.4478)
																	return 1;
																else
																	return 0;
															}
															else
																return 1;
														}
													}
													else
														return 1;
												}
												else
													return 0;
											}
										}
										else
										{
											if(d_min < 74.98915)
												return 0;
											else
											{
												if(d_mean < 145.817)
													return 1;
												else
													return 0;
											}
										}
									}
									else
									{
										if(rss_mean < -79.3381)
											return 0;
										else
										{
											if(rss_min < -84.9811)
												return 1;
											else
												return 0;
										}
									}
								}
								else
								{
									if(d_std < 49.18265)
									{
										if(d_max < 235.9885)
											return 0;
										else
											return 1;
									}
									else
										return 1;
								}
							}
						}
					}
					else
					{
						if(d_max < 223.5485)
						{
							if(d_min < 122.782)
								return 0;
							else
							{
								if(d_min < 124.027)
									return 1;
								else
									return 0;
							}
						}
						else
						{
							if(rss_max < -70.7681)
							{
								if(rss_mean < -78.53705)
								{
									if(d_mean < 155.527)
									{
										if(d_min < 74.0048)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
								else
									return 0;
							}
							else
							{
								if(d_max < 234.205)
									return 1;
								else
									return 0;
							}
						}
					}
				}
			}
			else
			{
				if(rss_max < -76.0856)
				{
					if(d_max < 282.9135)
					{
						if(rss_max < -77.70565)
						{
							if(rss_min < -84.7771)
								return 0;
							else
							{
								if(d_min < 134.231)
								{
									if(d_mean < 162.3455)
										return 1;
									else
										return 0;
								}
								else
								{
									if(d_std < 27.2008)
									{
										if(rss_std < 1.702)
											return 0;
										else
										{
											if(d_max < 253.3)
												return 0;
											else
												return 1;
										}
									}
									else
										return 1;
								}
							}
						}
						else
						{
							if(rss_mean < -81.41035)
							{
								if(d_min < 125.9285)
									return 0;
								else
								{
									if(d_min < 129.6655)
									{
										if(d_max < 253.304)
											return 0;
										else
											return 1;
									}
									else
										return 1;
								}
							}
							else
							{
								if(rss_min < -84.65345)
								{
									if(rss_std < 2.215095)
										return 1;
									else
									{
										if(rss_min < -84.9007)
											return 0;
										else
										{
											if(rss_mean < -80.32415)
											{
												if(d_std < 46.6395)
													return 0;
												else
													return 1;
											}
											else
											{
												if(d_max < 261.0515)
													return 1;
												else
													return 0;
											}
										}
									}
								}
								else
								{
									if(d_min < 125.6035)
										return 0;
									else
									{
										if(d_max < 250.6255)
											return 1;
										else
											return 0;
									}
								}
							}
						}
					}
					else
					{
						if(d_std < 42.04615)
						{
							if(rss_min < -84.9278)
							{
								if(rss_max < -78.2365)
									return 0;
								else
								{
									if(d_min < 135.6545)
										return 0;
									else
										return 1;
								}
							}
							else
							{
								if(d_min < 115.872)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(rss_max < -77.66175)
							{
								if(rss_min < -84.9229)
									return 0;
								else
								{
									if(d_std < 50.1605)
										return 1;
									else
									{
										if(d_std < 56.455)
											return 0;
										else
											return 1;
									}
								}
							}
							else
							{
								if(rss_max < -76.13015)
								{
									if(d_mean < 187.055)
									{
										if(d_mean < 176.1285)
											return 1;
										else
										{
											if(d_std < 44.63655)
												return 0;
											else
											{
												if(d_min < 109.265)
													return 0;
												else
													return 1;
											}
										}
									}
									else
										return 1;
								}
								else
									return 0;
							}
						}
					}
				}
				else
				{
					if(rss_min < -84.4511)
					{
						if(d_min < 106.4185)
						{
							if(rss_std < 4.417285)
							{
								if(d_max < 274.9505)
								{
									if(rss_mean < -81.2783)
									{
										if(rss_max < -73.9504)
										{
											if(d_max < 268.813)
												return 0;
											else
											{
												if(d_min < 102.803)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(d_max < 254.313)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(d_mean < 167.4495)
										{
											if(rss_max < -73.83315)
											{
												if(d_max < 258.668)
													return 0;
												else
												{
													if(d_mean < 146.9795)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(rss_min < -84.91355)
												{
													if(rss_std < 3.82752)
													{
														if(rss_min < -84.94035)
														{
															if(rss_min < -84.984)
															{
																if(d_max < 242.2305)
																	return 0;
																else
																	return 1;
															}
															else
															{
																if(d_mean < 163.3075)
																	return 1;
																else
																{
																	if(d_max < 269.663)
																		return 1;
																	else
																		return 0;
																}
															}
														}
														else
															return 0;
													}
													else
													{
														if(rss_max < -70.66945)
														{
															if(rss_mean < -79.77805)
															{
																if(d_min < 67.23235)
																	return 1;
																else
																{
																	if(d_min < 83.05305)
																		return 0;
																	else
																		return 1;
																}
															}
															else
															{
																if(rss_std < 4.16912)
																	return 0;
																else
																	return 1;
															}
														}
														else
															return 1;
													}
												}
												else
												{
													if(rss_std < 2.78852)
													{
														if(rss_min < -84.81165)
														{
															if(d_max < 253.8035)
																return 0;
															else
																return 1;
														}
														else
															return 1;
													}
													else
													{
														if(rss_std < 3.80375)
															return 1;
														else
														{
															if(rss_max < -71.30945)
															{
																if(rss_max < -71.34305)
																{
																	if(rss_std < 3.807275)
																		return 0;
																	else
																		return 1;
																}
																else
																	return 0;
															}
															else
																return 1;
														}
													}
												}
											}
										}
										else
										{
											if(rss_max < -73.82495)
											{
												if(d_max < 263.9215)
													return 0;
												else
												{
													if(d_std < 48.45275)
														return 1;
													else
														return 0;
												}
											}
											else
											{
												if(d_max < 274.668)
												{
													if(rss_std < 4.07257)
														return 1;
													else
														return 0;
												}
												else
													return 0;
											}
										}
									}
								}
								else
								{
									if(rss_min < -84.9674)
									{
										if(d_max < 295.6205)
											return 1;
										else
										{
											if(rss_max < -73.7625)
												return 0;
											else
											{
												if(rss_std < 4.23736)
													return 1;
												else
													return 0;
											}
										}
									}
									else
									{
										if(d_max < 279.2185)
										{
											if(d_min < 93.8058)
												return 1;
											else
												return 0;
										}
										else
										{
											if(rss_max < -75.28915)
												return 0;
											else
												return 1;
										}
									}
								}
							}
							else
							{
								if(d_mean < 149.1235)
									return 1;
								else
									return 0;
							}
						}
						else
						{
							if(d_max < 246.9765)
							{
								if(rss_max < -74.47925)
								{
									if(rss_min < -84.9017)
									{
										if(rss_min < -84.96965)
											return 0;
										else
										{
											if(d_max < 243.5555)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(rss_max < -74.48645)
											return 1;
										else
											return 0;
									}
								}
								else
									return 1;
							}
							else
							{
								if(rss_mean < -79.7068)
								{
									if(d_min < 114.4065)
									{
										if(d_mean < 178.818)
											return 1;
										else
										{
											if(rss_mean < -80.43075)
											{
												if(rss_std < 3.139685)
													return 1;
												else
												{
													if(rss_std < 3.14503)
														return 0;
													else
													{
														if(d_std < 45.9152)
															return 0;
														else
															return 1;
													}
												}
											}
											else
											{
												if(d_max < 323.263)
													return 0;
												else
													return 1;
											}
										}
									}
									else
										return 1;
								}
								else
								{
									if(d_mean < 173.6435)
										return 1;
									else
										return 0;
								}
							}
						}
					}
					else
					{
						if(d_max < 279.8395)
						{
							if(d_std < 47.95735)
							{
								if(rss_std < 1.99163)
									return 0;
								else
								{
									if(d_min < 99.5562)
									{
										if(rss_std < 3.08408)
											return 0;
										else
										{
											if(d_max < 252.1805)
												return 1;
											else
												return 0;
										}
									}
									else
										return 1;
								}
							}
							else
								return 0;
						}
						else
						{
							if(rss_min < -80.92835)
								return 1;
							else
							{
								if(d_mean < 228.9395)
									return 0;
								else
									return 2;
							}
						}
					}
				}
			}
		}
		else
		{
			if(rss_min < -84.4652)
			{
				if(rss_std < 4.89907)
				{
					if(d_min < 69.8293)
					{
						if(rss_mean < -80.88425)
						{
							if(d_max < 259.505)
								return 0;
							else
								return 1;
						}
						else
						{
							if(rss_min < -84.9002)
							{
								if(d_max < 241.3625)
								{
									if(rss_max < -67.9129)
									{
										if(d_mean < 139.4075)
										{
											if(d_max < 230.559)
											{
												if(d_mean < 115.6305)
												{
													if(d_max < 210.308)
														return 1;
													else
														return 0;
												}
												else
													return 0;
											}
											else
												return 1;
										}
										else
											return 0;
									}
									else
									{
										if(d_max < 231.4145)
											return 1;
										else
										{
											if(rss_max < -66.35515)
												return 0;
											else
											{
												if(d_min < 52.6666)
												{
													if(d_max < 233.777)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
										}
									}
								}
								else
								{
									if(rss_min < -84.914)
									{
										if(rss_max < -70.47815)
											return 0;
										else
										{
											if(d_mean < 132.786)
											{
												if(rss_max < -69.47645)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
									}
									else
									{
										if(rss_max < -67.83295)
											return 0;
										else
											return 1;
									}
								}
							}
							else
							{
								if(rss_max < -69.4651)
								{
									if(rss_min < -84.60515)
									{
										if(rss_max < -69.7065)
										{
											if(d_mean < 138.6295)
											{
												if(rss_mean < -77.69955)
												{
													if(rss_min < -84.8573)
													{
														if(d_std < 45.32315)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
												else
												{
													if(d_mean < 133.5675)
														return 1;
													else
														return 0;
												}
											}
											else
											{
												if(d_mean < 152.2165)
												{
													if(d_max < 239.63)
														return 0;
													else
													{
														if(d_min < 67.1301)
															return 0;
														else
															return 1;
													}
												}
												else
												{
													if(d_std < 69.14695)
													{
														if(rss_std < 4.48361)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
											}
										}
										else
										{
											if(d_max < 269.186)
											{
												if(rss_mean < -77.461)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
									}
									else
										return 0;
								}
								else
								{
									if(d_max < 231.579)
									{
										if(d_mean < 151.144)
										{
											if(d_min < 51.2272)
											{
												if(d_min < 49.00345)
													return 1;
												else
													return 0;
											}
											else
											{
												if(d_min < 62.30655)
												{
													if(rss_max < -68.1168)
													{
														if(rss_mean < -78.22565)
														{
															if(rss_min < -84.80065)
																return 1;
															else
																return 0;
														}
														else
															return 0;
													}
													else
														return 1;
												}
												else
													return 1;
											}
										}
										else
										{
											if(d_std < 49.6484)
											{
												if(rss_std < 3.84075)
													return 1;
												else
												{
													if(d_max < 218.3345)
														return 1;
													else
														return 0;
												}
											}
											else
											{
												if(rss_min < -84.88665)
													return 1;
												else
													return 0;
											}
										}
									}
									else
									{
										if(rss_mean < -78.96135)
										{
											if(rss_std < 4.833655)
											{
												if(d_mean < 147.719)
												{
													if(d_mean < 147.691)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
											else
											{
												if(d_min < 64.23135)
													return 1;
												else
												{
													if(rss_max < -68.2322)
														return 0;
													else
														return 1;
												}
											}
										}
										else
											return 1;
									}
								}
							}
						}
					}
					else
					{
						if(d_std < 40.0558)
						{
							if(rss_max < -69.7283)
								return 1;
							else
							{
								if(rss_max < -69.6341)
									return 0;
								else
								{
									if(rss_min < -84.75885)
										return 1;
									else
									{
										if(rss_mean < -80.56125)
										{
											if(d_max < 230.4385)
												return 0;
											else
												return 1;
										}
										else
											return 1;
									}
								}
							}
						}
						else
						{
							if(d_min < 72.4328)
							{
								if(rss_mean < -80.03105)
								{
									if(d_min < 72.25545)
									{
										if(d_max < 233.332)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
								else
								{
									if(rss_mean < -79.89795)
									{
										if(d_min < 71.91755)
											return 1;
										else
											return 0;
									}
									else
										return 1;
								}
							}
							else
							{
								if(d_max < 422.0085)
								{
									if(d_std < 40.49865)
									{
										if(d_mean < 171.1115)
										{
											if(rss_min < -84.952)
											{
												if(d_std < 40.4971)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
										else
										{
											if(d_min < 88.8982)
												return 0;
											else
												return 1;
										}
									}
									else
										return 1;
								}
								else
									return 2;
							}
						}
					}
				}
				else
				{
					if(rss_max < -67.035)
					{
						if(d_min < 69.8652)
						{
							if(d_max < 243.815)
							{
								if(d_max < 213.326)
								{
									if(d_max < 199.053)
										return 0;
									else
										return 1;
								}
								else
								{
									if(d_mean < 141.2975)
									{
										if(rss_max < -67.27825)
										{
											if(d_min < 62.4877)
											{
												if(rss_std < 5.04208)
												{
													if(d_max < 220.37)
														return 1;
													else
													{
														if(d_std < 51.7491)
															return 0;
														else
														{
															if(d_mean < 130.428)
															{
																if(d_min < 54.55185)
																	return 0;
																else
																	return 1;
															}
															else
																return 0;
														}
													}
												}
												else
													return 0;
											}
											else
											{
												if(d_mean < 130.8325)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(d_min < 58.93535)
												return 0;
											else
												return 1;
										}
									}
									else
										return 0;
								}
							}
							else
							{
								if(d_mean < 160.3915)
								{
									if(rss_max < -67.72365)
									{
										if(rss_min < -84.87305)
										{
											if(rss_max < -68.24745)
											{
												if(d_min < 60.4319)
													return 0;
												else
													return 1;
											}
											else
											{
												if(d_max < 305.312)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(rss_std < 5.64873)
											{
												if(rss_max < -68.86475)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
									}
									else
										return 1;
								}
								else
								{
									if(rss_std < 5.001095)
									{
										if(d_min < 66.1233)
										{
											if(rss_mean < -78.97485)
												return 0;
											else
											{
												if(d_min < 64.6453)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(d_mean < 191.088)
												return 1;
											else
												return 0;
										}
									}
									else
										return 0;
								}
							}
						}
						else
						{
							if(d_mean < 161.299)
								return 1;
							else
								return 0;
						}
					}
					else
					{
						if(d_max < 234.8865)
						{
							if(d_std < 58.68945)
							{
								if(d_max < 218.1355)
								{
									if(rss_mean < -77.62895)
									{
										if(rss_min < -84.54845)
											return 1;
										else
											return 0;
									}
									else
										return 1;
								}
								else
								{
									if(rss_max < -64.98625)
									{
										if(d_mean < 117.8)
											return 1;
										else
										{
											if(rss_std < 5.25223)
											{
												if(d_min < 54.23555)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
									}
									else
									{
										if(d_std < 50.71215)
											return 1;
										else
										{
											if(rss_max < -63.20805)
											{
												if(d_max < 224.727)
													return 0;
												else
												{
													if(d_min < 43.2946)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(d_min < 33.59435)
													return 0;
												else
													return 1;
											}
										}
									}
								}
							}
							else
							{
								if(d_std < 58.94045)
								{
									if(d_std < 58.90425)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
						}
						else
						{
							if(d_min < 150.05775)
							{
								if(d_max < 236.652)
								{
									if(d_max < 236.476)
										return 1;
									else
										return 0;
								}
								else
									return 1;
							}
							else
								return 2;
						}
					}
				}
			}
			else
			{
				if(d_min < 73.12285)
				{
					if(rss_min < -83.6677)
					{
						if(rss_max < -62.5785)
						{
							if(d_mean < 126.2405)
							{
								if(d_std < 47.65875)
								{
									if(d_max < 213.195)
									{
										if(rss_max < -67.2242)
											return 0;
										else
										{
											if(rss_mean < -76.70525)
											{
												if(d_max < 173.4935)
													return 0;
												else
												{
													if(d_mean < 123.7565)
													{
														if(rss_min < -83.9679)
															return 1;
														else
														{
															if(d_std < 38.4558)
																return 1;
															else
																return 0;
														}
													}
													else
														return 1;
												}
											}
											else
											{
												if(rss_std < 4.252195)
													return 1;
												else
													return 0;
											}
										}
									}
									else
									{
										if(d_std < 43.999)
											return 1;
										else
										{
											if(d_mean < 121.925)
												return 1;
											else
											{
												if(rss_max < -64.8569)
													return 0;
												else
													return 1;
											}
										}
									}
								}
								else
								{
									if(d_std < 58.2006)
									{
										if(d_max < 225.0775)
											return 0;
										else
											return 1;
									}
									else
									{
										if(rss_std < 5.562945)
											return 1;
										else
											return 0;
									}
								}
							}
							else
							{
								if(d_min < 67.21935)
								{
									if(d_std < 65.5011)
									{
										if(rss_max < -66.8707)
											return 0;
										else
										{
											if(d_std < 52.13985)
											{
												if(d_mean < 134.043)
												{
													if(rss_min < -84.25065)
													{
														if(d_min < 46.5163)
															return 0;
														else
															return 1;
													}
													else
													{
														if(rss_std < 5.808135)
															return 1;
														else
															return 0;
													}
												}
												else
												{
													if(rss_mean < -77.262)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(d_min < 54.3276)
													return 0;
												else
												{
													if(d_min < 57.3521)
														return 1;
													else
														return 0;
												}
											}
										}
									}
									else
									{
										if(d_max < 248.1705)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(d_mean < 140.5645)
									{
										if(d_max < 212.109)
										{
											if(rss_max < -68.0801)
												return 0;
											else
												return 1;
										}
										else
											return 1;
									}
									else
										return 0;
								}
							}
						}
						else
						{
							if(rss_max < -62.51745)
								return 1;
							else
							{
								if(rss_mean < -75.77225)
								{
									if(d_min < 36.1628)
									{
										if(d_mean < 119.827)
											return 1;
										else
											return 0;
									}
									else
										return 1;
								}
								else
									return 0;
							}
						}
					}
					else
					{
						if(d_min < 71.0243)
						{
							if(d_max < 216.196)
							{
								if(rss_min < -83.2785)
								{
									if(d_max < 176.323)
										return 1;
									else
									{
										if(d_max < 195.0845)
										{
											if(d_std < 38.20555)
											{
												if(d_min < 68.02285)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
										else
											return 0;
									}
								}
								else
								{
									if(d_std < 90.2389)
										return 0;
									else
										return 1;
								}
							}
							else
							{
								if(d_min < 58.20585)
									return 1;
								else
									return 0;
							}
						}
						else
						{
							if(d_max < 188.013)
								return 1;
							else
								return 0;
						}
					}
				}
				else
				{
					if(d_min < 126.84)
					{
						if(rss_std < 2.98828)
						{
							if(d_mean < 140.7885)
								return 1;
							else
								return 0;
						}
						else
						{
							if(d_max < 221.3635)
							{
								if(d_mean < 145.184)
									return 1;
								else
									return 0;
							}
							else
								return 1;
						}
					}
					else
						return 2;
				}
			}
		}
	}
	else
	{
		if(d_max < 237.2395)
		{
			if(rss_mean < -68.32655)
			{
				if(rss_min < -83.9597)
				{
					if(d_std < 62.4318)
					{
						if(rss_std < 9.51216)
						{
							if(d_max < 170.82)
								return 0;
							else
							{
								if(d_std < 54.36435)
									return 1;
								else
								{
									if(d_std < 58.0228)
									{
										if(d_max < 207.66)
											return 1;
										else
										{
											if(rss_min < -84.702)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(rss_mean < -74.86615)
											return 1;
										else
										{
											if(rss_max < -56.22285)
												return 0;
											else
												return 1;
										}
									}
								}
							}
						}
						else
							return 0;
					}
					else
						return 0;
				}
				else
				{
					if(d_min < 33.3638)
						return 0;
					else
					{
						if(rss_max < -60.1978)
							return 0;
						else
							return 1;
					}
				}
			}
			else
				return 2;
		}
		else
		{
			if(d_mean < 135.932)
			{
				if(rss_mean < -66.5598)
					return 1;
				else
					return 2;
			}
			else
			{
				if(rss_mean < -69.90885)
					return 1;
				else
					return 2;
			}
		}
	}
}

int tree_22(float d_max, float d_min, float d_mean, float d_std, float rss_max, float rss_min, float rss_mean, float rss_std)
{
	if(rss_std < 5.049155)
	{
		if(rss_max < -70.5048)
		{
			if(d_max < 237.527)
			{
				if(rss_std < 2.4706)
				{
					if(d_mean < 193.7005)
					{
						if(rss_mean < -80.50505)
						{
							if(rss_max < -75.8264)
							{
								if(d_mean < 155.347)
									return 1;
								else
								{
									if(rss_max < -81.6664)
									{
										if(d_min < 175.0105)
											return 1;
										else
											return 0;
									}
									else
									{
										if(d_mean < 176.922)
										{
											if(rss_min < -84.26185)
												return 0;
											else
											{
												if(d_max < 229.239)
												{
													if(rss_max < -80.7054)
													{
														if(d_mean < 167.2085)
															return 1;
														else
															return 0;
													}
													else
													{
														if(d_std < 8.42905)
															return 1;
														else
															return 0;
													}
												}
												else
													return 1;
											}
										}
										else
											return 0;
									}
								}
							}
							else
							{
								if(rss_max < -75.81925)
									return 1;
								else
								{
									if(d_min < 136.9315)
										return 0;
									else
									{
										if(rss_mean < -81.9651)
											return 0;
										else
											return 1;
									}
								}
							}
						}
						else
						{
							if(rss_min < -84.65785)
							{
								if(d_max < 200.9205)
									return 1;
								else
									return 0;
							}
							else
								return 0;
						}
					}
					else
					{
						if(rss_max < -76.05285)
						{
							if(rss_std < 1.8203)
								return 0;
							else
							{
								if(d_min < 170.267)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(d_min < 109.27415)
								return 0;
							else
							{
								if(rss_mean < -82.60405)
									return 0;
								else
									return 1;
							}
						}
					}
				}
				else
				{
					if(rss_min < -84.2805)
					{
						if(d_max < 214.897)
						{
							if(d_min < 73.79355)
								return 0;
							else
							{
								if(d_max < 200.427)
									return 1;
								else
								{
									if(d_std < 31.3951)
									{
										if(d_min < 82.8571)
											return 0;
										else
											return 1;
									}
									else
									{
										if(rss_max < -72.8714)
										{
											if(rss_min < -84.93605)
												return 1;
											else
											{
												if(d_std < 33.39585)
												{
													if(d_mean < 160.8835)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
										}
										else
										{
											if(rss_std < 3.90425)
											{
												if(d_min < 74.43765)
												{
													if(d_max < 213.3345)
														return 0;
													else
														return 1;
												}
												else
												{
													if(rss_std < 2.837795)
														return 0;
													else
														return 1;
												}
											}
											else
												return 0;
										}
									}
								}
							}
						}
						else
						{
							if(d_max < 234.291)
							{
								if(d_std < 38.06425)
								{
									if(rss_std < 2.980535)
									{
										if(d_min < 129.575)
										{
											if(rss_max < -75.39135)
												return 0;
											else
											{
												if(d_min < 105.616)
												{
													if(rss_min < -84.83075)
													{
														if(d_min < 77.4468)
														{
															if(d_min < 76.433)
																return 0;
															else
																return 1;
														}
														else
															return 0;
													}
													else
													{
														if(rss_std < 2.85659)
															return 0;
														else
														{
															if(rss_max < -72.90755)
															{
																if(d_max < 222.924)
																	return 0;
																else
																{
																	if(d_max < 224.9525)
																		return 1;
																	else
																		return 0;
																}
															}
															else
															{
																if(rss_mean < -80.32845)
																{
																	if(d_min < 80.088)
																		return 0;
																	else
																		return 1;
																}
																else
																{
																	if(d_max < 218.3385)
																		return 1;
																	else
																		return 0;
																}
															}
														}
													}
												}
												else
												{
													if(rss_min < -84.7025)
													{
														if(d_std < 33.80215)
														{
															if(rss_max < -72.18905)
																return 1;
															else
																return 0;
														}
														else
														{
															if(d_max < 225.8025)
																return 1;
															else
																return 0;
														}
													}
													else
														return 0;
												}
											}
										}
										else
										{
											if(rss_max < -76.75325)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(rss_min < -84.9154)
										{
											if(d_mean < 152.9795)
												return 0;
											else
											{
												if(d_max < 220.6985)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(d_min < 76.80305)
												return 0;
											else
											{
												if(rss_max < -74.27315)
												{
													if(rss_mean < -80.45455)
														return 0;
													else
													{
														if(d_min < 94.75775)
															return 0;
														else
															return 1;
													}
												}
												else
												{
													if(rss_mean < -80.8459)
														return 0;
													else
													{
														if(rss_max < -72.2429)
														{
															if(rss_max < -72.45945)
															{
																if(rss_min < -84.67235)
																{
																	if(rss_min < -84.7839)
																	{
																		if(d_min < 99.91275)
																		{
																			if(rss_std < 3.264625)
																			{
																				if(d_mean < 148.384)
																				{
																					if(d_mean < 144.0885)
																						return 0;
																					else
																					{
																						if(d_max < 230.5555)
																							return 1;
																						else
																							return 0;
																					}
																				}
																				else
																				{
																					if(d_max < 220.335)
																						return 1;
																					else
																						return 0;
																				}
																			}
																			else
																				return 1;
																		}
																		else
																			return 1;
																	}
																	else
																		return 1;
																}
																else
																	return 0;
															}
															else
																return 0;
														}
														else
														{
															if(rss_min < -84.7335)
															{
																if(rss_std < 3.05431)
																{
																	if(d_mean < 161.8465)
																		return 0;
																	else
																		return 1;
																}
																else
																	return 1;
															}
															else
															{
																if(d_mean < 137.044)
																	return 1;
																else
																{
																	if(d_min < 94.89885)
																	{
																		if(rss_min < -84.7121)
																			return 0;
																		else
																		{
																			if(d_mean < 142.1575)
																				return 0;
																			else
																				return 1;
																		}
																	}
																	else
																		return 0;
																}
															}
														}
													}
												}
											}
										}
									}
								}
								else
								{
									if(d_mean < 152.3935)
									{
										if(rss_max < -71.5066)
										{
											if(rss_min < -84.82945)
											{
												if(rss_std < 3.35594)
												{
													if(rss_min < -84.83245)
													{
														if(rss_std < 3.107385)
														{
															if(rss_min < -84.8997)
															{
																if(d_std < 42.27135)
																	return 0;
																else
																{
																	if(rss_max < -74.81275)
																		return 0;
																	else
																		return 1;
																}
															}
															else
															{
																if(d_mean < 145.0925)
																	return 0;
																else
																	return 1;
															}
														}
														else
														{
															if(rss_mean < -79.91585)
																return 1;
															else
																return 0;
														}
													}
													else
														return 1;
												}
												else
													return 0;
											}
											else
												return 0;
										}
										else
										{
											if(rss_std < 3.68233)
											{
												if(rss_min < -84.7579)
												{
													if(d_min < 72.83305)
														return 0;
													else
													{
														if(d_std < 39.45535)
														{
															if(d_min < 80.0291)
																return 0;
															else
																return 1;
														}
														else
														{
															if(rss_max < -70.72095)
																return 1;
															else
															{
																if(d_max < 227.858)
																	return 1;
																else
																	return 0;
															}
														}
													}
												}
												else
												{
													if(d_min < 77.816)
													{
														if(rss_mean < -78.8267)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
											}
											else
											{
												if(d_min < 74.98915)
												{
													if(d_min < 73.35345)
														return 0;
													else
													{
														if(d_min < 73.47945)
															return 1;
														else
														{
															if(rss_std < 3.768695)
																return 1;
															else
																return 0;
														}
													}
												}
												else
												{
													if(rss_min < -84.6886)
													{
														if(d_std < 47.0181)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
											}
										}
									}
									else
									{
										if(rss_max < -72.06995)
										{
											if(rss_std < 3.0503)
											{
												if(rss_max < -74.2644)
													return 0;
												else
												{
													if(d_mean < 159.4985)
													{
														if(d_std < 39.26855)
														{
															if(d_min < 89.5809)
																return 0;
															else
																return 1;
														}
														else
															return 0;
													}
													else
														return 0;
												}
											}
											else
												return 0;
										}
										else
										{
											if(d_min < 81.18675)
											{
												if(d_max < 233.954)
													return 0;
												else
												{
													if(d_std < 42.18975)
														return 1;
													else
														return 0;
												}
											}
											else
											{
												if(rss_min < -84.7667)
													return 1;
												else
													return 0;
											}
										}
									}
								}
							}
							else
							{
								if(d_mean < 164.958)
								{
									if(rss_min < -84.93125)
										return 0;
									else
									{
										if(rss_mean < -78.624)
											return 1;
										else
										{
											if(d_max < 234.91)
												return 0;
											else
												return 1;
										}
									}
								}
								else
								{
									if(rss_min < -84.8263)
										return 0;
									else
									{
										if(d_max < 235.991)
											return 0;
										else
											return 1;
									}
								}
							}
						}
					}
					else
					{
						if(d_max < 223.6645)
							return 0;
						else
						{
							if(rss_max < -70.7681)
							{
								if(d_min < 125.8135)
								{
									if(rss_std < 3.353)
										return 0;
									else
									{
										if(d_min < 71.8204)
											return 0;
										else
										{
											if(d_max < 226.8515)
												return 1;
											else
												return 0;
										}
									}
								}
								else
									return 1;
							}
							else
							{
								if(rss_min < -84.21455)
									return 0;
								else
									return 1;
							}
						}
					}
				}
			}
			else
			{
				if(rss_mean < -82.83115)
				{
					if(rss_min < -84.89615)
						return 0;
					else
					{
						if(d_max < 292.778)
						{
							if(rss_std < 1.44883)
								return 0;
							else
							{
								if(d_max < 267.4685)
									return 0;
								else
									return 1;
							}
						}
						else
							return 1;
					}
				}
				else
				{
					if(rss_min < -84.46025)
					{
						if(rss_min < -84.91765)
						{
							if(rss_std < 4.343095)
							{
								if(d_max < 274.9505)
								{
									if(rss_max < -74.729)
									{
										if(rss_min < -84.98255)
										{
											if(d_min < 140.7875)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
									else
									{
										if(d_mean < 189.1975)
										{
											if(d_max < 272.111)
											{
												if(d_max < 244.5965)
												{
													if(d_mean < 155.163)
													{
														if(d_max < 240.5435)
															return 1;
														else
															return 0;
													}
													else
													{
														if(rss_min < -84.9854)
															return 1;
														else
														{
															if(d_std < 42.1766)
															{
																if(d_max < 241.3295)
																{
																	if(d_max < 238.7305)
																		return 1;
																	else
																		return 0;
																}
																else
																	return 1;
															}
															else
																return 0;
														}
													}
												}
												else
												{
													if(rss_std < 3.86476)
													{
														if(rss_min < -84.97865)
															return 1;
														else
														{
															if(rss_max < -73.59605)
															{
																if(d_max < 245.951)
																	return 1;
																else
																	return 0;
															}
															else
																return 1;
														}
													}
													else
													{
														if(d_std < 48.40565)
															return 0;
														else
															return 1;
													}
												}
											}
											else
											{
												if(d_min < 87.4599)
												{
													if(rss_min < -84.96655)
														return 1;
													else
														return 0;
												}
												else
												{
													if(d_std < 41.62815)
														return 0;
													else
														return 1;
												}
											}
										}
										else
											return 0;
									}
								}
								else
								{
									if(rss_min < -84.98165)
									{
										if(rss_mean < -82.5488)
											return 0;
										else
										{
											if(d_mean < 167.533)
											{
												if(rss_std < 4.2316)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
									}
									else
									{
										if(rss_max < -73.96355)
										{
											if(rss_max < -78.2365)
												return 0;
											else
											{
												if(rss_std < 2.962625)
												{
													if(d_min < 113.8535)
														return 0;
													else
													{
														if(rss_min < -84.98125)
															return 0;
														else
															return 1;
													}
												}
												else
													return 0;
											}
										}
										else
											return 1;
									}
								}
							}
							else
								return 0;
						}
						else
						{
							if(d_mean < 168.426)
							{
								if(d_min < 99.72235)
								{
									if(rss_std < 2.87369)
									{
										if(rss_max < -71.76465)
										{
											if(rss_max < -74.53385)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
									else
									{
										if(rss_max < -73.67995)
										{
											if(d_min < 96.7506)
											{
												if(rss_min < -84.76085)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
										else
										{
											if(rss_std < 3.803865)
												return 1;
											else
											{
												if(rss_max < -71.577)
												{
													if(d_max < 268.813)
														return 0;
													else
														return 1;
												}
												else
												{
													if(rss_min < -84.91355)
														return 0;
													else
													{
														if(rss_max < -71.30945)
														{
															if(d_mean < 149.929)
																return 1;
															else
															{
																if(d_std < 45.71145)
																	return 0;
																else
																	return 1;
															}
														}
														else
															return 1;
													}
												}
											}
										}
									}
								}
								else
									return 1;
							}
							else
							{
								if(d_max < 279.129)
								{
									if(rss_max < -73.9468)
									{
										if(d_std < 38.40555)
										{
											if(rss_mean < -80.80805)
											{
												if(rss_max < -78.68495)
												{
													if(rss_mean < -81.91135)
													{
														if(d_mean < 195.226)
														{
															if(d_mean < 183.0885)
																return 0;
															else
																return 1;
														}
														else
															return 0;
													}
													else
														return 1;
												}
												else
												{
													if(rss_max < -74.48645)
														return 1;
													else
													{
														if(rss_std < 2.15808)
															return 0;
														else
															return 1;
													}
												}
											}
											else
											{
												if(rss_min < -84.8134)
													return 1;
												else
												{
													if(d_min < 132.0325)
													{
														if(d_max < 257.456)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
											}
										}
										else
										{
											if(rss_min < -84.8532)
											{
												if(d_min < 97.0217)
													return 0;
												else
												{
													if(d_mean < 186.9585)
														return 1;
													else
													{
														if(d_mean < 195.6105)
															return 0;
														else
														{
															if(d_max < 252.381)
																return 0;
															else
																return 1;
														}
													}
												}
											}
											else
											{
												if(d_std < 43.8108)
												{
													if(d_min < 115.0165)
														return 0;
													else
													{
														if(rss_mean < -80.5822)
														{
															if(rss_max < -76.73785)
																return 0;
															else
																return 1;
														}
														else
														{
															if(d_mean < 171.34)
																return 1;
															else
																return 0;
														}
													}
												}
												else
													return 0;
											}
										}
									}
									else
										return 1;
								}
								else
								{
									if(rss_max < -75.6407)
									{
										if(d_min < 109.265)
											return 0;
										else
										{
											if(rss_mean < -80.3757)
												return 1;
											else
											{
												if(d_max < 322.5895)
													return 1;
												else
													return 0;
											}
										}
									}
									else
										return 1;
								}
							}
						}
					}
					else
					{
						if(rss_min < -81.91)
						{
							if(d_mean < 176.017)
							{
								if(d_min < 124.6805)
								{
									if(d_min < 120.684)
									{
										if(d_max < 286.9685)
										{
											if(d_min < 76.0484)
											{
												if(d_min < 74.0048)
													return 0;
												else
													return 1;
											}
											else
											{
												if(rss_min < -84.277)
													return 0;
												else
												{
													if(rss_max < -74.42615)
														return 0;
													else
													{
														if(d_min < 91.37285)
															return 0;
														else
															return 1;
													}
												}
											}
										}
										else
											return 1;
									}
									else
									{
										if(d_max < 247.67)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(d_mean < 160.292)
										return 1;
									else
									{
										if(d_max < 248.941)
											return 1;
										else
											return 0;
									}
								}
							}
							else
							{
								if(d_std < 60.93985)
								{
									if(d_std < 57.8514)
										return 0;
									else
									{
										if(d_mean < 184.7385)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(d_max < 258.6095)
										return 1;
									else
										return 0;
								}
							}
						}
						else
						{
							if(d_min < 203.978)
								return 0;
							else
								return 2;
						}
					}
				}
			}
		}
		else
		{
			if(rss_mean < -73.3483)
			{
				if(rss_min < -84.38475)
				{
					if(rss_mean < -81.3003)
					{
						if(d_min < 86.65525)
							return 0;
						else
						{
							if(d_max < 245.709)
								return 0;
							else
								return 1;
						}
					}
					else
					{
						if(rss_std < 4.71862)
						{
							if(d_min < 69.8444)
							{
								if(rss_min < -84.9002)
								{
									if(rss_max < -68.0664)
									{
										if(rss_max < -69.2597)
										{
											if(d_max < 244.179)
											{
												if(rss_mean < -78.4733)
													return 0;
												else
												{
													if(d_min < 67.35595)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(d_mean < 135.5475)
												{
													if(d_std < 42.7585)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
										}
										else
										{
											if(d_std < 36.67965)
												return 0;
											else
											{
												if(d_min < 64.0098)
												{
													if(d_max < 247.679)
													{
														if(d_std < 42.48425)
														{
															if(d_mean < 106.375)
																return 0;
															else
																return 1;
														}
														else
														{
															if(rss_std < 4.01958)
															{
																if(d_max < 234.661)
																	return 0;
																else
																	return 1;
															}
															else
																return 0;
														}
													}
													else
														return 1;
												}
												else
												{
													if(rss_max < -68.4419)
													{
														if(rss_max < -69.18915)
														{
															if(d_min < 64.81545)
																return 1;
															else
																return 0;
														}
														else
															return 1;
													}
													else
														return 0;
												}
											}
										}
									}
									else
									{
										if(d_max < 264.1035)
										{
											if(d_mean < 156.897)
											{
												if(d_min < 51.13775)
												{
													if(d_std < 46.97325)
														return 1;
													else
														return 0;
												}
												else
												{
													if(d_std < 47.9486)
														return 1;
													else
													{
														if(d_std < 48.87035)
															return 0;
														else
															return 1;
													}
												}
											}
											else
											{
												if(d_min < 66.40855)
													return 0;
												else
													return 1;
											}
										}
										else
											return 1;
									}
								}
								else
								{
									if(rss_min < -84.57635)
									{
										if(d_mean < 139.829)
										{
											if(d_min < 62.589)
											{
												if(d_mean < 107.499)
													return 0;
												else
												{
													if(rss_max < -68.11365)
													{
														if(rss_min < -84.84355)
														{
															if(d_mean < 120.5195)
																return 1;
															else
															{
																if(d_mean < 134.08)
																	return 0;
																else
																	return 1;
															}
														}
														else
															return 1;
													}
													else
													{
														if(d_min < 50.5743)
														{
															if(d_std < 45.0008)
															{
																if(d_std < 44.8182)
																	return 1;
																else
																	return 0;
															}
															else
																return 1;
														}
														else
															return 1;
													}
												}
											}
											else
											{
												if(rss_max < -70.22575)
												{
													if(d_std < 49.75495)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
										}
										else
										{
											if(rss_max < -69.42065)
											{
												if(rss_mean < -79.521)
												{
													if(rss_min < -84.7543)
														return 1;
													else
														return 0;
												}
												else
												{
													if(d_min < 67.2523)
														return 0;
													else
													{
														if(rss_std < 4.39631)
															return 1;
														else
															return 0;
													}
												}
											}
											else
											{
												if(d_std < 52.3403)
												{
													if(rss_max < -68.29725)
													{
														if(d_mean < 155.044)
														{
															if(rss_min < -84.74775)
																return 1;
															else
															{
																if(d_max < 239.808)
																	return 0;
																else
																	return 1;
															}
														}
														else
															return 0;
													}
													else
													{
														if(d_std < 40.35885)
														{
															if(d_mean < 158.6175)
																return 1;
															else
																return 0;
														}
														else
															return 1;
													}
												}
												else
													return 1;
											}
										}
									}
									else
									{
										if(d_max < 234.804)
										{
											if(d_std < 44.8558)
											{
												if(rss_min < -84.48195)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
										else
											return 1;
									}
								}
							}
							else
							{
								if(d_max < 230.693)
								{
									if(d_max < 230.3855)
									{
										if(rss_mean < -80.63785)
										{
											if(rss_min < -84.807)
												return 1;
											else
											{
												if(d_mean < 163.753)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(rss_min < -84.7061)
												return 1;
											else
											{
												if(rss_min < -84.67795)
												{
													if(d_min < 88.68435)
													{
														if(d_max < 226.5725)
															return 0;
														else
															return 1;
													}
													else
													{
														if(d_mean < 164.3275)
															return 1;
														else
															return 0;
													}
												}
												else
													return 1;
											}
										}
									}
									else
										return 0;
								}
								else
								{
									if(d_min < 72.4328)
									{
										if(rss_max < -70.1409)
										{
											if(d_min < 71.91755)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
									else
										return 1;
								}
							}
						}
						else
						{
							if(d_min < 68.93865)
							{
								if(rss_max < -67.2818)
								{
									if(d_max < 239.8395)
									{
										if(d_mean < 137.231)
										{
											if(d_max < 217.0645)
												return 1;
											else
											{
												if(rss_min < -84.85755)
													return 0;
												else
												{
													if(d_max < 227.6455)
													{
														if(rss_std < 5.016345)
														{
															if(rss_mean < -77.82635)
																return 1;
															else
															{
																if(rss_max < -68.243)
																	return 0;
																else
																	return 1;
															}
														}
														else
														{
															if(rss_mean < -77.69935)
															{
																if(d_min < 57.8118)
																	return 1;
																else
																	return 0;
															}
															else
																return 1;
														}
													}
													else
													{
														if(d_max < 228.398)
															return 1;
														else
															return 0;
													}
												}
											}
										}
										else
											return 0;
									}
									else
									{
										if(rss_mean < -78.3401)
										{
											if(rss_max < -68.6607)
												return 0;
											else
											{
												if(d_std < 56.9798)
												{
													if(d_std < 50.41165)
														return 1;
													else
													{
														if(rss_min < -84.8602)
															return 0;
														else
															return 1;
													}
												}
												else
													return 1;
											}
										}
										else
										{
											if(rss_max < -70.0236)
												return 0;
											else
											{
												if(rss_mean < -76.96455)
													return 1;
												else
												{
													if(d_max < 257.8985)
														return 0;
													else
														return 1;
												}
											}
										}
									}
								}
								else
								{
									if(d_min < 50.33745)
									{
										if(d_max < 233.777)
										{
											if(d_std < 48.44365)
											{
												if(d_max < 215.3495)
													return 1;
												else
												{
													if(d_std < 37.51895)
														return 1;
													else
														return 0;
												}
											}
											else
												return 0;
										}
										else
											return 1;
									}
									else
										return 1;
								}
							}
							else
							{
								if(rss_max < -70.2984)
								{
									if(d_max < 240.42)
										return 0;
									else
										return 1;
								}
								else
									return 1;
							}
						}
					}
				}
				else
				{
					if(d_max < 224.815)
					{
						if(d_min < 67.51315)
						{
							if(d_mean < 132.659)
							{
								if(rss_min < -83.27395)
								{
									if(rss_max < -68.2562)
										return 0;
									else
									{
										if(d_mean < 113.5995)
											return 1;
										else
										{
											if(rss_max < -64.22045)
											{
												if(rss_mean < -78.00485)
													return 1;
												else
												{
													if(rss_std < 4.28451)
													{
														if(d_min < 59.2451)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
											}
											else
												return 1;
										}
									}
								}
								else
									return 0;
							}
							else
								return 0;
						}
						else
						{
							if(d_mean < 131.316)
							{
								if(rss_min < -83.0925)
								{
									if(rss_min < -83.6306)
										return 1;
									else
									{
										if(d_max < 200.0675)
											return 1;
										else
											return 0;
									}
								}
								else
									return 0;
							}
							else
							{
								if(rss_min < -83.666)
								{
									if(rss_mean < -79.0272)
										return 0;
									else
									{
										if(rss_min < -84.32215)
											return 0;
										else
										{
											if(rss_max < -69.93115)
											{
												if(d_min < 89.80405)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
									}
								}
								else
									return 0;
							}
						}
					}
					else
					{
						if(d_min < 67.0645)
						{
							if(rss_max < -67.43975)
								return 0;
							else
								return 1;
						}
						else
						{
							if(d_mean < 166.661)
								return 1;
							else
								return 0;
						}
					}
				}
			}
			else
				return 2;
		}
	}
	else
	{
		if(rss_max < -60.8164)
		{
			if(d_min < 130.39205)
			{
				if(d_max < 234.899)
				{
					if(d_std < 50.57145)
					{
						if(rss_min < -84.49855)
						{
							if(rss_max < -66.02535)
							{
								if(d_std < 49.13665)
								{
									if(d_min < 57.10905)
									{
										if(rss_min < -84.97645)
											return 1;
										else
										{
											if(rss_std < 5.137565)
											{
												if(rss_min < -84.87355)
													return 0;
												else
												{
													if(d_max < 222.0055)
														return 0;
													else
														return 1;
												}
											}
											else
												return 0;
										}
									}
									else
									{
										if(rss_max < -70.5734)
											return 0;
										else
											return 1;
									}
								}
								else
									return 0;
							}
							else
							{
								if(d_mean < 149.8105)
								{
									if(d_std < 50.2097)
										return 1;
									else
									{
										if(rss_mean < -77.26055)
										{
											if(rss_max < -65.03515)
												return 0;
											else
												return 1;
										}
										else
											return 1;
									}
								}
								else
								{
									if(rss_max < -64.73805)
										return 0;
									else
										return 1;
								}
							}
						}
						else
						{
							if(rss_min < -83.9675)
							{
								if(d_mean < 129.9805)
								{
									if(rss_min < -84.2868)
									{
										if(rss_std < 5.37081)
											return 0;
										else
										{
											if(d_max < 180.6115)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(rss_mean < -75.59455)
											return 1;
										else
										{
											if(rss_min < -84.0634)
												return 0;
											else
												return 1;
										}
									}
								}
								else
								{
									if(rss_max < -63.4996)
										return 0;
									else
										return 1;
								}
							}
							else
							{
								if(d_max < 216.196)
								{
									if(rss_min < -83.90255)
									{
										if(rss_min < -83.91625)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
								else
									return 1;
							}
						}
					}
					else
					{
						if(rss_mean < -77.7659)
						{
							if(d_mean < 139.5585)
							{
								if(rss_mean < -78.08345)
								{
									if(rss_max < -67.4992)
										return 0;
									else
										return 1;
								}
								else
								{
									if(d_mean < 135.7925)
									{
										if(d_min < 53.48445)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
							}
							else
							{
								if(rss_min < -84.8368)
								{
									if(d_std < 55.2439)
									{
										if(rss_max < -67.04995)
											return 0;
										else
										{
											if(d_min < 46.6504)
											{
												if(rss_max < -62.9988)
													return 0;
												else
													return 1;
											}
											else
											{
												if(rss_max < -66.5373)
												{
													if(d_min < 60.34755)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
										}
									}
									else
										return 0;
								}
								else
									return 0;
							}
						}
						else
						{
							if(rss_min < -84.4671)
							{
								if(d_mean < 137.8825)
								{
									if(d_max < 229.875)
									{
										if(rss_max < -64.39375)
										{
											if(d_min < 67.3319)
											{
												if(rss_mean < -77.1905)
												{
													if(d_mean < 127.5285)
														return 1;
													else
													{
														if(rss_max < -65.27695)
															return 0;
														else
														{
															if(d_std < 58.57235)
																return 1;
															else
																return 0;
														}
													}
												}
												else
												{
													if(rss_min < -84.64025)
														return 0;
													else
													{
														if(d_max < 223.846)
															return 0;
														else
														{
															if(d_min < 46.6498)
																return 0;
															else
																return 1;
														}
													}
												}
											}
											else
											{
												if(d_max < 204.2135)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(d_min < 35.90495)
												return 0;
											else
											{
												if(rss_max < -63.51765)
												{
													if(d_min < 39.39425)
													{
														if(rss_min < -84.75145)
															return 1;
														else
															return 0;
													}
													else
														return 1;
												}
												else
													return 1;
											}
										}
									}
									else
									{
										if(d_std < 51.5021)
										{
											if(d_max < 232.167)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
								}
								else
								{
									if(rss_max < -60.84115)
									{
										if(d_max < 215.9925)
											return 1;
										else
											return 0;
									}
									else
										return 1;
								}
							}
							else
							{
								if(rss_mean < -76.90735)
									return 0;
								else
								{
									if(d_mean < 129.556)
										return 0;
									else
									{
										if(rss_max < -62.2201)
										{
											if(rss_mean < -74.32345)
												return 0;
											else
												return 1;
										}
										else
										{
											if(d_max < 218.8375)
												return 0;
											else
												return 1;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if(rss_max < -67.72365)
					{
						if(rss_mean < -79.1904)
							return 0;
						else
						{
							if(rss_std < 5.60954)
							{
								if(rss_max < -67.9135)
								{
									if(rss_max < -69.91775)
									{
										if(d_std < 55.4093)
											return 1;
										else
											return 0;
									}
									else
									{
										if(d_std < 70.22655)
											return 1;
										else
											return 0;
									}
								}
								else
									return 0;
							}
							else
								return 0;
						}
					}
					else
					{
						if(d_min < 35.1518)
						{
							if(d_std < 51.43655)
							{
								if(d_max < 242.3805)
									return 0;
								else
									return 1;
							}
							else
							{
								if(rss_mean < -79.0371)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(rss_min < -84.96945)
							{
								if(rss_max < -66.86925)
									return 0;
								else
									return 1;
							}
							else
								return 1;
						}
					}
				}
			}
			else
				return 2;
		}
		else
		{
			if(rss_mean < -69.95915)
			{
				if(d_min < 32.73685)
				{
					if(rss_min < -83.9597)
					{
						if(rss_min < -84.8758)
						{
							if(rss_std < 9.697795)
							{
								if(d_std < 57.38515)
								{
									if(rss_min < -84.9744)
										return 0;
									else
										return 1;
								}
								else
								{
									if(d_mean < 162.073)
									{
										if(d_max < 244.166)
											return 0;
										else
											return 1;
									}
									else
										return 1;
								}
							}
							else
							{
								if(d_max < 264.8335)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(d_max < 239.683)
							{
								if(rss_std < 9.34381)
								{
									if(d_std < 60.6352)
									{
										if(d_max < 170.82)
											return 0;
										else
										{
											if(d_min < 28.1139)
												return 1;
											else
											{
												if(d_mean < 129.0795)
													return 1;
												else
													return 0;
											}
										}
									}
									else
										return 0;
								}
								else
									return 0;
							}
							else
								return 1;
						}
					}
					else
					{
						if(d_std < 108.60485)
							return 0;
						else
							return 1;
					}
				}
				else
				{
					if(d_std < 56.16045)
						return 1;
					else
					{
						if(d_max < 243.865)
							return 0;
						else
							return 1;
					}
				}
			}
			else
			{
				if(rss_std < 10.8289)
					return 2;
				else
				{
					if(d_max < 271.8445)
						return 1;
					else
						return 2;
				}
			}
		}
	}
}

int tree_23(float d_max, float d_min, float d_mean, float d_std, float rss_max, float rss_min, float rss_mean, float rss_std)
{
	if(rss_mean < -70.57365)
	{
		if(rss_max < -70.5048)
		{
			if(d_min < 88.7147)
			{
				if(rss_min < -84.2819)
				{
					if(rss_max < -71.52055)
					{
						if(d_max < 236.886)
						{
							if(d_std < 41.65815)
							{
								if(d_mean < 140.777)
									return 0;
								else
								{
									if(rss_mean < -79.07915)
									{
										if(d_min < 82.75365)
										{
											if(rss_std < 3.82324)
											{
												if(rss_mean < -79.15025)
													return 0;
												else
												{
													if(d_max < 226.4045)
														return 0;
													else
													{
														if(d_min < 73.92)
															return 0;
														else
															return 1;
													}
												}
											}
											else
											{
												if(d_max < 226.859)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(rss_max < -72.7836)
											{
												if(d_max < 214.979)
												{
													if(d_mean < 165.323)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
											else
											{
												if(d_max < 226.315)
												{
													if(rss_min < -84.60455)
														return 1;
													else
														return 0;
												}
												else
													return 0;
											}
										}
									}
									else
									{
										if(d_max < 228.1375)
										{
											if(d_max < 195.2595)
												return 1;
											else
												return 0;
										}
										else
										{
											if(d_max < 229.897)
												return 1;
											else
												return 0;
										}
									}
								}
							}
							else
								return 0;
						}
						else
						{
							if(rss_max < -73.5412)
								return 0;
							else
							{
								if(d_max < 275.221)
								{
									if(rss_min < -84.95775)
										return 1;
									else
									{
										if(d_max < 263.379)
										{
											if(d_max < 260.519)
												return 1;
											else
											{
												if(d_max < 261.9725)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(d_std < 46.2937)
												return 0;
											else
											{
												if(rss_min < -84.90655)
												{
													if(d_max < 269.656)
													{
														if(d_max < 265.2965)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
												else
												{
													if(d_max < 264.6515)
														return 0;
													else
														return 1;
												}
											}
										}
									}
								}
								else
								{
									if(rss_std < 4.20448)
										return 1;
									else
										return 0;
								}
							}
						}
					}
					else
					{
						if(d_min < 73.4697)
						{
							if(d_max < 234.923)
							{
								if(d_min < 73.3632)
									return 0;
								else
								{
									if(d_max < 231.7445)
										return 0;
									else
									{
										if(d_std < 43.0258)
											return 0;
										else
											return 1;
									}
								}
							}
							else
							{
								if(d_min < 69.4295)
								{
									if(rss_min < -84.93295)
									{
										if(rss_min < -84.9573)
											return 1;
										else
											return 0;
									}
									else
										return 1;
								}
								else
								{
									if(d_mean < 144.4955)
										return 1;
									else
									{
										if(rss_max < -71.3624)
										{
											if(d_min < 73.2198)
												return 1;
											else
												return 0;
										}
										else
										{
											if(d_min < 70.50975)
												return 0;
											else
											{
												if(d_min < 71.8098)
													return 1;
												else
													return 0;
											}
										}
									}
								}
							}
						}
						else
						{
							if(d_min < 77.4374)
							{
								if(rss_std < 4.110885)
								{
									if(d_std < 45.8212)
									{
										if(d_max < 224.9245)
											return 1;
										else
										{
											if(rss_max < -71.47385)
											{
												if(d_max < 232.2945)
													return 0;
												else
													return 1;
											}
											else
											{
												if(rss_std < 4.02945)
												{
													if(rss_std < 3.205365)
													{
														if(d_max < 225.813)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
												else
												{
													if(d_mean < 150.1085)
														return 1;
													else
														return 0;
												}
											}
										}
									}
									else
									{
										if(rss_std < 3.896105)
											return 1;
										else
										{
											if(d_max < 273.394)
												return 0;
											else
												return 1;
										}
									}
								}
								else
								{
									if(d_mean < 141.4005)
									{
										if(d_max < 235.03)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
							}
							else
							{
								if(d_min < 80.55955)
								{
									if(rss_min < -84.93775)
									{
										if(d_std < 48.03135)
										{
											if(d_mean < 146.5725)
												return 1;
											else
												return 0;
										}
										else
										{
											if(rss_mean < -79.92255)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(rss_max < -71.4505)
										{
											if(d_mean < 151.0145)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
								}
								else
								{
									if(d_max < 222.8205)
									{
										if(d_mean < 161.004)
											return 1;
										else
											return 0;
									}
									else
										return 1;
								}
							}
						}
					}
				}
				else
				{
					if(d_max < 281.7155)
					{
						if(d_max < 223.6645)
							return 0;
						else
						{
							if(rss_std < 3.353795)
								return 0;
							else
							{
								if(d_mean < 143.6215)
								{
									if(d_min < 71.8204)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
						}
					}
					else
						return 1;
				}
			}
			else
			{
				if(d_max < 237.9215)
				{
					if(rss_std < 2.54285)
					{
						if(rss_max < -75.96845)
						{
							if(d_std < 40.5634)
							{
								if(rss_std < 1.830945)
								{
									if(d_min < 102.3405)
										return 1;
									else
									{
										if(rss_max < -81.76395)
										{
											if(d_mean < 187.6865)
												return 1;
											else
												return 0;
										}
										else
											return 0;
									}
								}
								else
								{
									if(d_min < 168.82)
									{
										if(d_max < 229.4915)
											return 0;
										else
										{
											if(d_max < 229.54)
												return 1;
											else
												return 0;
										}
									}
									else
										return 1;
								}
							}
							else
								return 1;
						}
						else
						{
							if(d_min < 116.1655)
							{
								if(d_min < 113.3485)
									return 0;
								else
								{
									if(rss_mean < -79.9924)
										return 0;
									else
									{
										if(d_max < 187.1355)
											return 0;
										else
											return 1;
									}
								}
							}
							else
							{
								if(rss_mean < -82.24255)
									return 0;
								else
								{
									if(rss_max < -74.486)
									{
										if(rss_min < -84.9322)
										{
											if(d_max < 230.2525)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
									else
									{
										if(rss_std < 2.437515)
										{
											if(d_mean < 189.254)
												return 0;
											else
												return 1;
										}
										else
										{
											if(d_min < 128.921)
												return 0;
											else
												return 1;
										}
									}
								}
							}
						}
					}
					else
					{
						if(rss_max < -73.34905)
						{
							if(rss_std < 3.23131)
							{
								if(d_std < 30.93845)
								{
									if(rss_min < -84.24455)
									{
										if(rss_min < -84.89865)
										{
											if(d_mean < 158.204)
											{
												if(d_max < 208.783)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
										else
										{
											if(d_mean < 144.993)
												return 0;
											else
											{
												if(d_max < 231.249)
													return 1;
												else
													return 0;
											}
										}
									}
									else
										return 0;
								}
								else
								{
									if(d_mean < 164.2405)
									{
										if(d_max < 233.183)
										{
											if(rss_min < -84.7031)
											{
												if(rss_max < -74.75085)
													return 0;
												else
												{
													if(d_min < 105.59)
													{
														if(rss_min < -84.78765)
														{
															if(d_mean < 144.012)
															{
																if(d_max < 231.157)
																	return 0;
																else
																	return 1;
															}
															else
																return 0;
														}
														else
														{
															if(d_mean < 159.749)
																return 1;
															else
																return 0;
														}
													}
													else
														return 1;
												}
											}
											else
												return 0;
										}
										else
										{
											if(rss_max < -74.7779)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(d_max < 210.653)
										{
											if(d_min < 116.817)
												return 0;
											else
											{
												if(d_max < 202.714)
													return 0;
												else
													return 1;
											}
										}
										else
											return 0;
									}
								}
							}
							else
							{
								if(d_std < 35.02)
								{
									if(d_max < 233.2495)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
						}
						else
						{
							if(rss_std < 3.41407)
							{
								if(rss_max < -72.04515)
								{
									if(rss_min < -84.0239)
									{
										if(d_max < 225.2835)
											return 1;
										else
										{
											if(d_max < 227.6305)
												return 0;
											else
											{
												if(d_min < 96.15395)
												{
													if(d_max < 233.7935)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
										}
									}
									else
										return 0;
								}
								else
								{
									if(d_min < 95.35725)
										return 1;
									else
									{
										if(d_mean < 147.0265)
											return 1;
										else
										{
											if(d_mean < 171.354)
												return 0;
											else
												return 1;
										}
									}
								}
							}
							else
							{
								if(rss_min < -84.7618)
								{
									if(rss_max < -72.6314)
										return 0;
									else
									{
										if(d_mean < 160.254)
											return 1;
										else
										{
											if(rss_max < -71.6591)
												return 0;
											else
												return 1;
										}
									}
								}
								else
									return 0;
							}
						}
					}
				}
				else
				{
					if(rss_min < -84.46245)
					{
						if(rss_max < -73.9499)
						{
							if(rss_min < -84.9158)
							{
								if(rss_min < -84.9792)
								{
									if(rss_max < -77.26835)
									{
										if(rss_max < -77.6538)
										{
											if(d_mean < 199.289)
											{
												if(rss_max < -78.15115)
												{
													if(d_max < 307.3165)
														return 1;
													else
														return 0;
												}
												else
													return 0;
											}
											else
												return 0;
										}
										else
										{
											if(rss_std < 2.26419)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(rss_min < -84.98165)
											return 1;
										else
										{
											if(d_min < 120.4015)
												return 0;
											else
												return 1;
										}
									}
								}
								else
								{
									if(rss_mean < -81.685)
										return 0;
									else
									{
										if(rss_mean < -80.2764)
										{
											if(d_min < 115.998)
												return 0;
											else
											{
												if(rss_max < -77.03515)
													return 0;
												else
												{
													if(rss_mean < -81.6148)
													{
														if(d_max < 271.778)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
											}
										}
										else
											return 0;
									}
								}
							}
							else
							{
								if(d_max < 300.797)
								{
									if(d_std < 51.4827)
									{
										if(rss_max < -74.0941)
										{
											if(d_max < 300.4155)
											{
												if(rss_max < -76.8659)
												{
													if(rss_min < -84.66945)
													{
														if(d_max < 275.263)
														{
															if(d_min < 173.4945)
															{
																if(d_max < 246.746)
																	return 0;
																else
																{
																	if(rss_std < 2.23234)
																		return 1;
																	else
																	{
																		if(d_min < 112.4045)
																			return 1;
																		else
																			return 0;
																	}
																}
															}
															else
																return 0;
														}
														else
															return 1;
													}
													else
													{
														if(rss_std < 2.144845)
															return 0;
														else
															return 1;
													}
												}
												else
												{
													if(d_std < 35.872)
														return 1;
													else
													{
														if(d_min < 100.2385)
														{
															if(rss_max < -74.94825)
															{
																if(d_min < 96.7506)
																	return 1;
																else
																	return 0;
															}
															else
																return 0;
														}
														else
														{
															if(rss_std < 2.115505)
															{
																if(d_max < 244.028)
																	return 0;
																else
																	return 1;
															}
															else
															{
																if(rss_max < -76.1079)
																{
																	if(d_min < 122.4695)
																		return 0;
																	else
																		return 1;
																}
																else
																{
																	if(d_min < 105.6755)
																	{
																		if(rss_max < -75.0906)
																			return 0;
																		else
																			return 1;
																	}
																	else
																		return 1;
																}
															}
														}
													}
												}
											}
											else
												return 0;
										}
										else
											return 0;
									}
									else
									{
										if(d_max < 248.5055)
											return 1;
										else
											return 0;
									}
								}
								else
									return 1;
							}
						}
						else
						{
							if(rss_max < -73.69335)
							{
								if(rss_max < -73.7997)
								{
									if(d_max < 249.4595)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
							else
								return 1;
						}
					}
					else
					{
						if(d_max < 283.5345)
						{
							if(rss_max < -76.07175)
							{
								if(d_std < 42.6644)
									return 0;
								else
								{
									if(rss_min < -83.80485)
									{
										if(rss_max < -79.55705)
											return 1;
										else
											return 0;
									}
									else
										return 1;
								}
							}
							else
							{
								if(rss_min < -84.3386)
									return 0;
								else
								{
									if(d_min < 100.5839)
										return 0;
									else
									{
										if(rss_min < -82.8022)
											return 1;
										else
											return 0;
									}
								}
							}
						}
						else
						{
							if(d_max < 327.2455)
								return 1;
							else
								return 2;
						}
					}
				}
			}
		}
		else
		{
			if(rss_min < -84.4652)
			{
				if(d_max < 241.5095)
				{
					if(d_std < 49.2608)
					{
						if(d_min < 69.6034)
						{
							if(d_mean < 141.2655)
							{
								if(rss_max < -66.0369)
								{
									if(d_min < 51.2272)
									{
										if(d_mean < 127.5605)
											return 0;
										else
										{
											if(d_max < 213.126)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(rss_max < -67.77145)
										{
											if(d_min < 56.6025)
												return 0;
											else
											{
												if(rss_max < -68.733)
												{
													if(d_mean < 124.49)
														return 0;
													else
													{
														if(d_min < 62.51855)
															return 0;
														else
														{
															if(d_mean < 139.868)
																return 1;
															else
																return 0;
														}
													}
												}
												else
												{
													if(rss_std < 4.88148)
													{
														if(d_mean < 140.306)
															return 1;
														else
															return 0;
													}
													else
													{
														if(d_max < 216.64)
															return 1;
														else
															return 0;
													}
												}
											}
										}
										else
										{
											if(rss_std < 4.256545)
											{
												if(rss_std < 4.25469)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
									}
								}
								else
								{
									if(d_std < 49.05105)
										return 1;
									else
									{
										if(rss_max < -65.71405)
											return 0;
										else
											return 1;
									}
								}
							}
							else
							{
								if(rss_max < -64.39895)
								{
									if(d_max < 229.1645)
									{
										if(rss_min < -84.87265)
											return 0;
										else
										{
											if(rss_max < -68.55965)
											{
												if(d_max < 226.935)
													return 0;
												else
												{
													if(d_max < 226.998)
														return 1;
													else
														return 0;
												}
											}
											else
											{
												if(rss_mean < -78.27565)
													return 1;
												else
													return 0;
											}
										}
									}
									else
										return 0;
								}
								else
								{
									if(d_min < 39.9877)
										return 0;
									else
										return 1;
								}
							}
						}
						else
						{
							if(rss_std < 3.672435)
							{
								if(rss_min < -84.9364)
								{
									if(rss_min < -84.96055)
										return 1;
									else
										return 0;
								}
								else
								{
									if(d_mean < 171.0625)
									{
										if(rss_std < 3.58259)
										{
											if(rss_max < -67.9723)
												return 1;
											else
											{
												if(d_max < 233.233)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(d_mean < 147.1305)
												return 1;
											else
											{
												if(rss_min < -84.73875)
													return 1;
												else
												{
													if(rss_max < -69.74795)
														return 1;
													else
														return 0;
												}
											}
										}
									}
									else
									{
										if(d_std < 34.376)
											return 0;
										else
										{
											if(rss_min < -84.7703)
												return 1;
											else
												return 0;
										}
									}
								}
							}
							else
							{
								if(rss_mean < -80.80455)
									return 0;
								else
								{
									if(rss_std < 3.69838)
									{
										if(rss_std < 3.69799)
											return 1;
										else
											return 0;
									}
									else
										return 1;
								}
							}
						}
					}
					else
					{
						if(d_std < 59.78865)
						{
							if(d_min < 70.05825)
							{
								if(d_mean < 140.522)
								{
									if(rss_max < -65.5999)
									{
										if(rss_std < 4.87868)
										{
											if(rss_mean < -77.41435)
											{
												if(rss_min < -84.8897)
												{
													if(d_min < 68.40035)
														return 0;
													else
														return 1;
												}
												else
												{
													if(d_mean < 139.2765)
														return 1;
													else
													{
														if(d_std < 50.75555)
															return 0;
														else
															return 1;
													}
												}
											}
											else
											{
												if(d_max < 233.536)
												{
													if(d_mean < 123.023)
													{
														if(d_mean < 113.2465)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
												else
													return 1;
											}
										}
										else
										{
											if(d_min < 62.4877)
											{
												if(rss_std < 5.100195)
												{
													if(d_max < 229.885)
													{
														if(rss_max < -68.53715)
															return 0;
														else
														{
															if(d_std < 54.73475)
															{
																if(rss_min < -84.85755)
																{
																	if(d_max < 227.2855)
																		return 0;
																	else
																		return 1;
																}
																else
																	return 1;
															}
															else
																return 0;
														}
													}
													else
														return 0;
												}
												else
													return 0;
											}
											else
											{
												if(rss_min < -84.74485)
												{
													if(d_std < 54.7306)
													{
														if(rss_mean < -77.6228)
															return 1;
														else
														{
															if(rss_min < -84.8602)
																return 0;
															else
																return 1;
														}
													}
													else
														return 0;
												}
												else
													return 0;
											}
										}
									}
									else
									{
										if(d_min < 46.4977)
										{
											if(d_min < 37.708)
											{
												if(rss_min < -84.9744)
													return 0;
												else
												{
													if(d_max < 220.494)
														return 1;
													else
													{
														if(d_max < 220.932)
															return 0;
														else
														{
															if(rss_mean < -73.08605)
																return 1;
															else
																return 0;
														}
													}
												}
											}
											else
											{
												if(d_max < 215.9695)
													return 1;
												else
												{
													if(rss_max < -63.2398)
													{
														if(rss_std < 5.446975)
														{
															if(d_min < 44.4723)
															{
																if(d_mean < 135.648)
																	return 1;
																else
																	return 0;
															}
															else
																return 0;
														}
														else
														{
															if(d_max < 234.3905)
																return 0;
															else
																return 1;
														}
													}
													else
														return 1;
												}
											}
										}
										else
											return 1;
									}
								}
								else
								{
									if(rss_max < -67.03435)
									{
										if(rss_max < -69.42815)
											return 0;
										else
										{
											if(rss_std < 4.89201)
											{
												if(d_min < 63.639)
												{
													if(rss_mean < -78.9556)
													{
														if(d_std < 49.5172)
														{
															if(rss_max < -67.9409)
																return 0;
															else
																return 1;
														}
														else
															return 0;
													}
													else
													{
														if(rss_max < -68.4429)
														{
															if(rss_std < 4.72837)
																return 1;
															else
																return 0;
														}
														else
															return 0;
													}
												}
												else
												{
													if(d_mean < 183.3805)
														return 1;
													else
														return 0;
												}
											}
											else
											{
												if(d_min < 63.44925)
													return 0;
												else
												{
													if(d_min < 64.4398)
														return 1;
													else
														return 0;
												}
											}
										}
									}
									else
									{
										if(rss_std < 5.13254)
										{
											if(d_min < 46.75175)
											{
												if(d_max < 233.691)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
										else
										{
											if(rss_max < -62.57795)
											{
												if(d_max < 238.511)
												{
													if(d_min < 52.555)
													{
														if(d_max < 234.3605)
															return 0;
														else
														{
															if(d_min < 41.54255)
																return 0;
															else
																return 1;
														}
													}
													else
													{
														if(d_min < 52.7502)
															return 1;
														else
															return 0;
													}
												}
												else
													return 1;
											}
											else
											{
												if(d_min < 36.5693)
													return 0;
												else
													return 1;
											}
										}
									}
								}
							}
							else
							{
								if(rss_mean < -79.7486)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(d_max < 234.9485)
							{
								if(d_std < 61.6716)
								{
									if(rss_max < -62.41195)
										return 0;
									else
									{
										if(d_max < 227.2545)
											return 1;
										else
											return 0;
									}
								}
								else
									return 0;
							}
							else
							{
								if(rss_std < 6.384445)
								{
									if(d_std < 60.1055)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
						}
					}
				}
				else
				{
					if(d_std < 68.9042)
					{
						if(rss_min < -84.91355)
						{
							if(rss_min < -84.914)
							{
								if(rss_mean < -77.4805)
								{
									if(rss_max < -70.31655)
									{
										if(d_min < 67.66585)
											return 0;
										else
											return 1;
									}
									else
									{
										if(d_mean < 132.786)
										{
											if(rss_max < -69.50465)
												return 0;
											else
												return 1;
										}
										else
											return 1;
									}
								}
								else
								{
									if(d_std < 49.29955)
									{
										if(d_min < 177.8569)
											return 1;
										else
											return 2;
									}
									else
									{
										if(rss_max < -65.98025)
										{
											if(d_min < 60.78325)
												return 0;
											else
												return 1;
										}
										else
											return 1;
									}
								}
							}
							else
								return 0;
						}
						else
						{
							if(rss_min < -84.85805)
								return 1;
							else
							{
								if(rss_max < -68.8543)
								{
									if(d_min < 66.1233)
									{
										if(rss_std < 4.549155)
										{
											if(rss_min < -84.84715)
											{
												if(d_mean < 150.639)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
										else
											return 0;
									}
									else
										return 1;
								}
								else
									return 1;
							}
						}
					}
					else
					{
						if(d_min < 52.35805)
							return 1;
						else
						{
							if(d_std < 78.09425)
							{
								if(d_max < 281.0855)
									return 0;
								else
								{
									if(rss_max < -69.6261)
									{
										if(d_max < 327.916)
											return 0;
										else
											return 1;
									}
									else
										return 1;
								}
							}
							else
								return 0;
						}
					}
				}
			}
			else
			{
				if(d_mean < 141.9545)
				{
					if(d_max < 224.726)
					{
						if(rss_min < -83.6957)
						{
							if(rss_max < -62.89085)
							{
								if(rss_std < 4.359795)
								{
									if(rss_mean < -77.41345)
									{
										if(d_std < 23.5588)
											return 1;
										else
										{
											if(d_min < 70.47595)
												return 0;
											else
											{
												if(rss_min < -83.89105)
													return 1;
												else
													return 0;
											}
										}
									}
									else
									{
										if(rss_max < -66.89065)
										{
											if(d_min < 68.98705)
												return 0;
											else
												return 1;
										}
										else
										{
											if(d_max < 181.998)
												return 0;
											else
												return 1;
										}
									}
								}
								else
								{
									if(d_std < 50.0919)
									{
										if(d_std < 50.0511)
										{
											if(rss_max < -64.1257)
											{
												if(rss_min < -84.3972)
												{
													if(d_max < 210.005)
														return 1;
													else
														return 0;
												}
												else
												{
													if(rss_mean < -78.13125)
													{
														if(d_max < 216.196)
															return 0;
														else
														{
															if(d_mean < 139.636)
																return 1;
															else
																return 0;
														}
													}
													else
														return 0;
												}
											}
											else
											{
												if(d_min < 38.1024)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(d_max < 215.167)
												return 0;
											else
												return 1;
										}
									}
									else
										return 0;
								}
							}
							else
							{
								if(rss_std < 6.47513)
								{
									if(d_max < 165.9755)
										return 0;
									else
									{
										if(d_mean < 134.169)
											return 1;
										else
											return 0;
									}
								}
								else
									return 0;
							}
						}
						else
						{
							if(d_min < 71.0243)
							{
								if(d_mean < 122.63)
								{
									if(rss_min < -82.9205)
									{
										if(rss_max < -59.2558)
										{
											if(rss_std < 4.2191)
											{
												if(rss_max < -68.64045)
													return 0;
												else
													return 1;
											}
											else
											{
												if(rss_mean < -76.9399)
												{
													if(d_max < 193.37)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
										}
										else
										{
											if(d_max < 198.8155)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(d_min < 66.0743)
											return 0;
										else
										{
											if(d_min < 66.89325)
												return 1;
											else
												return 0;
										}
									}
								}
								else
								{
									if(d_std < 105.157)
									{
										if(d_max < 216.196)
											return 0;
										else
										{
											if(d_max < 219.3895)
												return 1;
											else
												return 0;
										}
									}
									else
										return 1;
								}
							}
							else
								return 1;
						}
					}
					else
					{
						if(d_max < 238.131)
						{
							if(rss_min < -84.21045)
							{
								if(d_std < 40.25085)
									return 1;
								else
									return 0;
							}
							else
							{
								if(rss_min < -83.25325)
									return 1;
								else
								{
									if(d_min < 83.28665)
										return 0;
									else
										return 1;
								}
							}
						}
						else
						{
							if(d_mean < 141.8405)
							{
								if(rss_min < -83.1941)
									return 1;
								else
								{
									if(d_min < 46.04725)
										return 1;
									else
										return 0;
								}
							}
							else
							{
								if(d_mean < 141.8975)
									return 0;
								else
									return 1;
							}
						}
					}
				}
				else
				{
					if(d_std < 87.0993)
					{
						if(rss_std < 4.55603)
						{
							if(d_min < 73.9819)
								return 0;
							else
							{
								if(rss_std < 3.612745)
								{
									if(d_min < 90.2087)
										return 0;
									else
										return 1;
								}
								else
								{
									if(d_max < 221.9515)
										return 0;
									else
										return 1;
								}
							}
						}
						else
						{
							if(rss_mean < -78.15485)
								return 0;
							else
							{
								if(d_max < 242.28)
									return 0;
								else
									return 1;
							}
						}
					}
					else
					{
						if(d_max < 347.189)
						{
							if(d_max < 236.554)
								return 0;
							else
								return 1;
						}
						else
							return 2;
					}
				}
			}
		}
	}
	else
	{
		if(rss_std < 10.49865)
			return 2;
		else
		{
			if(d_max < 271.8445)
			{
				if(d_max < 224.2105)
					return 0;
				else
					return 1;
			}
			else
				return 2;
		}
	}
}

int tree_24(float d_max, float d_min, float d_mean, float d_std, float rss_max, float rss_min, float rss_mean, float rss_std)
{
	if(rss_max < -61.50405)
	{
		if(rss_max < -70.5048)
		{
			if(d_max < 237.527)
			{
				if(rss_max < -74.6755)
				{
					if(d_max < 228.164)
					{
						if(d_min < 168.82)
						{
							if(d_std < 36.93225)
								return 0;
							else
							{
								if(d_min < 101.618)
								{
									if(rss_mean < -82.4175)
										return 1;
									else
									{
										if(d_min < 101.576)
										{
											if(rss_max < -74.74205)
												return 0;
											else
											{
												if(d_std < 38.0748)
												{
													if(rss_max < -74.7256)
														return 1;
													else
														return 0;
												}
												else
													return 0;
											}
										}
										else
											return 1;
									}
								}
								else
									return 0;
							}
						}
						else
						{
							if(rss_max < -80.82825)
							{
								if(rss_std < 1.179375)
									return 0;
								else
								{
									if(rss_mean < -83.0383)
										return 1;
									else
										return 0;
								}
							}
							else
							{
								if(rss_std < 1.504255)
									return 0;
								else
									return 1;
							}
						}
					}
					else
					{
						if(d_max < 228.1955)
							return 1;
						else
						{
							if(d_max < 229.895)
							{
								if(d_max < 229.8695)
								{
									if(d_max < 229.518)
										return 0;
									else
									{
										if(d_min < 129.001)
										{
											if(d_max < 229.54)
												return 1;
											else
												return 0;
										}
										else
										{
											if(d_max < 229.54)
												return 1;
											else
												return 0;
										}
									}
								}
								else
									return 1;
							}
							else
							{
								if(rss_min < -84.6173)
								{
									if(d_mean < 198.1245)
										return 0;
									else
									{
										if(d_mean < 198.4025)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(d_min < 152.1075)
										return 0;
									else
										return 1;
								}
							}
						}
					}
				}
				else
				{
					if(d_min < 101.9425)
					{
						if(rss_max < -71.50645)
						{
							if(rss_min < -84.70455)
							{
								if(d_std < 39.04235)
								{
									if(rss_max < -73.33985)
									{
										if(d_max < 223.0505)
										{
											if(d_min < 94.1251)
											{
												if(d_mean < 164.306)
													return 0;
												else
												{
													if(d_mean < 171.526)
														return 1;
													else
														return 0;
												}
											}
											else
											{
												if(d_min < 97.0059)
													return 1;
												else
													return 0;
											}
										}
										else
											return 0;
									}
									else
									{
										if(rss_max < -72.0535)
										{
											if(rss_min < -84.8853)
											{
												if(rss_min < -84.9796)
												{
													if(d_mean < 127.9215)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
											else
											{
												if(d_max < 218.8275)
													return 1;
												else
												{
													if(d_min < 88.89285)
													{
														if(rss_min < -84.8837)
															return 1;
														else
														{
															if(d_max < 229.4455)
															{
																if(d_mean < 165.7185)
																	return 0;
																else
																{
																	if(d_max < 225.9795)
																		return 0;
																	else
																		return 1;
																}
															}
															else
															{
																if(d_max < 231.006)
																	return 1;
																else
																	return 0;
															}
														}
													}
													else
													{
														if(rss_min < -84.86175)
															return 0;
														else
															return 1;
													}
												}
											}
										}
										else
											return 0;
									}
								}
								else
								{
									if(d_max < 223.185)
									{
										if(rss_max < -72.39075)
											return 0;
										else
										{
											if(d_std < 41.8312)
											{
												if(d_min < 79.07905)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
									}
									else
									{
										if(rss_std < 3.137535)
										{
											if(d_mean < 149.4155)
											{
												if(d_mean < 140.448)
													return 0;
												else
												{
													if(d_max < 226.73)
														return 0;
													else
														return 1;
												}
											}
											else
												return 0;
										}
										else
											return 0;
									}
								}
							}
							else
								return 0;
						}
						else
						{
							if(d_min < 74.0218)
							{
								if(d_min < 60.1316)
								{
									if(d_min < 59.1786)
										return 0;
									else
										return 1;
								}
								else
								{
									if(d_min < 73.3632)
									{
										if(d_std < 52.5874)
											return 0;
										else
										{
											if(rss_mean < -79.08615)
												return 0;
											else
											{
												if(d_max < 233.802)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(rss_std < 3.704875)
										{
											if(d_std < 44.94225)
											{
												if(rss_mean < -80.5388)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
										else
											return 0;
									}
								}
							}
							else
							{
								if(rss_std < 3.835425)
								{
									if(d_min < 80.84575)
									{
										if(rss_min < -84.2752)
										{
											if(rss_max < -70.67405)
											{
												if(d_std < 34.4443)
													return 0;
												else
												{
													if(d_mean < 174.173)
													{
														if(d_min < 76.33665)
															return 1;
														else
														{
															if(d_max < 226.078)
																return 1;
															else
															{
																if(d_std < 44.8808)
																{
																	if(d_max < 232.9595)
																		return 0;
																	else
																		return 1;
																}
																else
																	return 1;
															}
														}
													}
													else
														return 0;
												}
											}
											else
												return 0;
										}
										else
										{
											if(d_max < 220.925)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(d_min < 99.8759)
										{
											if(d_std < 20.5845)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
								}
								else
								{
									if(rss_min < -84.7758)
									{
										if(d_min < 79.04835)
										{
											if(d_std < 44.26355)
												return 1;
											else
											{
												if(d_max < 234.896)
													return 0;
												else
													return 1;
											}
										}
										else
											return 1;
									}
									else
										return 0;
								}
							}
						}
					}
					else
					{
						if(rss_max < -72.154)
						{
							if(rss_std < 2.460575)
							{
								if(d_mean < 193.1035)
								{
									if(rss_max < -74.57915)
										return 1;
									else
									{
										if(rss_std < 2.448635)
											return 0;
										else
										{
											if(d_min < 126.7)
												return 0;
											else
												return 1;
										}
									}
								}
								else
									return 1;
							}
							else
							{
								if(rss_mean < -81.8518)
									return 0;
								else
								{
									if(d_std < 40.68865)
									{
										if(rss_max < -74.5268)
										{
											if(d_mean < 175.1855)
												return 0;
											else
												return 1;
										}
										else
										{
											if(d_std < 39.8987)
											{
												if(d_mean < 164.535)
													return 1;
												else
												{
													if(d_max < 206.558)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(d_max < 232.4755)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(d_min < 110.64)
											return 0;
										else
											return 1;
									}
								}
							}
						}
						else
						{
							if(rss_min < -84.87385)
								return 1;
							else
								return 0;
						}
					}
				}
			}
			else
			{
				if(rss_std < 1.42789)
				{
					if(d_mean < 222.0465)
					{
						if(d_std < 41.93615)
							return 0;
						else
						{
							if(d_min < 91.4215)
								return 0;
							else
								return 1;
						}
					}
					else
					{
						if(d_max < 352.3025)
							return 1;
						else
							return 2;
					}
				}
				else
				{
					if(rss_min < -84.46025)
					{
						if(rss_max < -73.9499)
						{
							if(rss_std < 3.18656)
							{
								if(rss_min < -84.9162)
								{
									if(rss_min < -84.9792)
									{
										if(rss_max < -77.26835)
										{
											if(rss_min < -84.98035)
												return 0;
											else
												return 1;
										}
										else
										{
											if(d_min < 112.769)
											{
												if(rss_min < -84.98295)
													return 1;
												else
												{
													if(d_std < 43.0313)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(d_min < 116.991)
												{
													if(rss_min < -84.98165)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
										}
									}
									else
									{
										if(d_mean < 189.534)
										{
											if(rss_min < -84.9673)
												return 0;
											else
											{
												if(rss_max < -76.27285)
													return 0;
												else
												{
													if(d_std < 37.9461)
														return 0;
													else
													{
														if(rss_min < -84.9567)
															return 1;
														else
														{
															if(d_max < 302.267)
																return 0;
															else
																return 1;
														}
													}
												}
											}
										}
										else
											return 0;
									}
								}
								else
								{
									if(d_min < 131.092)
									{
										if(rss_max < -76.0857)
										{
											if(rss_min < -84.8768)
											{
												if(rss_max < -77.1944)
													return 0;
												else
												{
													if(d_std < 48.7013)
														return 1;
													else
														return 0;
												}
											}
											else
											{
												if(d_min < 125.021)
													return 0;
												else
												{
													if(rss_mean < -81.3362)
														return 1;
													else
													{
														if(rss_max < -76.91935)
															return 0;
														else
															return 1;
													}
												}
											}
										}
										else
										{
											if(d_std < 44.3115)
											{
												if(d_min < 99.18035)
												{
													if(d_mean < 156.5845)
														return 1;
													else
														return 0;
												}
												else
												{
													if(rss_mean < -81.57235)
													{
														if(d_min < 128.2445)
															return 1;
														else
														{
															if(d_min < 128.72)
																return 0;
															else
																return 1;
														}
													}
													else
													{
														if(rss_min < -84.74875)
														{
															if(rss_mean < -81.26795)
															{
																if(rss_max < -75.57655)
																	return 0;
																else
																	return 1;
															}
															else
																return 1;
														}
														else
														{
															if(rss_min < -84.71685)
																return 0;
															else
																return 1;
														}
													}
												}
											}
											else
											{
												if(rss_max < -75.84915)
												{
													if(d_max < 299.4275)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
										}
									}
									else
									{
										if(rss_max < -78.4428)
										{
											if(d_max < 267.4685)
											{
												if(d_max < 263.063)
													return 1;
												else
													return 0;
											}
											else
											{
												if(d_min < 149.249)
													return 0;
												else
													return 1;
											}
										}
										else
											return 1;
									}
								}
							}
							else
							{
								if(rss_std < 3.439295)
								{
									if(d_min < 112.224)
									{
										if(rss_std < 3.21417)
										{
											if(d_min < 100.13415)
												return 0;
											else
											{
												if(d_max < 251.228)
													return 0;
												else
												{
													if(d_max < 269.7645)
														return 1;
													else
														return 0;
												}
											}
										}
										else
											return 0;
									}
									else
										return 1;
								}
								else
									return 0;
							}
						}
						else
						{
							if(rss_min < -84.91355)
							{
								if(rss_std < 3.8321)
								{
									if(rss_min < -84.9492)
									{
										if(d_max < 247.4245)
										{
											if(d_max < 245.98)
											{
												if(rss_max < -71.21345)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
										else
											return 1;
									}
									else
									{
										if(d_min < 85.69865)
										{
											if(rss_mean < -80.2965)
											{
												if(d_max < 293.8575)
												{
													if(d_std < 52.7381)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
											else
											{
												if(d_max < 255.518)
													return 1;
												else
												{
													if(d_mean < 175.5065)
														return 0;
													else
													{
														if(d_std < 54.5717)
															return 1;
														else
															return 0;
													}
												}
											}
										}
										else
										{
											if(d_max < 273.851)
											{
												if(d_max < 271.369)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
									}
								}
								else
								{
									if(d_std < 60.6229)
									{
										if(d_std < 55.7149)
										{
											if(rss_min < -84.9567)
											{
												if(d_mean < 156.132)
													return 1;
												else
												{
													if(d_min < 95.374)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(rss_mean < -80.2222)
													return 1;
												else
												{
													if(d_min < 97.2464)
														return 0;
													else
														return 1;
												}
											}
										}
										else
											return 0;
									}
									else
										return 1;
								}
							}
							else
							{
								if(d_min < 73.99165)
								{
									if(d_max < 247.431)
									{
										if(d_min < 73.3609)
											return 1;
										else
											return 0;
									}
									else
										return 1;
								}
								else
								{
									if(d_min < 82.73485)
									{
										if(d_min < 82.6258)
											return 1;
										else
											return 0;
									}
									else
										return 1;
								}
							}
						}
					}
					else
					{
						if(d_max < 283.5345)
						{
							if(d_max < 270.2875)
							{
								if(d_mean < 143.989)
								{
									if(d_mean < 132.935)
										return 0;
									else
									{
										if(d_min < 74.0048)
											return 0;
										else
										{
											if(rss_min < -81.71625)
												return 1;
											else
												return 0;
										}
									}
								}
								else
								{
									if(d_max < 261.5645)
									{
										if(rss_min < -83.63715)
										{
											if(rss_min < -84.30275)
												return 0;
											else
											{
												if(d_max < 245.599)
													return 0;
												else
												{
													if(d_mean < 176.3065)
														return 1;
													else
														return 0;
												}
											}
										}
										else
											return 0;
									}
									else
									{
										if(rss_std < 3.346635)
										{
											if(rss_max < -76.32465)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
								}
							}
							else
								return 0;
						}
						else
						{
							if(rss_min < -81.36065)
								return 1;
							else
								return 2;
						}
					}
				}
			}
		}
		else
		{
			if(d_max < 234.982)
			{
				if(rss_min < -84.5288)
				{
					if(d_std < 49.38155)
					{
						if(d_max < 218.3705)
						{
							if(rss_min < -84.983)
							{
								if(d_max < 179.078)
									return 0;
								else
									return 1;
							}
							else
							{
								if(d_mean < 146.861)
									return 1;
								else
								{
									if(d_std < 47.6616)
									{
										if(rss_min < -84.65535)
											return 1;
										else
										{
											if(d_max < 201.4045)
												return 1;
											else
												return 0;
										}
									}
									else
										return 0;
								}
							}
						}
						else
						{
							if(rss_min < -84.92005)
							{
								if(rss_min < -84.9613)
								{
									if(d_min < 65.2307)
									{
										if(d_max < 230.365)
											return 0;
										else
										{
											if(d_mean < 138.409)
											{
												if(d_std < 48.2194)
													return 1;
												else
												{
													if(d_max < 232.915)
														return 0;
													else
														return 1;
												}
											}
											else
												return 0;
										}
									}
									else
									{
										if(d_mean < 183.1395)
											return 1;
										else
											return 0;
									}
								}
								else
									return 0;
							}
							else
							{
								if(d_min < 67.254)
								{
									if(d_mean < 140.815)
									{
										if(rss_max < -66.5752)
										{
											if(d_min < 60.7883)
											{
												if(d_max < 227.2325)
													return 0;
												else
													return 1;
											}
											else
											{
												if(rss_mean < -78.5374)
													return 0;
												else
													return 1;
											}
										}
										else
											return 1;
									}
									else
									{
										if(rss_max < -67.71855)
											return 0;
										else
										{
											if(d_std < 47.18825)
												return 0;
											else
											{
												if(d_min < 51.1663)
													return 0;
												else
													return 1;
											}
										}
									}
								}
								else
								{
									if(rss_mean < -80.5392)
									{
										if(rss_max < -67.9995)
										{
											if(rss_mean < -81.06705)
												return 0;
											else
											{
												if(rss_std < 3.932155)
													return 1;
												else
													return 0;
											}
										}
										else
											return 0;
									}
									else
									{
										if(rss_min < -84.7061)
										{
											if(d_min < 68.95505)
											{
												if(rss_max < -70.0578)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
										else
										{
											if(d_std < 38.44555)
												return 1;
											else
											{
												if(rss_min < -84.67795)
												{
													if(d_max < 226.5725)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if(rss_std < 4.56669)
						{
							if(rss_min < -84.9168)
							{
								if(rss_max < -70.04455)
									return 1;
								else
									return 0;
							}
							else
							{
								if(rss_max < -69.73435)
								{
									if(rss_std < 4.360175)
										return 1;
									else
									{
										if(d_mean < 139.928)
											return 1;
										else
											return 0;
									}
								}
								else
									return 1;
							}
						}
						else
						{
							if(d_std < 58.9311)
							{
								if(rss_mean < -79.37375)
								{
									if(rss_mean < -79.97025)
										return 0;
									else
									{
										if(d_max < 216.127)
											return 1;
										else
										{
											if(d_min < 74.6783)
												return 0;
											else
												return 1;
										}
									}
								}
								else
								{
									if(d_max < 218.1355)
									{
										if(d_min < 55.5252)
										{
											if(rss_min < -84.54415)
											{
												if(rss_min < -84.6522)
													return 1;
												else
												{
													if(rss_min < -84.61)
														return 0;
													else
														return 1;
												}
											}
											else
												return 0;
										}
										else
										{
											if(rss_min < -84.7993)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(d_min < 71.4334)
										{
											if(rss_max < -64.98575)
											{
												if(rss_min < -84.8864)
													return 0;
												else
												{
													if(d_min < 53.14205)
														return 0;
													else
													{
														if(rss_max < -67.53625)
														{
															if(d_mean < 137.4875)
															{
																if(rss_max < -69.054)
																{
																	if(d_std < 54.2032)
																		return 1;
																	else
																		return 0;
																}
																else
																{
																	if(rss_std < 5.103705)
																	{
																		if(d_max < 221.7655)
																			return 1;
																		else
																		{
																			if(rss_min < -84.77975)
																				return 0;
																			else
																				return 1;
																		}
																	}
																	else
																		return 0;
																}
															}
															else
															{
																if(rss_std < 4.67197)
																{
																	if(d_min < 65.44075)
																		return 1;
																	else
																		return 0;
																}
																else
																	return 0;
															}
														}
														else
														{
															if(d_std < 53.7574)
															{
																if(d_mean < 151.952)
																	return 1;
																else
																	return 0;
															}
															else
															{
																if(d_min < 60.34755)
																	return 0;
																else
																	return 1;
															}
														}
													}
												}
											}
											else
											{
												if(d_min < 43.2946)
												{
													if(rss_max < -63.2398)
														return 0;
													else
													{
														if(d_mean < 126.421)
														{
															if(d_max < 227.2695)
																return 0;
															else
																return 1;
														}
														else
															return 1;
													}
												}
												else
													return 1;
											}
										}
										else
											return 1;
									}
								}
							}
							else
								return 0;
						}
					}
				}
				else
				{
					if(d_min < 71.0243)
					{
						if(d_mean < 134.0475)
						{
							if(d_max < 211.157)
							{
								if(d_min < 67.4988)
								{
									if(rss_max < -62.80195)
									{
										if(d_min < 60.7047)
											return 0;
										else
										{
											if(rss_max < -67.84)
											{
												if(d_min < 60.99575)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
									}
									else
									{
										if(rss_min < -83.7928)
										{
											if(d_mean < 113.6025)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
								}
								else
								{
									if(d_min < 68.14295)
										return 1;
									else
										return 0;
								}
							}
							else
							{
								if(rss_max < -66.85325)
									return 0;
								else
								{
									if(d_mean < 119.6505)
									{
										if(rss_min < -84.1559)
											return 1;
										else
										{
											if(d_mean < 114.474)
												return 1;
											else
												return 0;
										}
									}
									else
									{
										if(d_std < 55.1966)
										{
											if(rss_max < -62.8205)
											{
												if(d_max < 221.6015)
												{
													if(d_min < 49.9775)
													{
														if(d_max < 211.5585)
															return 1;
														else
															return 0;
													}
													else
														return 1;
												}
												else
													return 1;
											}
											else
												return 1;
										}
										else
										{
											if(d_mean < 132.8905)
												return 0;
											else
											{
												if(d_min < 39.83125)
												{
													if(rss_max < -62.101)
														return 1;
													else
														return 0;
												}
												else
													return 0;
											}
										}
									}
								}
							}
						}
						else
							return 0;
					}
					else
					{
						if(rss_min < -83.37695)
						{
							if(rss_mean < -78.2146)
							{
								if(rss_max < -69.63085)
								{
									if(d_max < 222.421)
									{
										if(d_min < 96.36805)
											return 0;
										else
											return 1;
									}
									else
										return 1;
								}
								else
									return 1;
							}
							else
								return 1;
						}
						else
						{
							if(d_std < 34.23825)
								return 1;
							else
								return 0;
						}
					}
				}
			}
			else
			{
				if(d_mean < 236.852)
				{
					if(d_min < 72.8476)
					{
						if(d_mean < 154.7505)
						{
							if(rss_max < -67.11925)
							{
								if(d_min < 55.2507)
								{
									if(rss_mean < -78.17255)
										return 1;
									else
										return 0;
								}
								else
								{
									if(rss_min < -83.3961)
									{
										if(rss_max < -69.5056)
										{
											if(d_min < 67.21915)
											{
												if(rss_min < -84.96445)
													return 1;
												else
												{
													if(rss_min < -84.85305)
														return 0;
													else
													{
														if(d_max < 238.4215)
															return 0;
														else
															return 1;
													}
												}
											}
											else
											{
												if(rss_max < -70.3865)
												{
													if(d_std < 46.91975)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
										}
										else
										{
											if(d_max < 236.002)
											{
												if(d_std < 50.34265)
												{
													if(d_max < 235.502)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
											else
											{
												if(rss_max < -68.74755)
												{
													if(rss_std < 4.744915)
														return 1;
													else
													{
														if(rss_min < -84.8479)
															return 1;
														else
															return 0;
													}
												}
												else
													return 1;
											}
										}
									}
									else
										return 0;
								}
							}
							else
								return 1;
						}
						else
						{
							if(rss_max < -69.27535)
							{
								if(d_max < 328.502)
								{
									if(rss_max < -70.3616)
									{
										if(rss_std < 4.147605)
											return 1;
										else
											return 0;
									}
									else
									{
										if(rss_std < 4.052045)
										{
											if(d_max < 245.4835)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
								}
								else
									return 1;
							}
							else
							{
								if(d_max < 281.0855)
								{
									if(d_max < 278.6215)
									{
										if(d_min < 58.99315)
										{
											if(d_mean < 173.406)
											{
												if(rss_max < -67.20365)
												{
													if(rss_min < -84.9012)
														return 0;
													else
													{
														if(d_std < 62.1251)
															return 1;
														else
															return 0;
													}
												}
												else
													return 1;
											}
											else
											{
												if(rss_min < -84.1005)
													return 0;
												else
													return 1;
											}
										}
										else
										{
											if(rss_max < -67.98475)
											{
												if(d_min < 65.9411)
												{
													if(rss_std < 4.38817)
													{
														if(d_min < 65.4419)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
												else
													return 1;
											}
											else
												return 1;
										}
									}
									else
										return 0;
								}
								else
									return 1;
							}
						}
					}
					else
					{
						if(rss_min < -81.6892)
							return 1;
						else
							return 0;
					}
				}
				else
					return 2;
			}
		}
	}
	else
	{
		if(d_min < 38.9592)
		{
			if(rss_mean < -68.6395)
			{
				if(d_max < 239.683)
				{
					if(d_std < 62.4318)
					{
						if(rss_min < -83.9597)
						{
							if(rss_mean < -74.1297)
							{
								if(rss_min < -84.5671)
									return 1;
								else
								{
									if(d_max < 207.089)
									{
										if(d_std < 39.88885)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
							}
							else
							{
								if(rss_max < -56.32335)
								{
									if(d_min < 24.6949)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
						}
						else
						{
							if(rss_std < 5.634385)
							{
								if(rss_min < -82.27945)
								{
									if(d_min < 32.6214)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
							else
								return 0;
						}
					}
					else
						return 0;
				}
				else
					return 1;
			}
			else
				return 2;
		}
		else
		{
			if(rss_max < -58.95415)
			{
				if(d_min < 75.2524)
					return 1;
				else
					return 2;
			}
			else
				return 2;
		}
	}
}

int tree_25(float d_max, float d_min, float d_mean, float d_std, float rss_max, float rss_min, float rss_mean, float rss_std)
{
	if(rss_mean < -70.5615)
	{
		if(rss_min < -84.467)
		{
			if(rss_min < -84.9182)
			{
				if(d_max < 247.5625)
				{
					if(d_max < 218.081)
					{
						if(rss_std < 4.26542)
						{
							if(d_mean < 135.708)
								return 0;
							else
								return 1;
						}
						else
							return 1;
					}
					else
					{
						if(rss_max < -70.69285)
						{
							if(rss_max < -73.02145)
							{
								if(rss_max < -74.67505)
									return 0;
								else
								{
									if(d_min < 110.522)
									{
										if(d_mean < 143.2115)
										{
											if(rss_min < -84.98075)
											{
												if(d_max < 231.769)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
										else
											return 0;
									}
									else
									{
										if(rss_max < -74.48895)
											return 1;
										else
											return 0;
									}
								}
							}
							else
							{
								if(d_max < 236.9605)
								{
									if(d_std < 35.62255)
									{
										if(rss_min < -84.98355)
											return 1;
										else
											return 0;
									}
									else
									{
										if(d_min < 92.55085)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(rss_mean < -79.7137)
										return 1;
									else
									{
										if(d_mean < 147.342)
											return 1;
										else
											return 0;
									}
								}
							}
						}
						else
						{
							if(d_min < 72.43755)
							{
								if(rss_mean < -78.60285)
								{
									if(d_max < 239.7905)
										return 0;
									else
									{
										if(d_mean < 157.466)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(d_min < 57.8023)
									{
										if(rss_std < 6.225025)
										{
											if(rss_mean < -76.8495)
											{
												if(rss_max < -64.38845)
												{
													if(rss_max < -64.98185)
														return 0;
													else
													{
														if(d_max < 228.3995)
															return 1;
														else
															return 0;
													}
												}
												else
													return 1;
											}
											else
												return 0;
										}
										else
											return 0;
									}
									else
									{
										if(d_max < 230.559)
										{
											if(d_min < 68.9426)
											{
												if(rss_max < -67.80105)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
										else
										{
											if(d_min < 70.64985)
											{
												if(rss_std < 4.202005)
												{
													if(d_std < 47.16305)
														return 1;
													else
													{
														if(d_min < 68.7019)
															return 0;
														else
															return 1;
													}
												}
												else
													return 1;
											}
											else
												return 0;
										}
									}
								}
							}
							else
							{
								if(rss_min < -84.95805)
								{
									if(d_mean < 156.136)
									{
										if(rss_std < 3.68217)
										{
											if(d_max < 233.23)
												return 1;
											else
												return 0;
										}
										else
										{
											if(rss_max < -70.5612)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(d_min < 75.4203)
											return 0;
										else
											return 1;
									}
								}
								else
									return 0;
							}
						}
					}
				}
				else
				{
					if(d_mean < 202.216)
					{
						if(rss_max < -73.9829)
						{
							if(d_min < 109.2115)
							{
								if(rss_min < -84.98165)
									return 1;
								else
									return 0;
							}
							else
							{
								if(rss_max < -77.6538)
								{
									if(d_min < 162.6015)
										return 0;
									else
										return 1;
								}
								else
								{
									if(rss_mean < -79.735)
									{
										if(rss_min < -84.98165)
											return 1;
										else
										{
											if(d_min < 115.354)
												return 0;
											else
											{
												if(rss_std < 2.017065)
												{
													if(d_min < 122.5715)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
										}
									}
									else
										return 0;
								}
							}
						}
						else
						{
							if(rss_min < -84.9439)
							{
								if(d_min < 84.27435)
								{
									if(rss_max < -70.31655)
									{
										if(rss_std < 4.409025)
										{
											if(rss_min < -84.9552)
											{
												if(d_min < 77.96595)
													return 1;
												else
												{
													if(d_mean < 160.4205)
														return 1;
													else
													{
														if(d_min < 80.14325)
															return 0;
														else
															return 1;
													}
												}
											}
											else
											{
												if(rss_mean < -80.29435)
												{
													if(rss_std < 3.591955)
													{
														if(rss_max < -72.7031)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
												else
												{
													if(d_std < 45.1109)
													{
														if(d_mean < 140.8485)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
											}
										}
										else
											return 0;
									}
									else
									{
										if(rss_std < 5.32036)
										{
											if(d_mean < 132.7875)
											{
												if(rss_max < -69.50465)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
										else
										{
											if(d_max < 270.5135)
											{
												if(d_min < 50.06955)
													return 1;
												else
													return 0;
											}
											else
											{
												if(rss_max < -67.55295)
													return 0;
												else
													return 1;
											}
										}
									}
								}
								else
									return 1;
							}
							else
								return 0;
						}
					}
					else
					{
						if(d_max < 331.405)
						{
							if(rss_mean < -82.28)
								return 0;
							else
							{
								if(rss_max < -77.73525)
									return 0;
								else
									return 1;
							}
						}
						else
						{
							if(d_min < 216.7805)
								return 1;
							else
								return 2;
						}
					}
				}
			}
			else
			{
				if(d_max < 234.291)
				{
					if(d_max < 216.259)
					{
						if(rss_max < -70.51085)
						{
							if(d_min < 73.79355)
								return 0;
							else
							{
								if(rss_max < -74.80835)
								{
									if(d_mean < 183.2305)
										return 0;
									else
										return 1;
								}
								else
								{
									if(rss_std < 3.27571)
										return 1;
									else
									{
										if(rss_max < -71.73325)
										{
											if(d_std < 35.22055)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
								}
							}
						}
						else
						{
							if(rss_min < -84.7633)
							{
								if(d_std < 53.41135)
									return 1;
								else
								{
									if(rss_min < -84.7977)
										return 1;
									else
										return 0;
								}
							}
							else
							{
								if(rss_std < 4.926965)
								{
									if(d_mean < 147.577)
										return 1;
									else
									{
										if(d_max < 201.4045)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(rss_max < -66.1952)
									{
										if(d_std < 46.58685)
											return 1;
										else
											return 0;
									}
									else
									{
										if(d_mean < 144.047)
											return 1;
										else
											return 0;
									}
								}
							}
						}
					}
					else
					{
						if(d_mean < 150.5865)
						{
							if(rss_max < -71.5066)
							{
								if(d_max < 228.333)
								{
									if(rss_mean < -79.8361)
									{
										if(rss_min < -84.7562)
											return 1;
										else
											return 0;
									}
									else
										return 0;
								}
								else
								{
									if(d_max < 229.986)
									{
										if(d_mean < 127.6645)
											return 0;
										else
											return 1;
									}
									else
									{
										if(d_min < 106.9505)
											return 0;
										else
											return 1;
									}
								}
							}
							else
							{
								if(d_std < 48.98715)
								{
									if(rss_max < -70.51055)
									{
										if(rss_std < 3.668325)
										{
											if(rss_min < -84.7579)
											{
												if(rss_max < -70.7196)
												{
													if(d_min < 73.79355)
													{
														if(d_mean < 142.893)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
												else
												{
													if(d_max < 227.858)
														return 1;
													else
														return 0;
												}
											}
											else
											{
												if(d_max < 228.3795)
												{
													if(d_min < 77.816)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
										}
										else
										{
											if(d_max < 231.189)
											{
												if(d_min < 74.98915)
													return 0;
												else
												{
													if(d_max < 225.5855)
														return 1;
													else
														return 0;
												}
											}
											else
												return 1;
										}
									}
									else
									{
										if(rss_min < -84.4989)
										{
											if(d_min < 68.95505)
											{
												if(rss_max < -67.27825)
												{
													if(d_mean < 137.538)
													{
														if(d_min < 61.4398)
															return 0;
														else
														{
															if(rss_max < -68.64755)
																return 1;
															else
																return 0;
														}
													}
													else
														return 0;
												}
												else
												{
													if(d_min < 50.01515)
													{
														if(rss_mean < -76.3777)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
											}
											else
											{
												if(d_max < 224.031)
												{
													if(d_max < 223.7105)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
										}
										else
											return 0;
									}
								}
								else
								{
									if(rss_std < 4.89815)
									{
										if(rss_min < -84.81845)
										{
											if(rss_max < -69.76025)
											{
												if(rss_std < 4.544925)
													return 1;
												else
												{
													if(d_mean < 136.325)
													{
														if(d_max < 230.432)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
											}
											else
											{
												if(d_min < 56.3164)
												{
													if(d_min < 55.0539)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
										}
										else
										{
											if(d_min < 56.0252)
											{
												if(d_min < 52.16255)
													return 0;
												else
												{
													if(d_std < 53.16185)
														return 1;
													else
														return 0;
												}
											}
											else
											{
												if(d_mean < 138.715)
												{
													if(rss_mean < -78.14395)
														return 1;
													else
													{
														if(d_mean < 123.902)
															return 1;
														else
															return 0;
													}
												}
												else
												{
													if(d_min < 75.37735)
													{
														if(rss_max < -69.31805)
															return 0;
														else
														{
															if(rss_max < -68.80915)
																return 1;
															else
																return 0;
														}
													}
													else
														return 1;
												}
											}
										}
									}
									else
									{
										if(d_mean < 135.9855)
										{
											if(rss_max < -66.4553)
											{
												if(rss_max < -69.24475)
												{
													if(d_mean < 131.2305)
														return 1;
													else
														return 0;
												}
												else
												{
													if(rss_mean < -77.75775)
													{
														if(d_max < 225.1465)
															return 1;
														else
															return 0;
													}
													else
													{
														if(d_max < 227.6455)
															return 0;
														else
														{
															if(rss_min < -84.8655)
																return 0;
															else
															{
																if(d_max < 230.0785)
																	return 1;
																else
																	return 0;
															}
														}
													}
												}
											}
											else
											{
												if(rss_mean < -74.71775)
												{
													if(rss_min < -84.77855)
													{
														if(d_std < 65.15825)
															return 1;
														else
															return 0;
													}
													else
													{
														if(d_min < 46.10265)
														{
															if(d_mean < 127.3635)
															{
																if(d_max < 230.7005)
																{
																	if(rss_mean < -75.91245)
																		return 0;
																	else
																	{
																		if(d_min < 28.02935)
																			return 0;
																		else
																			return 1;
																	}
																}
																else
																	return 1;
															}
															else
															{
																if(d_std < 57.2681)
																{
																	if(rss_max < -62.9076)
																		return 0;
																	else
																		return 1;
																}
																else
																	return 0;
															}
														}
														else
															return 1;
													}
												}
												else
													return 0;
											}
										}
										else
										{
											if(d_min < 64.4988)
											{
												if(d_max < 226.2365)
												{
													if(rss_mean < -76.8467)
														return 0;
													else
													{
														if(d_max < 224.3045)
															return 0;
														else
															return 1;
													}
												}
												else
												{
													if(d_std < 59.65435)
													{
														if(rss_max < -63.3882)
														{
															if(d_std < 57.85905)
																return 0;
															else
															{
																if(rss_std < 5.79184)
																	return 1;
																else
																	return 0;
															}
														}
														else
															return 1;
													}
													else
														return 0;
												}
											}
											else
											{
												if(d_min < 66.1642)
													return 1;
												else
												{
													if(d_std < 52.2703)
														return 1;
													else
														return 0;
												}
											}
										}
									}
								}
							}
						}
						else
						{
							if(d_max < 229.8695)
							{
								if(rss_std < 2.5876)
								{
									if(d_mean < 193.6875)
										return 0;
									else
									{
										if(rss_mean < -82.37735)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(rss_max < -72.7732)
									{
										if(rss_std < 3.205235)
										{
											if(d_std < 31.30315)
											{
												if(d_min < 97.8829)
													return 0;
												else
													return 1;
											}
											else
											{
												if(rss_mean < -80.4905)
												{
													if(rss_max < -74.24605)
														return 0;
													else
													{
														if(d_min < 102.3886)
															return 0;
														else
															return 1;
													}
												}
												else
												{
													if(d_min < 95.10425)
													{
														if(d_min < 94.4964)
														{
															if(rss_std < 3.059475)
																return 0;
															else
															{
																if(d_max < 219.871)
																	return 1;
																else
																	return 0;
															}
														}
														else
															return 1;
													}
													else
														return 0;
												}
											}
										}
										else
											return 0;
									}
									else
									{
										if(d_min < 82.46495)
										{
											if(rss_std < 4.3512)
											{
												if(d_std < 45.09075)
												{
													if(rss_max < -71.1582)
														return 0;
													else
													{
														if(rss_std < 3.15881)
															return 1;
														else
														{
															if(rss_min < -84.84865)
															{
																if(rss_max < -68.65365)
																{
																	if(d_min < 69.5102)
																		return 0;
																	else
																		return 1;
																}
																else
																	return 1;
															}
															else
																return 0;
														}
													}
												}
												else
												{
													if(rss_std < 3.82867)
													{
														if(rss_max < -71.31845)
															return 0;
														else
															return 1;
													}
													else
													{
														if(rss_max < -69.54475)
														{
															if(d_std < 51.1285)
																return 0;
															else
															{
																if(rss_mean < -78.9131)
																	return 0;
																else
																	return 1;
															}
														}
														else
														{
															if(d_mean < 159.1635)
																return 1;
															else
																return 0;
														}
													}
												}
											}
											else
												return 0;
										}
										else
										{
											if(d_max < 227.5825)
											{
												if(rss_std < 3.564075)
												{
													if(d_std < 31.3388)
														return 0;
													else
														return 1;
												}
												else
												{
													if(rss_max < -70.57645)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(d_mean < 176.944)
												{
													if(rss_mean < -79.60475)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
										}
									}
								}
							}
							else
							{
								if(rss_max < -71.1966)
								{
									if(rss_min < -84.8738)
									{
										if(d_max < 229.96)
											return 1;
										else
										{
											if(rss_min < -84.87515)
											{
												if(d_mean < 164.139)
												{
													if(d_min < 113.0055)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
											else
												return 1;
										}
									}
									else
										return 0;
								}
								else
								{
									if(rss_std < 4.99092)
									{
										if(d_min < 71.49655)
										{
											if(rss_max < -69.3222)
												return 0;
											else
												return 1;
										}
										else
											return 1;
									}
									else
										return 0;
								}
							}
						}
					}
				}
				else
				{
					if(d_mean < 168.429)
					{
						if(d_std < 76.2534)
						{
							if(rss_mean < -79.3085)
							{
								if(rss_std < 4.83037)
								{
									if(rss_min < -84.91305)
									{
										if(rss_std < 3.859175)
										{
											if(rss_min < -84.9144)
												return 1;
											else
												return 0;
										}
										else
											return 0;
									}
									else
									{
										if(rss_max < -73.9193)
										{
											if(d_std < 43.1686)
											{
												if(d_min < 96.45915)
													return 0;
												else
													return 1;
											}
											else
											{
												if(d_min < 100.657)
												{
													if(d_mean < 159.816)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
										}
										else
										{
											if(d_min < 82.73485)
											{
												if(d_min < 82.6258)
												{
													if(rss_std < 4.798365)
													{
														if(rss_mean < -79.31725)
															return 1;
														else
														{
															if(rss_mean < -79.31715)
																return 0;
															else
																return 1;
														}
													}
													else
													{
														if(d_min < 64.23135)
															return 1;
														else
														{
															if(rss_std < 4.812225)
															{
																if(d_max < 247.7195)
																	return 1;
																else
																	return 0;
															}
															else
																return 1;
														}
													}
												}
												else
													return 0;
											}
											else
												return 1;
										}
									}
								}
								else
								{
									if(d_min < 54.14235)
										return 1;
									else
									{
										if(rss_max < -67.785)
											return 0;
										else
											return 1;
									}
								}
							}
							else
							{
								if(rss_max < -68.57275)
								{
									if(d_min < 73.4776)
									{
										if(d_std < 66.792)
										{
											if(rss_max < -69.5056)
											{
												if(d_min < 73.2113)
												{
													if(rss_max < -69.66895)
													{
														if(rss_std < 4.51826)
														{
															if(d_min < 63.05685)
															{
																if(d_max < 261.647)
																	return 1;
																else
																	return 0;
															}
															else
																return 1;
														}
														else
														{
															if(d_mean < 143.336)
															{
																if(d_max < 276.318)
																	return 1;
																else
																	return 0;
															}
															else
																return 0;
														}
													}
													else
														return 0;
												}
												else
													return 0;
											}
											else
											{
												if(rss_std < 4.82669)
													return 1;
												else
												{
													if(d_mean < 145.5)
														return 0;
													else
													{
														if(rss_mean < -79.1927)
														{
															if(d_min < 66.0471)
																return 0;
															else
																return 1;
														}
														else
															return 1;
													}
												}
											}
										}
										else
											return 0;
									}
									else
										return 1;
								}
								else
								{
									if(d_std < 73.537)
										return 1;
									else
									{
										if(rss_mean < -78.79085)
										{
											if(d_mean < 163.6665)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
								}
							}
						}
						else
						{
							if(d_min < 25.2566)
								return 1;
							else
							{
								if(d_max < 249.265)
									return 0;
								else
								{
									if(rss_max < -66.8052)
										return 0;
									else
										return 1;
								}
							}
						}
					}
					else
					{
						if(d_max < 238.105)
						{
							if(d_max < 234.7145)
								return 1;
							else
							{
								if(d_max < 237.173)
								{
									if(d_mean < 196.187)
										return 0;
									else
										return 1;
								}
								else
								{
									if(d_max < 237.289)
										return 1;
									else
										return 0;
								}
							}
						}
						else
						{
							if(rss_min < -84.8487)
							{
								if(rss_max < -78.90485)
								{
									if(d_max < 287.958)
										return 0;
									else
										return 1;
								}
								else
								{
									if(rss_std < 4.95574)
									{
										if(rss_min < -84.9099)
										{
											if(d_mean < 176.963)
												return 1;
											else
												return 0;
										}
										else
										{
											if(rss_mean < -80.98415)
											{
												if(rss_std < 3.866295)
												{
													if(d_min < 128.55)
													{
														if(d_max < 301.102)
														{
															if(d_mean < 172.6535)
															{
																if(rss_min < -84.87195)
																	return 1;
																else
																{
																	if(d_max < 297.1215)
																		return 1;
																	else
																		return 0;
																}
															}
															else
															{
																if(d_max < 243.914)
																{
																	if(d_max < 241.344)
																		return 1;
																	else
																		return 0;
																}
																else
																{
																	if(rss_std < 3.813015)
																		return 1;
																	else
																		return 0;
																}
															}
														}
														else
															return 1;
													}
													else
														return 1;
												}
												else
												{
													if(rss_max < -72.2504)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(rss_std < 2.20537)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(d_min < 65.7093)
											return 1;
										else
											return 0;
									}
								}
							}
							else
							{
								if(rss_max < -74.001)
								{
									if(rss_std < 2.95055)
									{
										if(rss_mean < -80.80535)
										{
											if(rss_max < -80.14905)
											{
												if(rss_std < 1.091245)
													return 0;
												else
												{
													if(d_max < 254.5155)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(d_min < 128.72)
												{
													if(d_max < 249.4785)
													{
														if(d_max < 241.3025)
															return 1;
														else
															return 0;
													}
													else
													{
														if(d_min < 106.491)
															return 0;
														else
															return 1;
													}
												}
												else
													return 1;
											}
										}
										else
										{
											if(rss_max < -76.0857)
												return 0;
											else
											{
												if(d_min < 100.15065)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(d_min < 102.9285)
											return 0;
										else
										{
											if(d_max < 300.4155)
												return 1;
											else
												return 0;
										}
									}
								}
								else
								{
									if(rss_max < -70.39955)
										return 1;
									else
									{
										if(rss_std < 4.880685)
											return 1;
										else
										{
											if(rss_max < -66.5207)
												return 0;
											else
												return 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		else
		{
			if(d_max < 224.2945)
			{
				if(rss_mean < -77.59915)
				{
					if(d_mean < 147.304)
					{
						if(rss_mean < -79.9373)
						{
							if(rss_std < 3.405955)
								return 1;
							else
								return 0;
						}
						else
						{
							if(rss_min < -83.47995)
							{
								if(d_max < 194.1035)
								{
									if(d_max < 187.2275)
									{
										if(d_std < 30.05535)
											return 0;
										else
										{
											if(d_min < 58.0841)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(d_min < 100.0868)
											return 0;
										else
											return 1;
									}
								}
								else
								{
									if(d_mean < 132.749)
									{
										if(rss_std < 4.799145)
										{
											if(d_min < 75.802)
												return 0;
											else
											{
												if(d_min < 76.2779)
													return 1;
												else
													return 0;
											}
										}
										else
											return 1;
									}
									else
									{
										if(d_min < 72.30915)
											return 0;
										else
										{
											if(rss_std < 3.69799)
											{
												if(d_min < 115.6535)
													return 0;
												else
													return 1;
											}
											else
											{
												if(rss_max < -70.6776)
													return 0;
												else
												{
													if(rss_min < -83.8956)
														return 1;
													else
														return 0;
												}
											}
										}
									}
								}
							}
							else
								return 0;
						}
					}
					else
					{
						if(rss_std < 1.25239)
						{
							if(d_min < 104.4965)
							{
								if(d_min < 71.6465)
									return 0;
								else
									return 1;
							}
							else
								return 0;
						}
						else
						{
							if(d_min < 166.3645)
							{
								if(d_mean < 148.3315)
								{
									if(rss_mean < -80.006)
										return 1;
									else
										return 0;
								}
								else
									return 0;
							}
							else
							{
								if(d_mean < 178.458)
									return 1;
								else
									return 0;
							}
						}
					}
				}
				else
				{
					if(rss_min < -83.73835)
					{
						if(d_max < 205.2385)
						{
							if(d_max < 187.468)
							{
								if(d_min < 72.399)
								{
									if(rss_max < -63.72905)
										return 0;
									else
									{
										if(rss_min < -84.1401)
											return 0;
										else
											return 1;
									}
								}
								else
									return 1;
							}
							else
							{
								if(rss_std < 6.31844)
								{
									if(rss_max < -72.2004)
										return 0;
									else
										return 1;
								}
								else
								{
									if(d_min < 35.3177)
									{
										if(d_std < 54.26265)
											return 1;
										else
											return 0;
									}
									else
										return 0;
								}
							}
						}
						else
						{
							if(rss_std < 4.042025)
							{
								if(rss_max < -69.2249)
									return 0;
								else
									return 1;
							}
							else
							{
								if(d_min < 44.13045)
								{
									if(rss_std < 6.36233)
									{
										if(d_min < 43.51555)
										{
											if(rss_max < -62.89085)
											{
												if(d_std < 41.5022)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
										else
											return 1;
									}
									else
										return 0;
								}
								else
								{
									if(rss_max < -62.8188)
									{
										if(d_std < 38.374)
											return 1;
										else
										{
											if(d_max < 207.7105)
											{
												if(d_min < 50.75275)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
									}
									else
										return 1;
								}
							}
						}
					}
					else
					{
						if(rss_min < -82.9286)
						{
							if(rss_min < -82.93165)
							{
								if(d_max < 190.2905)
								{
									if(rss_max < -67.72615)
										return 0;
									else
									{
										if(rss_min < -83.24425)
										{
											if(d_mean < 121.6325)
												return 1;
											else
												return 0;
										}
										else
											return 0;
									}
								}
								else
								{
									if(d_mean < 124.9145)
									{
										if(d_max < 213.0045)
										{
											if(d_min < 67.226)
												return 0;
											else
											{
												if(d_min < 68.1206)
													return 1;
												else
													return 0;
											}
										}
										else
											return 1;
									}
									else
										return 0;
								}
							}
							else
								return 1;
						}
						else
						{
							if(d_mean < 112.427)
							{
								if(d_mean < 112.425)
									return 0;
								else
									return 1;
							}
							else
								return 0;
						}
					}
				}
			}
			else
			{
				if(rss_max < -70.49655)
				{
					if(d_max < 283.5345)
					{
						if(d_max < 270.2875)
						{
							if(d_mean < 176.017)
							{
								if(d_max < 264.0315)
								{
									if(d_std < 43.0078)
									{
										if(rss_min < -82.39225)
										{
											if(rss_min < -84.34365)
												return 0;
											else
											{
												if(d_min < 74.0048)
													return 0;
												else
												{
													if(rss_min < -84.25415)
													{
														if(rss_std < 1.92224)
															return 0;
														else
														{
															if(d_max < 224.726)
															{
																if(d_max < 224.4435)
																	return 1;
																else
																	return 0;
															}
															else
																return 1;
														}
													}
													else
													{
														if(rss_max < -75.90695)
														{
															if(d_min < 129.078)
																return 0;
															else
																return 1;
														}
														else
														{
															if(d_std < 39.2034)
																return 1;
															else
															{
																if(d_min < 75.4601)
																	return 1;
																else
																	return 0;
															}
														}
													}
												}
											}
										}
										else
											return 0;
									}
									else
									{
										if(d_min < 110.8322)
										{
											if(rss_min < -82.5621)
											{
												if(rss_min < -83.4653)
												{
													if(d_std < 43.48395)
													{
														if(d_std < 43.37245)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
												else
													return 1;
											}
											else
												return 0;
										}
										else
											return 1;
									}
								}
								else
									return 1;
							}
							else
							{
								if(rss_min < -83.15905)
								{
									if(d_std < 55.7198)
										return 0;
									else
										return 1;
								}
								else
									return 1;
							}
						}
						else
							return 0;
					}
					else
					{
						if(rss_mean < -77.2568)
							return 1;
						else
						{
							if(d_max < 332.145)
								return 0;
							else
								return 2;
						}
					}
				}
				else
				{
					if(d_mean < 145.2765)
					{
						if(d_max < 238.131)
						{
							if(d_mean < 133.467)
							{
								if(d_max < 225.0775)
									return 0;
								else
									return 1;
							}
							else
							{
								if(d_min < 72.8734)
								{
									if(rss_mean < -77.26735)
										return 0;
									else
										return 1;
								}
								else
									return 1;
							}
						}
						else
						{
							if(rss_std < 3.365825)
								return 0;
							else
								return 1;
						}
					}
					else
					{
						if(d_max < 250.208)
							return 0;
						else
						{
							if(rss_mean < -79.25545)
							{
								if(d_max < 251.4745)
									return 1;
								else
									return 0;
							}
							else
							{
								if(d_max < 347.189)
									return 1;
								else
									return 2;
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if(d_max < 165.4655)
			return 0;
		else
		{
			if(rss_std < 10.72115)
				return 2;
			else
			{
				if(d_max < 271.8445)
					return 1;
				else
					return 2;
			}
		}
	}
}

int tree_26(float d_max, float d_min, float d_mean, float d_std, float rss_max, float rss_min, float rss_mean, float rss_std)
{
	if(rss_mean < -70.57365)
	{
		if(d_max < 237.091)
		{
			if(rss_max < -70.5105)
			{
				if(d_mean < 164.6515)
				{
					if(rss_max < -74.4968)
					{
						if(rss_mean < -81.1075)
						{
							if(d_min < 93.16305)
								return 0;
							else
								return 1;
						}
						else
						{
							if(rss_max < -74.74)
							{
								if(rss_max < -79.8991)
									return 1;
								else
									return 0;
							}
							else
							{
								if(rss_max < -74.7391)
									return 1;
								else
									return 0;
							}
						}
					}
					else
					{
						if(d_min < 99.12555)
						{
							if(rss_min < -84.2819)
							{
								if(rss_std < 3.816295)
								{
									if(d_max < 218.4815)
									{
										if(rss_max < -72.73835)
										{
											if(d_max < 218.3965)
											{
												if(rss_std < 3.57638)
													return 0;
												else
												{
													if(d_mean < 144.4105)
														return 1;
													else
														return 0;
												}
											}
											else
												return 1;
										}
										else
										{
											if(rss_min < -84.55955)
											{
												if(d_mean < 136.5765)
												{
													if(d_min < 79.6364)
														return 0;
													else
														return 1;
												}
												else
													return 1;
											}
											else
											{
												if(rss_max < -70.76855)
												{
													if(d_max < 208.796)
													{
														if(d_max < 188.2725)
															return 0;
														else
															return 1;
													}
													else
														return 0;
												}
												else
													return 1;
											}
										}
									}
									else
									{
										if(rss_max < -71.52245)
										{
											if(d_std < 41.6578)
											{
												if(rss_min < -84.8853)
													return 0;
												else
												{
													if(rss_min < -84.8837)
														return 1;
													else
													{
														if(d_min < 89.17955)
														{
															if(rss_std < 3.695015)
															{
																if(d_std < 40.7222)
																	return 0;
																else
																{
																	if(rss_max < -72.0761)
																	{
																		if(rss_std < 3.22342)
																			return 1;
																		else
																			return 0;
																	}
																	else
																	{
																		if(rss_max < -72.04365)
																			return 1;
																		else
																			return 0;
																	}
																}
															}
															else
															{
																if(d_min < 74.95105)
																	return 0;
																else
																	return 1;
															}
														}
														else
														{
															if(rss_min < -84.84335)
																return 0;
															else
															{
																if(d_std < 35.65225)
																{
																	if(rss_max < -72.85695)
																		return 0;
																	else
																		return 1;
																}
																else
																{
																	if(rss_max < -73.1527)
																	{
																		if(rss_max < -74.19065)
																		{
																			if(d_max < 222.402)
																				return 0;
																			else
																				return 1;
																		}
																		else
																			return 0;
																	}
																	else
																		return 1;
																}
															}
														}
													}
												}
											}
											else
											{
												if(d_mean < 143.0295)
												{
													if(rss_mean < -79.3895)
														return 1;
													else
														return 0;
												}
												else
													return 0;
											}
										}
										else
										{
											if(rss_min < -84.90715)
											{
												if(rss_min < -84.98095)
													return 1;
												else
													return 0;
											}
											else
											{
												if(d_max < 231.2085)
												{
													if(d_max < 226.078)
													{
														if(rss_std < 3.543345)
														{
															if(d_max < 222.269)
																return 0;
															else
															{
																if(d_min < 71.5972)
																	return 0;
																else
																	return 1;
															}
														}
														else
														{
															if(rss_min < -84.7767)
																return 1;
															else
															{
																if(rss_max < -71.30115)
																	return 1;
																else
																	return 0;
															}
														}
													}
													else
													{
														if(d_std < 45.8331)
															return 0;
														else
														{
															if(d_max < 228.692)
																return 0;
															else
																return 1;
														}
													}
												}
												else
												{
													if(rss_std < 3.11285)
														return 0;
													else
													{
														if(d_mean < 149.475)
															return 1;
														else
														{
															if(rss_max < -70.81415)
																return 1;
															else
																return 0;
														}
													}
												}
											}
										}
									}
								}
								else
								{
									if(d_min < 61.2444)
									{
										if(d_max < 229.337)
											return 0;
										else
											return 1;
									}
									else
									{
										if(d_std < 45.8318)
										{
											if(d_mean < 145.3115)
											{
												if(rss_std < 4.28276)
												{
													if(d_std < 38.1934)
													{
														if(d_min < 75.69205)
															return 0;
														else
															return 1;
													}
													else
													{
														if(d_min < 74.98915)
															return 0;
														else
														{
															if(rss_max < -71.39255)
																return 0;
															else
																return 1;
														}
													}
												}
												else
												{
													if(d_max < 231.074)
														return 0;
													else
														return 1;
												}
											}
											else
												return 0;
										}
										else
										{
											if(d_max < 235.0305)
											{
												if(d_std < 46.2092)
												{
													if(d_std < 46.20775)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
											else
											{
												if(d_std < 50.016)
													return 0;
												else
													return 1;
											}
										}
									}
								}
							}
							else
							{
								if(rss_max < -71.4947)
									return 0;
								else
								{
									if(d_max < 223.6645)
										return 0;
									else
									{
										if(rss_mean < -78.5122)
										{
											if(d_max < 224.5325)
												return 1;
											else
												return 0;
										}
										else
											return 0;
									}
								}
							}
						}
						else
						{
							if(rss_min < -84.0333)
							{
								if(d_min < 107.542)
								{
									if(d_max < 215.748)
										return 1;
									else
									{
										if(d_mean < 143.5945)
											return 1;
										else
										{
											if(rss_min < -84.7772)
											{
												if(rss_max < -71.7011)
													return 0;
												else
													return 1;
											}
											else
											{
												if(d_max < 223.377)
													return 0;
												else
													return 1;
											}
										}
									}
								}
								else
								{
									if(rss_mean < -80.5736)
									{
										if(d_min < 111.7695)
											return 0;
										else
											return 1;
									}
									else
										return 1;
								}
							}
							else
							{
								if(rss_min < -83.92335)
								{
									if(d_max < 217.8745)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
						}
					}
				}
				else
				{
					if(rss_mean < -80.9384)
					{
						if(rss_max < -75.96845)
						{
							if(d_min < 168.82)
							{
								if(d_std < 46.1156)
								{
									if(d_mean < 170.984)
									{
										if(d_max < 229.4915)
											return 0;
										else
										{
											if(rss_min < -84.4261)
												return 0;
											else
											{
												if(rss_min < -84.1102)
													return 1;
												else
													return 0;
											}
										}
									}
									else
										return 0;
								}
								else
								{
									if(d_min < 106.737)
										return 1;
									else
										return 0;
								}
							}
							else
							{
								if(rss_std < 1.45845)
									return 0;
								else
								{
									if(d_max < 231.24)
									{
										if(d_max < 213.668)
										{
											if(d_max < 196.978)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
									else
										return 0;
								}
							}
						}
						else
						{
							if(d_min < 112.727)
							{
								if(d_std < 35.3712)
								{
									if(d_min < 84.7546)
									{
										if(d_mean < 167.3775)
										{
											if(d_min < 82.1848)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
									else
									{
										if(d_mean < 164.746)
											return 1;
										else
											return 0;
									}
								}
								else
									return 0;
							}
							else
							{
								if(rss_mean < -82.24895)
									return 0;
								else
								{
									if(rss_min < -84.4896)
									{
										if(d_min < 129.344)
										{
											if(rss_min < -84.81065)
											{
												if(rss_min < -84.91415)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
										else
											return 1;
									}
									else
									{
										if(rss_max < -75.81925)
											return 1;
										else
											return 0;
									}
								}
							}
						}
					}
					else
					{
						if(d_std < 37.09695)
						{
							if(rss_max < -73.05265)
							{
								if(d_min < 119.7245)
									return 0;
								else
								{
									if(d_max < 229.239)
									{
										if(rss_max < -75.45995)
										{
											if(d_max < 187.025)
												return 1;
											else
												return 0;
										}
										else
											return 1;
									}
									else
									{
										if(d_max < 230.298)
											return 1;
										else
											return 0;
									}
								}
							}
							else
							{
								if(rss_min < -84.7387)
									return 1;
								else
									return 0;
							}
						}
						else
						{
							if(d_mean < 172.765)
							{
								if(d_max < 236.059)
								{
									if(d_std < 37.96175)
									{
										if(rss_max < -72.0844)
											return 0;
										else
											return 1;
									}
									else
										return 0;
								}
								else
								{
									if(d_max < 236.0995)
										return 1;
									else
										return 0;
								}
							}
							else
							{
								if(rss_std < 3.178945)
									return 1;
								else
									return 0;
							}
						}
					}
				}
			}
			else
			{
				if(d_std < 52.519)
				{
					if(rss_min < -84.3972)
					{
						if(d_std < 48.4724)
						{
							if(d_min < 69.6034)
							{
								if(d_mean < 141.056)
								{
									if(rss_max < -66.23395)
									{
										if(rss_min < -84.98285)
											return 0;
										else
										{
											if(d_max < 210.684)
												return 1;
											else
											{
												if(rss_std < 4.913315)
												{
													if(d_min < 54.08775)
													{
														if(rss_min < -84.859)
														{
															if(d_mean < 118.105)
																return 1;
															else
																return 0;
														}
														else
															return 0;
													}
													else
													{
														if(rss_min < -84.6339)
														{
															if(d_min < 65.85525)
															{
																if(rss_max < -69.4751)
																	return 0;
																else
																{
																	if(d_std < 40.17405)
																		return 1;
																	else
																	{
																		if(d_max < 229.4155)
																		{
																			if(d_max < 221.747)
																				return 1;
																			else
																			{
																				if(d_mean < 124.2345)
																					return 1;
																				else
																					return 0;
																			}
																		}
																		else
																		{
																			if(rss_max < -68.74535)
																				return 0;
																			else
																			{
																				if(d_mean < 140.306)
																					return 1;
																				else
																				{
																					if(d_mean < 140.5805)
																						return 0;
																					else
																						return 1;
																				}
																			}
																		}
																	}
																}
															}
															else
																return 1;
														}
														else
															return 0;
													}
												}
												else
												{
													if(rss_min < -84.87355)
														return 0;
													else
													{
														if(d_min < 54.42355)
															return 1;
														else
															return 0;
													}
												}
											}
										}
									}
									else
									{
										if(rss_mean < -77.44385)
										{
											if(d_std < 47.38675)
												return 1;
											else
											{
												if(d_min < 50.1134)
												{
													if(d_max < 209.7195)
														return 1;
													else
														return 0;
												}
												else
													return 1;
											}
										}
										else
											return 1;
									}
								}
								else
								{
									if(rss_std < 4.57574)
									{
										if(rss_max < -68.2416)
										{
											if(d_min < 68.24945)
												return 0;
											else
											{
												if(d_min < 68.2687)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(rss_mean < -81.1475)
												return 0;
											else
											{
												if(d_max < 229.216)
													return 1;
												else
													return 0;
											}
										}
									}
									else
									{
										if(d_max < 216.8755)
											return 1;
										else
											return 0;
									}
								}
							}
							else
							{
								if(rss_max < -69.72675)
									return 1;
								else
								{
									if(rss_max < -69.6341)
										return 0;
									else
									{
										if(d_mean < 170.136)
										{
											if(d_min < 70.6624)
											{
												if(d_min < 69.9783)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
										else
										{
											if(rss_min < -84.79105)
												return 1;
											else
												return 0;
										}
									}
								}
							}
						}
						else
						{
							if(rss_max < -65.6001)
							{
								if(d_min < 69.4116)
								{
									if(d_max < 227.7745)
									{
										if(d_mean < 136.6275)
										{
											if(rss_std < 4.72818)
											{
												if(d_min < 52.42165)
													return 0;
												else
													return 1;
											}
											else
											{
												if(rss_min < -84.81335)
												{
													if(d_max < 218.619)
														return 1;
													else
													{
														if(d_mean < 127.38)
														{
															if(d_min < 61.252)
																return 0;
															else
																return 1;
														}
														else
														{
															if(d_min < 56.50885)
																return 0;
															else
																return 1;
														}
													}
												}
												else
												{
													if(d_min < 54.02255)
														return 0;
													else
													{
														if(rss_max < -67.2291)
														{
															if(rss_mean < -77.59585)
															{
																if(rss_mean < -77.6162)
																	return 0;
																else
																	return 1;
															}
															else
																return 0;
														}
														else
															return 1;
													}
												}
											}
										}
										else
										{
											if(rss_std < 4.20823)
												return 1;
											else
											{
												if(d_min < 57.0458)
												{
													if(d_min < 56.50885)
													{
														if(rss_std < 4.67685)
														{
															if(d_mean < 151.733)
																return 1;
															else
																return 0;
														}
														else
															return 0;
													}
													else
														return 1;
												}
												else
													return 0;
											}
										}
									}
									else
									{
										if(rss_min < -84.8866)
										{
											if(rss_max < -66.66955)
												return 0;
											else
											{
												if(rss_max < -66.1431)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(rss_min < -84.57685)
											{
												if(d_min < 62.50135)
												{
													if(rss_min < -84.83085)
													{
														if(d_mean < 115.132)
															return 1;
														else
															return 0;
													}
													else
													{
														if(d_min < 61.0779)
															return 1;
														else
															return 0;
													}
												}
												else
												{
													if(rss_mean < -78.6658)
													{
														if(d_max < 231.9455)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
											}
											else
												return 0;
										}
									}
								}
								else
									return 1;
							}
							else
							{
								if(d_std < 51.1208)
								{
									if(d_max < 220.3615)
										return 1;
									else
									{
										if(d_min < 47.3721)
										{
											if(d_max < 232.794)
											{
												if(rss_max < -63.51485)
													return 0;
												else
													return 1;
											}
											else
											{
												if(d_mean < 164.629)
													return 1;
												else
													return 0;
											}
										}
										else
											return 1;
									}
								}
								else
								{
									if(d_max < 214.055)
									{
										if(rss_min < -84.4559)
											return 1;
										else
										{
											if(d_max < 196.0995)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(d_min < 46.5624)
										{
											if(d_mean < 126.9925)
												return 0;
											else
											{
												if(d_mean < 147.839)
												{
													if(rss_mean < -76.9898)
														return 1;
													else
													{
														if(d_mean < 130.217)
															return 1;
														else
															return 0;
													}
												}
												else
													return 0;
											}
										}
										else
											return 1;
									}
								}
							}
						}
					}
					else
					{
						if(d_min < 71.0243)
						{
							if(rss_min < -83.7326)
							{
								if(d_mean < 124.781)
								{
									if(rss_min < -84.2188)
										return 0;
									else
									{
										if(rss_min < -84.20135)
											return 1;
										else
										{
											if(d_max < 200.292)
												return 1;
											else
											{
												if(rss_max < -66.8544)
													return 0;
												else
												{
													if(d_min < 50.04065)
													{
														if(rss_max < -62.799)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
											}
										}
									}
								}
								else
								{
									if(d_mean < 134.2145)
									{
										if(rss_max < -66.8816)
											return 0;
										else
										{
											if(d_min < 43.51555)
												return 0;
											else
											{
												if(d_max < 181.998)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(rss_min < -83.82685)
											return 0;
										else
										{
											if(d_max < 224.525)
												return 0;
											else
												return 1;
										}
									}
								}
							}
							else
							{
								if(rss_min < -82.9286)
								{
									if(rss_min < -82.93025)
									{
										if(d_std < 32.8088)
										{
											if(d_mean < 115.4705)
												return 1;
											else
											{
												if(rss_min < -83.4759)
												{
													if(d_max < 176.323)
														return 1;
													else
														return 0;
												}
												else
													return 0;
											}
										}
										else
										{
											if(rss_max < -62.79845)
											{
												if(d_min < 67.4988)
													return 0;
												else
												{
													if(d_min < 67.76745)
														return 1;
													else
														return 0;
												}
											}
											else
											{
												if(rss_std < 5.56412)
												{
													if(d_min < 32.6214)
														return 0;
													else
														return 1;
												}
												else
													return 0;
											}
										}
									}
									else
										return 1;
								}
								else
									return 0;
							}
						}
						else
						{
							if(d_mean < 141.966)
							{
								if(d_min < 72.94475)
								{
									if(d_min < 72.59415)
										return 1;
									else
										return 0;
								}
								else
									return 1;
							}
							else
							{
								if(d_std < 41.1319)
									return 0;
								else
									return 1;
							}
						}
					}
				}
				else
				{
					if(d_std < 64.2383)
					{
						if(d_max < 234.982)
						{
							if(rss_max < -62.81025)
							{
								if(rss_min < -84.575)
								{
									if(d_max < 218.105)
									{
										if(d_mean < 124.398)
											return 0;
										else
										{
											if(d_max < 216.4135)
												return 1;
											else
											{
												if(d_max < 216.8665)
													return 0;
												else
													return 1;
											}
										}
									}
									else
									{
										if(d_min < 72.74445)
										{
											if(d_mean < 140.231)
											{
												if(rss_std < 5.50086)
												{
													if(rss_max < -67.0302)
													{
														if(rss_std < 4.883155)
														{
															if(rss_min < -84.8897)
																return 0;
															else
																return 1;
														}
														else
														{
															if(rss_min < -84.85805)
																return 0;
															else
															{
																if(rss_max < -68.2087)
																{
																	if(d_std < 53.1852)
																	{
																		if(d_min < 62.4877)
																			return 0;
																		else
																			return 1;
																	}
																	else
																		return 0;
																}
																else
																	return 1;
															}
														}
													}
													else
													{
														if(d_max < 230.205)
															return 1;
														else
															return 0;
													}
												}
												else
												{
													if(rss_min < -84.5802)
														return 0;
													else
														return 1;
												}
											}
											else
											{
												if(rss_std < 4.56669)
												{
													if(rss_max < -69.42815)
														return 0;
													else
													{
														if(d_mean < 169.019)
															return 1;
														else
															return 0;
													}
												}
												else
												{
													if(rss_std < 4.63183)
													{
														if(d_min < 62.88935)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
											}
										}
										else
											return 1;
									}
								}
								else
									return 0;
							}
							else
							{
								if(rss_min < -84.5673)
								{
									if(rss_max < -55.04185)
										return 1;
									else
									{
										if(rss_mean < -74.28415)
											return 1;
										else
											return 0;
									}
								}
								else
								{
									if(d_min < 36.1628)
										return 0;
									else
									{
										if(d_mean < 134.0165)
											return 1;
										else
											return 0;
									}
								}
							}
						}
						else
						{
							if(d_mean < 171.6795)
								return 1;
							else
								return 0;
						}
					}
					else
					{
						if(rss_min < -82.3873)
							return 0;
						else
							return 1;
					}
				}
			}
		}
		else
		{
			if(rss_max < -73.9499)
			{
				if(rss_max < -77.79035)
				{
					if(d_max < 291.901)
					{
						if(d_mean < 204.295)
						{
							if(d_max < 246.495)
								return 0;
							else
							{
								if(rss_std < 1.96617)
								{
									if(rss_std < 1.52025)
									{
										if(d_std < 31.56425)
											return 0;
										else
											return 1;
									}
									else
										return 1;
								}
								else
								{
									if(rss_max < -78.09565)
										return 0;
									else
										return 1;
								}
							}
						}
						else
							return 0;
					}
					else
					{
						if(d_min < 162.047)
						{
							if(d_max < 296.0705)
								return 1;
							else
							{
								if(rss_max < -78.2671)
									return 0;
								else
								{
									if(d_mean < 213.99)
										return 0;
									else
										return 1;
								}
							}
						}
						else
							return 1;
					}
				}
				else
				{
					if(d_max < 280.9165)
					{
						if(d_min < 109.2485)
						{
							if(rss_std < 3.217965)
							{
								if(d_max < 258.9575)
									return 0;
								else
								{
									if(d_mean < 148.4255)
										return 0;
									else
									{
										if(d_max < 273.797)
										{
											if(rss_max < -75.75545)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
								}
							}
							else
								return 0;
						}
						else
						{
							if(rss_mean < -80.64285)
							{
								if(d_std < 37.3528)
								{
									if(rss_max < -77.2303)
									{
										if(d_min < 129.6655)
											return 0;
										else
											return 1;
									}
									else
									{
										if(d_min < 129.8745)
										{
											if(d_min < 128.2445)
											{
												if(rss_max < -76.6445)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
										else
										{
											if(d_mean < 179.4505)
											{
												if(d_std < 23.1698)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
									}
								}
								else
								{
									if(d_max < 246.9765)
									{
										if(d_std < 45.9592)
										{
											if(rss_max < -75.35235)
												return 0;
											else
											{
												if(d_mean < 183.073)
													return 1;
												else
													return 0;
											}
										}
										else
										{
											if(rss_max < -75.9279)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(rss_min < -84.3531)
											return 1;
										else
											return 0;
									}
								}
							}
							else
							{
								if(rss_std < 2.58568)
								{
									if(d_min < 122.579)
									{
										if(rss_min < -84.65465)
										{
											if(rss_mean < -80.2368)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
									else
									{
										if(d_min < 130.5235)
										{
											if(d_std < 31.75075)
												return 0;
											else
												return 1;
										}
										else
										{
											if(d_min < 131.8575)
												return 0;
											else
												return 1;
										}
									}
								}
								else
								{
									if(d_std < 37.016)
									{
										if(rss_mean < -80.64005)
											return 0;
										else
											return 1;
									}
									else
										return 1;
								}
							}
						}
					}
					else
					{
						if(d_min < 116.991)
						{
							if(rss_min < -84.9649)
							{
								if(d_min < 109.2115)
								{
									if(d_max < 330.718)
										return 0;
									else
										return 1;
								}
								else
								{
									if(d_std < 44.78405)
									{
										if(rss_min < -84.98265)
											return 1;
										else
											return 0;
									}
									else
									{
										if(d_min < 115.4885)
											return 1;
										else
											return 0;
									}
								}
							}
							else
							{
								if(rss_min < -84.86995)
								{
									if(rss_max < -75.2194)
									{
										if(d_max < 305.6735)
											return 0;
										else
											return 1;
									}
									else
										return 1;
								}
								else
								{
									if(d_max < 305.6505)
									{
										if(rss_max < -75.20815)
										{
											if(d_mean < 191.383)
												return 0;
											else
												return 1;
										}
										else
											return 1;
									}
									else
										return 1;
								}
							}
						}
						else
						{
							if(rss_max < -74.1811)
								return 1;
							else
								return 0;
						}
					}
				}
			}
			else
			{
				if(rss_min < -84.4601)
				{
					if(d_min < 84.90925)
					{
						if(rss_min < -84.91355)
						{
							if(rss_max < -70.15245)
							{
								if(rss_std < 4.406155)
								{
									if(d_max < 274.9505)
									{
										if(rss_min < -84.9573)
										{
											if(rss_min < -84.9843)
											{
												if(rss_std < 4.1133)
												{
													if(rss_min < -84.9849)
														return 1;
													else
														return 0;
												}
												else
													return 0;
											}
											else
												return 1;
										}
										else
										{
											if(d_max < 261.327)
												return 1;
											else
											{
												if(rss_mean < -80.23515)
												{
													if(d_std < 50.48765)
														return 1;
													else
														return 0;
												}
												else
													return 0;
											}
										}
									}
									else
									{
										if(d_min < 77.73055)
											return 1;
										else
										{
											if(rss_max < -71.47385)
											{
												if(rss_min < -84.9828)
													return 0;
												else
													return 1;
											}
											else
												return 1;
										}
									}
								}
								else
									return 0;
							}
							else
							{
								if(rss_min < -84.914)
								{
									if(rss_mean < -77.64525)
									{
										if(d_min < 63.84745)
										{
											if(rss_max < -67.28095)
											{
												if(rss_mean < -79.533)
												{
													if(d_max < 247.679)
														return 0;
													else
														return 1;
												}
												else
												{
													if(d_max < 268.6405)
													{
														if(d_min < 62.5791)
															return 0;
														else
															return 1;
													}
													else
														return 1;
												}
											}
											else
												return 1;
										}
										else
											return 1;
									}
									else
									{
										if(d_mean < 123.0585)
											return 1;
										else
										{
											if(d_min < 48.642)
												return 1;
											else
											{
												if(d_min < 55.25235)
													return 0;
												else
													return 1;
											}
										}
									}
								}
								else
									return 0;
							}
						}
						else
						{
							if(d_min < 67.16195)
							{
								if(rss_max < -68.15115)
								{
									if(d_mean < 155.041)
									{
										if(d_std < 64.139)
										{
											if(rss_max < -69.46155)
											{
												if(d_min < 59.88655)
													return 1;
												else
												{
													if(d_max < 261.647)
														return 1;
													else
													{
														if(d_min < 66.1233)
															return 0;
														else
															return 1;
													}
												}
											}
											else
											{
												if(rss_std < 4.77241)
													return 1;
												else
												{
													if(rss_mean < -78.72895)
														return 0;
													else
														return 1;
												}
											}
										}
										else
											return 0;
									}
									else
									{
										if(d_max < 281.9035)
										{
											if(rss_max < -68.23485)
												return 0;
											else
												return 1;
										}
										else
										{
											if(d_std < 69.0831)
											{
												if(d_std < 64.82315)
													return 1;
												else
												{
													if(d_max < 303.178)
													{
														if(d_min < 64.0145)
															return 1;
														else
														{
															if(d_min < 65.1214)
																return 0;
															else
																return 1;
														}
													}
													else
														return 1;
												}
											}
											else
												return 0;
										}
									}
								}
								else
									return 1;
							}
							else
							{
								if(rss_std < 2.793065)
								{
									if(d_mean < 164.944)
									{
										if(d_min < 78.42915)
											return 0;
										else
											return 1;
									}
									else
										return 1;
								}
								else
								{
									if(rss_mean < -81.2533)
										return 0;
									else
									{
										if(rss_max < -71.3146)
										{
											if(rss_std < 3.79356)
												return 1;
											else
											{
												if(rss_mean < -79.98955)
												{
													if(d_min < 81.77675)
														return 1;
													else
														return 0;
												}
												else
												{
													if(rss_max < -71.34305)
														return 1;
													else
														return 0;
												}
											}
										}
										else
											return 1;
									}
								}
							}
						}
					}
					else
					{
						if(rss_max < -73.6487)
						{
							if(rss_std < 3.626135)
							{
								if(d_max < 249.4595)
									return 0;
								else
									return 1;
							}
							else
								return 0;
						}
						else
						{
							if(d_max < 388.764)
							{
								if(rss_mean < -78.76805)
									return 1;
								else
								{
									if(rss_mean < -78.7665)
										return 0;
									else
										return 1;
								}
							}
							else
								return 2;
						}
					}
				}
				else
				{
					if(rss_max < -71.21825)
					{
						if(d_mean < 147.474)
						{
							if(rss_std < 3.090775)
								return 0;
							else
							{
								if(rss_mean < -78.44585)
									return 1;
								else
									return 0;
							}
						}
						else
						{
							if(d_max < 278.2815)
							{
								if(rss_max < -73.8441)
									return 1;
								else
									return 0;
							}
							else
							{
								if(d_max < 322.6315)
									return 1;
								else
									return 2;
							}
						}
					}
					else
					{
						if(rss_max < -68.89265)
						{
							if(d_min < 73.5335)
							{
								if(rss_min < -84.3969)
								{
									if(d_std < 58.5027)
										return 1;
									else
										return 0;
								}
								else
								{
									if(d_std < 39.8787)
										return 1;
									else
										return 0;
								}
							}
							else
							{
								if(d_max < 373.838)
									return 1;
								else
									return 2;
							}
						}
						else
						{
							if(d_max < 347.189)
								return 1;
							else
								return 2;
						}
					}
				}
			}
		}
	}
	else
	{
		if(rss_std < 10.49865)
			return 2;
		else
		{
			if(rss_max < -47.55295)
			{
				if(d_std < 114.251)
					return 0;
				else
					return 1;
			}
			else
				return 2;
		}
	}
}

int tree_27(float d_max, float d_min, float d_mean, float d_std, float rss_max, float rss_min, float rss_mean, float rss_std)
{
	if(rss_max < -61.50405)
	{
		if(rss_max < -70.5048)
		{
			if(d_max < 237.527)
			{
				if(rss_std < 2.500145)
				{
					if(d_mean < 195.117)
					{
						if(d_max < 229.4915)
						{
							if(rss_std < 1.312555)
							{
								if(d_min < 102.0465)
								{
									if(d_min < 101.0005)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
							else
							{
								if(d_std < 16.1898)
								{
									if(d_max < 174.733)
										return 0;
									else
										return 1;
								}
								else
								{
									if(rss_max < -74.49675)
										return 0;
									else
									{
										if(rss_max < -74.4831)
											return 1;
										else
										{
											if(d_mean < 192.9755)
												return 0;
											else
												return 1;
										}
									}
								}
							}
						}
						else
						{
							if(d_max < 229.54)
								return 1;
							else
							{
								if(rss_max < -74.71645)
									return 0;
								else
								{
									if(d_mean < 182.987)
										return 0;
									else
									{
										if(d_max < 232.0855)
											return 1;
										else
											return 0;
									}
								}
							}
						}
					}
					else
					{
						if(rss_min < -84.8874)
							return 0;
						else
						{
							if(rss_std < 1.6234)
								return 0;
							else
							{
								if(rss_mean < -82.47095)
								{
									if(d_max < 216.7735)
										return 1;
									else
										return 0;
								}
								else
									return 1;
							}
						}
					}
				}
				else
				{
					if(rss_min < -84.28005)
					{
						if(rss_min < -84.9)
						{
							if(d_max < 219.268)
							{
								if(d_min < 78.42095)
									return 0;
								else
									return 1;
							}
							else
							{
								if(d_std < 34.87455)
								{
									if(rss_min < -84.9193)
									{
										if(rss_min < -84.98255)
										{
											if(d_mean < 176.9975)
											{
												if(d_std < 34.54845)
													return 0;
												else
												{
													if(d_max < 230.302)
														return 1;
													else
														return 0;
												}
											}
											else
												return 1;
										}
										else
											return 0;
									}
									else
									{
										if(rss_min < -84.90835)
										{
											if(d_max < 228.2425)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
								}
								else
								{
									if(d_mean < 144.8305)
									{
										if(rss_mean < -79.2693)
											return 1;
										else
										{
											if(d_min < 61.40435)
											{
												if(d_min < 50.09565)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
									}
									else
									{
										if(rss_mean < -79.32775)
											return 0;
										else
										{
											if(rss_min < -84.98405)
												return 1;
											else
												return 0;
										}
									}
								}
							}
						}
						else
						{
							if(d_std < 31.18125)
							{
								if(d_min < 83.8775)
									return 0;
								else
								{
									if(d_std < 27.7156)
										return 1;
									else
									{
										if(d_min < 108.036)
										{
											if(rss_std < 2.910275)
											{
												if(d_min < 86.0552)
													return 1;
												else
													return 0;
											}
											else
											{
												if(d_max < 220.1485)
													return 1;
												else
												{
													if(d_min < 106.877)
														return 0;
													else
														return 1;
												}
											}
										}
										else
										{
											if(rss_max < -75.51985)
												return 0;
											else
												return 1;
										}
									}
								}
							}
							else
							{
								if(rss_max < -71.5066)
								{
									if(d_std < 41.565)
									{
										if(rss_mean < -81.2625)
											return 0;
										else
										{
											if(rss_max < -74.74205)
												return 0;
											else
											{
												if(d_max < 234.1725)
												{
													if(d_min < 105.306)
													{
														if(d_min < 77.3869)
															return 0;
														else
														{
															if(rss_max < -73.34335)
															{
																if(d_min < 94.78375)
																{
																	if(rss_mean < -81.1143)
																	{
																		if(d_min < 85.65155)
																			return 1;
																		else
																			return 0;
																	}
																	else
																		return 0;
																}
																else
																{
																	if(rss_mean < -80.47535)
																		return 0;
																	else
																	{
																		if(d_min < 95.6563)
																			return 1;
																		else
																			return 0;
																	}
																}
															}
															else
															{
																if(rss_min < -84.6658)
																{
																	if(d_mean < 141.12)
																		return 0;
																	else
																	{
																		if(d_min < 77.4468)
																			return 1;
																		else
																		{
																			if(rss_max < -72.11805)
																			{
																				if(d_std < 38.18645)
																				{
																					if(rss_max < -72.19045)
																					{
																						if(d_max < 228.8645)
																						{
																							if(rss_std < 2.769305)
																								return 0;
																							else
																							{
																								if(d_min < 81.9725)
																								{
																									if(d_mean < 149.6035)
																										return 1;
																									else
																										return 0;
																								}
																								else
																									return 1;
																							}
																						}
																						else
																						{
																							if(d_min < 78.69715)
																								return 1;
																							else
																								return 0;
																						}
																					}
																					else
																						return 0;
																				}
																				else
																				{
																					if(rss_std < 3.204045)
																					{
																						if(d_max < 224.7865)
																							return 1;
																						else
																							return 0;
																					}
																					else
																						return 0;
																				}
																			}
																			else
																			{
																				if(rss_max < -71.98575)
																					return 1;
																				else
																					return 0;
																			}
																		}
																	}
																}
																else
																{
																	if(d_max < 194.9175)
																		return 1;
																	else
																		return 0;
																}
															}
														}
													}
													else
														return 1;
												}
												else
													return 1;
											}
										}
									}
									else
									{
										if(rss_min < -84.8298)
										{
											if(d_std < 41.65795)
											{
												if(d_max < 223.787)
													return 1;
												else
													return 0;
											}
											else
												return 0;
										}
										else
											return 0;
									}
								}
								else
								{
									if(d_max < 231.5835)
									{
										if(d_min < 74.0218)
											return 0;
										else
										{
											if(rss_std < 4.042345)
											{
												if(d_max < 225.8645)
												{
													if(d_mean < 159.43)
														return 1;
													else
													{
														if(d_max < 220.499)
															return 1;
														else
															return 0;
													}
												}
												else
												{
													if(rss_std < 3.441355)
													{
														if(d_max < 229.2235)
															return 1;
														else
															return 0;
													}
													else
														return 0;
												}
											}
											else
												return 0;
										}
									}
									else
									{
										if(rss_mean < -79.8201)
										{
											if(d_min < 73.1468)
												return 0;
											else
												return 1;
										}
										else
										{
											if(rss_max < -70.72095)
											{
												if(rss_max < -71.2798)
												{
													if(d_mean < 148.969)
														return 1;
													else
														return 0;
												}
												else
												{
													if(d_std < 46.7038)
													{
														if(d_max < 234.1615)
															return 1;
														else
															return 0;
													}
													else
														return 1;
												}
											}
											else
												return 0;
										}
									}
								}
							}
						}
					}
					else
					{
						if(d_min < 122.5595)
						{
							if(d_max < 223.6645)
								return 0;
							else
							{
								if(d_min < 74.0048)
									return 0;
								else
								{
									if(rss_max < -71.6768)
									{
										if(d_std < 31.60325)
										{
											if(d_mean < 130.406)
												return 0;
											else
												return 1;
										}
										else
											return 0;
									}
									else
										return 1;
								}
							}
						}
						else
						{
							if(d_min < 137.09)
								return 1;
							else
								return 0;
						}
					}
				}
			}
			else
			{
				if(rss_max < -76.0856)
				{
					if(d_max < 300.797)
					{
						if(d_min < 131.774)
						{
							if(d_min < 103.544)
								return 1;
							else
							{
								if(d_mean < 180.243)
								{
									if(rss_min < -84.65815)
									{
										if(d_min < 126.6855)
										{
											if(rss_std < 2.75674)
											{
												if(d_std < 38.97045)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
										else
										{
											if(d_max < 243.6525)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(d_std < 42.7645)
											return 0;
										else
										{
											if(rss_min < -83.80485)
												return 0;
											else
												return 1;
										}
									}
								}
								else
								{
									if(rss_std < 1.996845)
									{
										if(rss_min < -84.7445)
											return 1;
										else
											return 0;
									}
									else
										return 0;
								}
							}
						}
						else
						{
							if(rss_max < -77.84525)
							{
								if(rss_std < 1.38314)
								{
									if(d_std < 31.56425)
										return 0;
									else
										return 1;
								}
								else
								{
									if(d_max < 269.564)
									{
										if(rss_mean < -82.06655)
											return 0;
										else
											return 1;
									}
									else
									{
										if(d_min < 161.826)
											return 0;
										else
											return 1;
									}
								}
							}
							else
								return 1;
						}
					}
					else
					{
						if(rss_min < -84.9291)
						{
							if(rss_max < -77.47095)
							{
								if(rss_std < 1.65403)
								{
									if(d_min < 162.6015)
										return 0;
									else
										return 1;
								}
								else
									return 0;
							}
							else
							{
								if(d_min < 109.2115)
									return 0;
								else
								{
									if(d_mean < 185.4585)
									{
										if(d_mean < 177.701)
											return 1;
										else
											return 0;
									}
									else
										return 1;
								}
							}
						}
						else
						{
							if(d_std < 51.51825)
								return 1;
							else
								return 0;
						}
					}
				}
				else
				{
					if(d_max < 279.129)
					{
						if(rss_max < -73.6454)
						{
							if(d_min < 107.0945)
							{
								if(rss_std < 3.21417)
								{
									if(d_std < 41.45025)
									{
										if(d_max < 251.5695)
											return 0;
										else
										{
											if(d_min < 99.9698)
												return 0;
											else
												return 1;
										}
									}
									else
									{
										if(d_max < 252.9155)
											return 0;
										else
										{
											if(d_max < 274.2875)
												return 1;
											else
												return 0;
										}
									}
								}
								else
									return 0;
							}
							else
							{
								if(rss_max < -73.8077)
								{
									if(rss_std < 2.198395)
									{
										if(d_min < 129.1985)
										{
											if(d_min < 128.2445)
											{
												if(d_min < 110.9715)
													return 0;
												else
													return 1;
											}
											else
												return 0;
										}
										else
										{
											if(rss_max < -74.61375)
												return 1;
											else
											{
												if(d_min < 136.731)
													return 1;
												else
													return 0;
											}
										}
									}
									else
									{
										if(d_min < 108.8375)
										{
											if(rss_max < -75.0114)
												return 0;
											else
												return 1;
										}
										else
										{
											if(rss_max < -76.0302)
											{
												if(rss_max < -76.0397)
													return 1;
												else
													return 0;
											}
											else
												return 1;
										}
									}
								}
								else
									return 0;
							}
						}
						else
						{
							if(d_min < 85.93825)
							{
								if(d_mean < 161.457)
								{
									if(rss_std < 3.034235)
									{
										if(rss_mean < -79.20715)
											return 1;
										else
											return 0;
									}
									else
									{
										if(rss_min < -84.91035)
										{
											if(rss_min < -84.9438)
											{
												if(rss_max < -71.1112)
												{
													if(rss_min < -84.95775)
														return 1;
													else
													{
														if(d_max < 267.6585)
															return 1;
														else
															return 0;
													}
												}
												else
												{
													if(rss_max < -70.66945)
													{
														if(rss_mean < -79.91815)
															return 1;
														else
														{
															if(d_std < 52.63255)
																return 0;
															else
																return 1;
														}
													}
													else
														return 1;
												}
											}
											else
												return 0;
										}
										else
										{
											if(rss_min < -84.41165)
											{
												if(rss_std < 3.793705)
													return 1;
												else
												{
													if(d_mean < 151.214)
														return 1;
													else
													{
														if(d_mean < 152.0525)
															return 0;
														else
														{
															if(d_mean < 159.4615)
																return 1;
															else
																return 0;
														}
					}