//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class TSDRep, TSWPHyperlinkField, TSWPSmartField;

@protocol TSWPHyperlinkHostRepProtocol <NSObject>
- (TSDRep *)hyperlinkContainerRep;
- (void)willDisplayEditHyperlinkUIForHyperlinkField:(TSWPHyperlinkField *)arg1 beginEditing:(_Bool)arg2;
- (struct CGRect)naturalBoundsRectForHyperlinkField:(TSWPHyperlinkField *)arg1;
- (void)setHighlightedHyperlinkField:(TSWPHyperlinkField *)arg1;
- (TSWPSmartField *)smartFieldAtPoint:(struct CGPoint)arg1;

@optional
- (_Bool)shouldDismissHyperlinkUIOnApplicationEnterBackground;
- (_Bool)shouldUseHyperlinkHighlight;
- (void)didDismissEditHyperlinkUIForHyperlinkField:(TSWPHyperlinkField *)arg1;
- (TSWPHyperlinkField *)hyperlinkFieldForEditingHyperlinkField:(TSWPHyperlinkField *)arg1;
@end

