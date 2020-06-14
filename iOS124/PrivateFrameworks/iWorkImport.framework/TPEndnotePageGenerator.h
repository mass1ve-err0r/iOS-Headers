//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TPPageGenerator-Protocol.h>

@class NSString, TPFootnoteLayoutController;

__attribute__((visibility("hidden")))
@interface TPEndnotePageGenerator : NSObject <TPPageGenerator>
{
    TPFootnoteLayoutController *_footnoteLayoutController;
}

- (void).cxx_destruct;
- (void)createOrUpdatePageHintInSectionHint:(id)arg1 withState:(id)arg2;
- (_Bool)wantsPageInSectionHint:(id)arg1 withState:(id)arg2;
- (id)init;
- (id)initWithFootnoteLayoutController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

