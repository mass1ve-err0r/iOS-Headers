//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class NSDate;

@protocol NTKTimeView <NSObject>
@property(nonatomic, getter=isFrozen) _Bool frozen;
- (void)setTimeOffset:(double)arg1;
- (void)setOverrideDate:(NSDate *)arg1 duration:(double)arg2;
@end

