//
//  XCSAdBannerProtocol.h
//  ADSuyiSDKDemo-iOS
//
//  Created by kaifa on 2020/7/27.
//  Copyright © 2020 陈坤. All rights reserved.
//

#ifndef XCSAdBannerProtocol_h
#define XCSAdBannerProtocol_h
#import <UIKit/UIKit.h>

@protocol XCSAdBannerProtocol <NSObject>

- (void)XCSAdBannerLoadSuccess:(UIView *)adView;
- (void)XCSAdBannerLoadFail:(UIView *)adView error:(NSError *)error;
- (void)XCSAdBannerDidExposed:(UIView *)adView;
- (void)XCSAdBannerDidClickedAdView:(UIView *)adView;
- (void)XCSAdBannerDidClickedCloseBtn:(UIView *)adView;

@end

@protocol XCSADBannerLoaderProtocol <NSObject>

@required
@property (nonatomic, weak) id<XCSAdBannerProtocol> xcs_loadDelegate;

/// 通过参数实现加载过关
/// @param paramDict 包含广告加载的一些信息，比如
/// @param error 加载错误通过这个返回
- (void)loadAdWithParams:(NSDictionary *)paramDict error:(NSError **)error;

@end

#endif /* XCSAdBannerProtocol_h */
