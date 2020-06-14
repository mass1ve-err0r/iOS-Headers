//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TimeSync/TSKernelClock.h>

@interface TSUserFilteredClock : TSKernelClock
{
}

+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=isAdaptive) _Bool adaptive; // @dynamic adaptive;
@property(readonly, nonatomic) unsigned char filterShift; // @dynamic filterShift;
@property(readonly, nonatomic) unsigned long long nominalDomainInterval; // @dynamic nominalDomainInterval;
@property(readonly, nonatomic) unsigned long long nominalMachInterval; // @dynamic nominalMachInterval;
- (_Bool)resetFilterToNominal:(_Bool)arg1 error:(id *)arg2;
- (_Bool)resetSyncServiceWithError:(id *)arg1;
- (_Bool)addTimestampWithMachAbsolute:(unsigned long long)arg1 andDomainTime:(unsigned long long)arg2 error:(id *)arg3;

@end

