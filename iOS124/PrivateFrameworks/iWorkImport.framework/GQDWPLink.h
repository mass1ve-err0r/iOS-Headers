//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/GQDWPInlineList.h>

@class GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQDWPLink : GQDWPInlineList
{
    GQDSStyle *mCharStyle;
    struct __CFString *mHref;
}

- (struct __CFString *)href;
- (id)characterStyle;
- (void)dealloc;
- (int)readStyleFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;

@end

