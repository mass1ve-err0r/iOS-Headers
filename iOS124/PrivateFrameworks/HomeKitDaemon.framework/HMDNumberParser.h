//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVDescription.h>

@interface HMDNumberParser : HMDTLVDescription
{
    unsigned long long _decodedNumber;
}

@property(readonly, nonatomic) unsigned long long decodedNumber; // @synthesize decodedNumber=_decodedNumber;
- (id)initWithTLVData:(id)arg1;

@end

