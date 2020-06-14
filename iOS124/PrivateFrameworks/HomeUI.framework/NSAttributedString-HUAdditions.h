//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (HUAdditions)
+ (id)hu_attributedLinkStringForString:(id)arg1 linkString:(id)arg2 linkURL:(id)arg3 attributes:(id)arg4;
+ (id)hu_attributedLinkStringForString:(id)arg1 linkString:(id)arg2 linkURL:(id)arg3;
+ (id)hu_attributedString:(id)arg1 withAppendedLinkString:(id)arg2 linkURL:(id)arg3;
+ (id)hu_attributedStringForString:(id)arg1 withAppendedString:(id)arg2 asURL:(id)arg3 withAttributes:(id)arg4;
- (id)hu_attributedStringWithDefaultAttributes:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)hu_attributedStringWithDefaultAttributes:(id)arg1;
- (id)hu_scaledAttributedStringWithBoundingSize:(struct CGSize)arg1 minimumScaleFactor:(double)arg2 maximumNumberOfLines:(unsigned long long)arg3;
- (id)hu_attributedStringScaledByFactor:(double)arg1;
- (double)hu_scaleFactorForBoundingSize:(struct CGSize)arg1 minimumScaleFactor:(double)arg2 maximumNumberOfLines:(unsigned long long)arg3;
@end

