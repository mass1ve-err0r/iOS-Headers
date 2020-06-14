//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/OCDDelayedNodeContext-Protocol.h>

@class EBReaderSheetState, NSString;

__attribute__((visibility("hidden")))
@interface EBSheetContext : NSObject <OCDDelayedNodeContext>
{
    EBReaderSheetState *mSheetState;
    unsigned int mSheetIndex;
}

- (_Bool)loadDelayedNode:(id)arg1;
- (void)dealloc;
- (id)initWithSheetIndex:(unsigned int)arg1 state:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

