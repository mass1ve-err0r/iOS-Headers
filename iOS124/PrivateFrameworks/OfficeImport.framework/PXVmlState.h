//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OAVReadState.h>

@class ESDObject, PBPresentationReaderState;

__attribute__((visibility("hidden")))
@interface PXVmlState : OAVReadState
{
    ESDObject *mLegacyTextGlobals;
    PBPresentationReaderState *mLegacyPresentationState;
}

- (void)setLegacyPresentationState:(id)arg1;
- (id)legacyPresentationState;
- (void)setLegacyTextGlobals:(id)arg1;
- (id)legacyTextGlobals;
- (void)dealloc;

@end

