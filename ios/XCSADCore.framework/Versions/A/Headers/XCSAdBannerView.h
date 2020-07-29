//
//  XCSAdBannerView.h
//  ADSuyiSDKDemo-iOS
//
//  Created by kaifa on 2020/7/27.
//  Copyright © 2020 陈坤. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XCSAdBannerProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@class XCSAdBannerView;

@protocol XCSAdBannerViewDelegate <NSObject>

- (void)XCSAdBannerViewLoadSuccess:(XCSAdBannerView *)adView;
- (void)XCSAdBannerViewLoadFail:(XCSAdBannerView *)adView error:(NSError *)error;
- (void)XCSAdBannerViewDidExposed:(XCSAdBannerView *)adView;
- (void)XCSAdBannerViewDidClickedAdView:(XCSAdBannerView *)adView;
- (void)XCSAdBannerViewDidClickedCloseBtn:(XCSAdBannerView *)adView;

@end

/// banner 广告，初始化时需设置广告的 frame
@interface XCSAdBannerView : UIView<XCSAdBannerProtocol>

@property (nonatomic, weak) id<XCSAdBannerViewDelegate> delegate;

/// 广告位置 id，必传
@property (nonatomic, copy) NSString *positionId;

/// 广告显示对应的 controller，必传
@property (nonatomic, weak) UIViewController *hostVc;

/**
 拉取并展示广告
*/
- (void)loadAd:(NSError *__autoreleasing  _Nullable *)error;

@end

NS_ASSUME_NONNULL_END
