//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDPDataHarvester-Protocol.h>

@class NSString, NSURL;

@interface _CDPSerializedDataHarvester : NSObject <_CDPDataHarvester>
{
    NSURL *_url;
}

@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)loadWithLimit:(unsigned long long)arg1 dataPointReader:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

