//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIKBRenderFactoryiPad.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryiPadFudge : UIKBRenderFactoryiPad
{
}

- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (double)_row4ControlSegmentWidthRight;
- (double)_row4ControlSegmentWidthLeft;
- (void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (id)displayContentsForKey:(id)arg1;
- (unsigned long long)_isFullHeightKeyFor:(id)arg1 onKeyplane:(id)arg2;
- (id)lightKeycapsFontName;
- (_Bool)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2;
- (struct CGPoint)dualStringKeyBottomTextOffset:(id)arg1 keyplane:(id)arg2;
- (struct CGPoint)dualStringKeyTopTextOffset:(id)arg1 keyplane:(id)arg2;
- (id)messagesWriteboardKeyImageName;
- (id)returnKeyImageName;
- (id)tabKeyImageName;
- (id)capslockKeyImageName;
- (id)shiftLockImageName;
- (id)shiftOnKeyImageName;
- (id)shiftKeyImageName;
- (id)deleteOnKeyImageName;
- (id)deleteKeyImageName;
- (id)dismissKeyImageName;
- (id)dictationKeyImageName;
- (id)globalEmojiKeyImageName;
- (id)globalKeyImageName;
- (_Bool)iPadFudgeLayout;
- (struct CGSize)defaultVariantGeometrySize;
- (struct CGPoint)dualStringKeyTopTextOffset:(unsigned long long)arg1;
- (double)dualStringKeyTopFontSize:(unsigned long long)arg1;
- (struct CGPoint)dualStringKeyBottomTextOffset:(unsigned long long)arg1;
- (double)dualStringKeyBottomFontSize:(unsigned long long)arg1;
- (struct CGPoint)dismissKeyOffset;
- (struct CGPoint)dictationKeyOffset;
- (struct CGPoint)moreKeyOffset;
- (struct CGPoint)internationalKeyOffset;
- (struct CGPoint)deleteKeyOffset:(unsigned long long)arg1;
- (struct CGPoint)iPadFudgeControlKeyOffset;
- (double)controlKeyFontSize;
- (double)deleteKeyFontSize;
- (double)moreKeyFontSize;
- (double)spaceKeyFontSize;
- (struct CGPoint)stringKeyOffset:(unsigned long long)arg1;
- (double)stringKeyFontSize:(unsigned long long)arg1;

@end

