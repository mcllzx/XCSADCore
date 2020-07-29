//
//  XCSAdTemplateNativeProtocol.h
//  ADSuyiSDKDemo-iOS
//
//  Created by kaifa on 2020/7/28.
//  Copyright © 2020 陈坤. All rights reserved.
//

#ifndef XCSAdTemplateNativeProtocol_h
#define XCSAdTemplateNativeProtocol_h
#import <UIKit/UIKit.h>

@protocol XCSAdTemplateNativeProtocol <NSObject>

- (void)XCSAdTemplateNativeLoadSuccess:(UIView *)adView;
- (void)XCSAdTemplateNativeLoadFail:(UIView *)adView error:(NSError *)error;
- (void)XCSAdTemplateNativeDidExposed:(UIView *)adView;
- (void)XCSAdTemplateNativeDidClickedAdView:(UIView *)adView;
- (void)XCSAdTemplateNativeDidClickedCloseBtn:(UIView *)adView;

@end

@protocol XCSAdTemplateNativeLoaderProtocol <NSObject>

@required
@property (nonatomic, weak) id<XCSAdTemplateNativeProtocol> xcs_loadDelegate;

/// 通过参数实现加载过关
/// @param paramDict 包含广告加载的一些信息，比如
/// @param error 加载错误通过这个返回
- (void)loadAdWithParams:(NSDictionary *)paramDict error:(NSError **)error;

@end

#endif /* XCSAdTemplateNativeProtocol_h */
