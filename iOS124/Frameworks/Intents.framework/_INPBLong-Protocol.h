//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBLongValue;

@protocol _INPBLong <NSObject>
+ (Class)valueType;
@property(readonly, nonatomic) unsigned long long valuesCount;
@property(copy, nonatomic) NSArray *values;
- (_INPBLongValue *)valueAtIndex:(unsigned long long)arg1;
- (void)addValue:(_INPBLongValue *)arg1;
- (void)clearValues;
@end

