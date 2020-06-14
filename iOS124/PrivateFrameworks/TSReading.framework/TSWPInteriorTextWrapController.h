//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSWPTextWrap-Protocol.h>

@interface TSWPInteriorTextWrapController : NSObject <TSWPTextWrap>
{
}

+ (id)sharedInteriorTextWrapController;
- (double)nextUnobstructedSpanStartingAt:(struct CGRect)arg1 wrappableAttachments:(id)arg2 userInfo:(id)arg3;
- (unsigned int)splitLine:(struct CGRect)arg1 lineSegmentRects:(struct CGRect [128])arg2 wrappableAttachments:(id)arg3 ignoreFloatingGraphics:(_Bool)arg4 floatingCausedWrap:(_Bool *)arg5 skipHint:(double *)arg6 userInfo:(id)arg7;
- (id)beginWrappingToColumn:(id)arg1 target:(id)arg2 hasWrapables:(_Bool *)arg3;

@end

