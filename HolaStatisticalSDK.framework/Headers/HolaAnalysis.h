//
//  HolaAnalysis.h
//  HolaStatistical
//
//  Created by steve on 16/4/28.
//  Copyright © 2016年 steve. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HolaAnalysis : NSObject
/**
 *  SDK初始化
 *
 *  @param productId 分配的产品编号
 *  @param channelId 渠道编号
 *  @param appId     "id" + Apple ID
 */
+ (void)initWithProductId:(NSString *)productId ChannelId:(NSString *)channelId AppID:(NSString *)appId;


/**
 获取SDK版本

 @return 版本号
 */
+ (NSString *)SDKVersion;

/**
 *  设置扩展参数
 *
 *  @param ext 扩展参数
 */
+ (void)setExt:(NSDictionary *)ext;


/**
 追加扩展参数

 @param addExt 需要追加的扩展参数，如与已有的扩展参数冲突，则覆盖冲突部分
 */
+ (void)addExt:(NSDictionary *)addExt;

/**
 *  keyValue 打点
 *
 *  @param key   键
 *  @param value 值，可以是string，array，dictionary
 */
+ (void)logWithKey:(NSString *)key value:(id)value;

/**
 *  计数打点
 *
 *  @param key key
 */
+ (void)countWithKey:(NSString *)key;

/**
 *  自定义keyValue 打点
 *
 *  @param key   键
 *  @param value 值
 */
+ (void)customLogWithKey:(NSString *)key value:(NSString *)value;

/**
 *  GAP 打点
 */
+ (void)GAPLog;

/**
 *  游客登录 打点
 *
 *  @param gameId 分配的游戏编号
 */
+ (void)guestLoginWithGameId:(NSString *)gameId;

/**
 *  Facebook登录 打点
 *
 *  @param gameId    分配的游戏编号
 *  @param openId    openId
 *  @param openToken openToken
 */
+ (void)facebookLoginWithGameId:(NSString *)gameId OpenId:(NSString *)openId OpenToken:(NSString *)openToken;

/**
 IAP支付 打点（已废弃，请使用 LogPaymentWithPlayerId:receiptDataString: ）

 @param playerId 分配的player编号
 @param gameId 分配的游戏编号
 @param receiptDataString IAP收据，将获取到的NSData收据转化为base64字符串
 */
+ (void)LogPaymentWithPlayerId:(NSString *)playerId gameId:(NSString *)gameId receiptDataString:(NSString *)receiptDataString __deprecated_msg("Method deprecated. Use `LogPaymentWithPlayerId:receiptDataString:`");

/**
 *  IAP支付 打点
 *
 *  @param playerId          分配的player编号
 *  @param receiptDataString IAP收据，将获取到的NSData收据转化为base64字符串
 */
+ (void)LogPaymentWithPlayerId:(NSString *)playerId receiptDataString:(NSString *)receiptDataString;


@end
