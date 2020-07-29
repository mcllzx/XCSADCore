//
//  XCSAdSDK.h
//  ADSuyiSDKDemo-iOS
//
//  Created by kaifa on 2020/7/27.
//  Copyright © 2020 陈坤. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XCSAdBannerProtocol.h"
#import "XCSAdTemplateNativeProtocol.h"

NS_ASSUME_NONNULL_BEGIN


/// 广告 SDK 注册中心
@interface XCSAdSDK : NSObject

@property (class, readonly) Class<XCSADBannerLoaderProtocol> bannerLoaderClazz;
@property (class, readonly) Class<XCSAdTemplateNativeProtocol> templateNativeLoaderClazz;

+ (void)registerBannerLoaderClass:(Class <XCSADBannerLoaderProtocol>) clazz;
+ (void)registerTemplateNativeLoaderClass:(Class <XCSAdTemplateNativeProtocol>) clazz;

@end

NS_ASSUME_NONNULL_END
