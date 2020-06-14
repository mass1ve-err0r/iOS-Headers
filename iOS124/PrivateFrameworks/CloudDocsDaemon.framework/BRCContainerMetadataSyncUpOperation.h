//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCContainerMetadataSyncUpOperation : _BRCOperation <BRCOperationSubclass>
{
    _Bool _shouldPerformAnotherBatch;
}

@property(readonly, nonatomic) _Bool shouldPerformAnotherBatch; // @synthesize shouldPerformAnotherBatch=_shouldPerformAnotherBatch;
- (void)main;
- (_Bool)shouldRetryForError:(id)arg1;
- (void)performAfterSavingRecords:(CDUnknownBlockType)arg1;
- (id)createActivity;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

