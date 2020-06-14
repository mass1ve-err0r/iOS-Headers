//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TISCTextRunRequest : NSObject
{
    NSArray *_strings;
    struct CGColor *_color;
    double _maxFontSize;
    double _minFontSize;
    _Bool _allowTruncation;
    NSString *_truncationSentinel;
    unsigned long long _widthGroup;
}

+ (id)textRunRequestWithStrings:(id)arg1 color:(struct CGColor *)arg2 maxFontSize:(double)arg3 minFontSize:(double)arg4 allowTruncation:(_Bool)arg5 truncationSentinel:(id)arg6 widthGroup:(unsigned long long)arg7;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)widthGroup;
- (id)truncationSentinel;
- (_Bool)allowTruncation;
- (double)minFontSize;
- (double)maxFontSize;
- (struct CGColor *)color;
- (id)strings;

@end

