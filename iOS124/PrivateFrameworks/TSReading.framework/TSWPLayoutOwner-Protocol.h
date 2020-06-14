//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class TSDLayout, TSUColor, TSWPLayoutManager, TSWPLineHintCollection;
@protocol TSWPLayoutTarget, TSWPStyleProvider, TSWPTextWrap;

@protocol TSWPLayoutOwner <NSObject>
- (TSWPLineHintCollection *)lineHintsForTarget:(TSDLayout<TSWPLayoutTarget> *)arg1;
- (id <TSWPTextWrap>)textWrapper;
- (void)layoutManager:(TSWPLayoutManager *)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3;
- (void)layoutManagerNeedsLayout:(TSWPLayoutManager *)arg1;
- (_Bool)caresAboutStorageChanges;

@optional
- (_Bool)shouldAllowFinishingPartionedAttachmentLayout;
- (TSUColor *)textColorOverride;
- (_Bool)invalidateOnExactTextRangeLayout;
- (_Bool)forceWesternLineBreaking;
- (id <TSWPStyleProvider>)styleProvider;
@end

