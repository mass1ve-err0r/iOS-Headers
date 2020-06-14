//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUFontRegistration-Protocol.h>

@class NSCountedSet, NSString;
@protocol OS_dispatch_queue;

@interface NUFontManager : NSObject <NUFontRegistration>
{
    NSObject<OS_dispatch_queue> *_registrationQueue;
    NSCountedSet *_referenceCounts;
}

@property(readonly, nonatomic) NSCountedSet *referenceCounts; // @synthesize referenceCounts=_referenceCounts;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *registrationQueue; // @synthesize registrationQueue=_registrationQueue;
- (void).cxx_destruct;
- (_Bool)shouldUnregisterFontWithURL:(id)arg1;
- (unsigned long long)referenceCountForFontWithURL:(id)arg1;
- (void)decreaseReferenceCountForFontWithURL:(id)arg1;
- (void)increaseReferenceCountForFontWithURL:(id)arg1;
- (_Bool)unregisterFontAtURL:(id)arg1 error:(id *)arg2;
- (void)unregisterFontWithURL:(id)arg1;
- (_Bool)registerFontWithURL:(id)arg1 error:(id *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

