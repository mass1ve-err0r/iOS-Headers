//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_io, OS_dispatch_queue;

@interface SGDHarvestQueueFileReader : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_io> *_io;
    int _fileId;
}

@property(readonly, nonatomic) int fileId; // @synthesize fileId=_fileId;
- (void).cxx_destruct;
- (void)read:(CDStruct_beb4cc23)arg1 callback:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithDirectory:(id)arg1 fileId:(int)arg2 tryLater:(_Bool *)arg3;

@end

