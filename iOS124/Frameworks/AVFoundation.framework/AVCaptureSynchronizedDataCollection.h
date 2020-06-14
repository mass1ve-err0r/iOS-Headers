//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/NSFastEnumeration-Protocol.h>

@class AVCaptureSynchronizedDataCollectionInternal;

@interface AVCaptureSynchronizedDataCollection : NSObject <NSFastEnumeration>
{
    AVCaptureSynchronizedDataCollectionInternal *_internal;
}

- (id)_shortStringForDataDroppedReason:(long long)arg1;
- (id)_shortStringForDataOutput:(id)arg1 syncedData:(id)arg2;
- (void)_setSynchronizedData:(id)arg1 forCaptureOutput:(id)arg2;
- (id)_initWithPossibleDataOutputs:(id)arg1;
- (id)description;
- (id)debugDescription;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@property(readonly) unsigned long long count;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)synchronizedDataForCaptureOutput:(id)arg1;
- (void)dealloc;

@end

