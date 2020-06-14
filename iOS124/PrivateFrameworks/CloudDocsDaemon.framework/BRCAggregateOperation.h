//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRCAggregateOperation : _BRCFrameworkOperation <BRCOperationSubclass>
{
    NSArray *_subOperations;
    NSMutableDictionary *_resultDictionary;
    CDUnknownBlockType _wrapperOperationCompletionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType wrapperOperationCompletionHandler; // @synthesize wrapperOperationCompletionHandler=_wrapperOperationCompletionHandler;
- (void).cxx_destruct;
- (_Bool)shouldRetryForError:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (id)initWithSyncContext:(id)arg1 subOperations:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

