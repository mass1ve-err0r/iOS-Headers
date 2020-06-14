//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBCondition, _INPBPaymentMethod;

@protocol _INPBPaymentMethodList <NSObject>
+ (Class)paymentMethodsType;
@property(readonly, nonatomic) unsigned long long paymentMethodsCount;
@property(copy, nonatomic) NSArray *paymentMethods;
@property(readonly, nonatomic) _Bool hasCondition;
@property(retain, nonatomic) _INPBCondition *condition;
- (_INPBPaymentMethod *)paymentMethodsAtIndex:(unsigned long long)arg1;
- (void)addPaymentMethods:(_INPBPaymentMethod *)arg1;
- (void)clearPaymentMethods;
@end

