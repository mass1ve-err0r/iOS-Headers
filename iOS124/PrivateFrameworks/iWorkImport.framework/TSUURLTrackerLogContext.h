//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSULogContext-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSUURLTrackerLogContext : NSObject <TSULogContext>
{
    NSString *_publicString;
}

- (void).cxx_destruct;
@property(readonly) NSString *privateString;
@property(readonly) NSString *publicString;
- (id)initWithURLTracker:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

