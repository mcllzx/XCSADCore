//
//  XCSAdTemplateInfoView.h
//  ADSuyiSDKDemo-iOS
//
//  Created by kaifa on 2020/7/28.
//  Copyright © 2020 陈坤. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XCSAdTemplateNativeProtocol.h"

NS_ASSUME_NONNULL_BEGIN


@class XCSAdTemplateNativeView;

@protocol XCSAdTemplateNativeViewDelegate <NSObject>

- (void)XCSAdTemplateNativeViewLoadSuccess:(XCSAdTemplateNativeView *)adView;
- (void)XCSAdTemplateNativeViewLoadFail:(XCSAdTemplateNativeView *)adView error:(NSError *)error;
- (void)XCSAdTemplateNativeViewDidExposed:(XCSAdTemplateNativeView *)adView;
- (void)XCSAdTemplateNativeViewDidClickedAdView:(XCSAdTemplateNativeView *)adView;
- (void)XCSAdTemplateNativeViewDidClickedCloseBtn:(XCSAdTemplateNativeView *)adView;

@end

/// 普通模版信息流广告 view，初始化时需设置广告的 frame。但实际的 frame 会再广告加载成功后
/// 会刷新成广告的高
@interface XCSAdTemplateNativeView : UIView<XCSAdTemplateNativeProtocol>

@property (nonatomic, weak) id<XCSAdTemplateNativeViewDelegate> delegate;

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
