//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPFileCoordinatorDelegate-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface TSPTemporaryFileCoordinatorDelegate : NSObject <TSPFileCoordinatorDelegate>
{
    NSURL *_URL;
}

@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)performReadUsingAccessor:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

