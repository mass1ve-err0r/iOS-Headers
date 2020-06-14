//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ATXTypes : NSObject
{
}

+ (void)iterConsumerSubTypesWithBlock:(CDUnknownBlockType)arg1;
+ (void)iterConsumerTypesWithBlock:(CDUnknownBlockType)arg1;
+ (_Bool)isActionSpotlightConsumerSubType:(unsigned char)arg1;
+ (unsigned long long)consumerTypeForSubType:(unsigned char)arg1;
+ (unsigned char)consumerSubtypeForString:(id)arg1 found:(_Bool *)arg2;
+ (unsigned long long)consumerTypeForString:(id)arg1 found:(_Bool *)arg2;
+ (unsigned long long)engagementTypeForString:(id)arg1 found:(_Bool *)arg2;
+ (id)validConsumerSubTypeList;
+ (id)validConsumerSubTypes;
+ (id)validConsumerTypeList;
+ (id)validConsumerTypes;
+ (id)inverseConsumerSubtypeMapping;
+ (id)consumerSubtypeMapping;
+ (id)consumerMapping;
+ (id)stringForConsumerSubtype:(unsigned char)arg1;
+ (id)stringForConsumerType:(unsigned long long)arg1;
+ (id)stringForEngagementType:(unsigned long long)arg1;

@end

