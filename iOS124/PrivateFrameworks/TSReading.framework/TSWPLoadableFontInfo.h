//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TSWPLoadableFontInfo : NSObject
{
    NSString *_groupUID;
    NSString *_fontPath;
    NSString *_fontName;
    NSString *_fontFamily;
    struct CGFont *_cgFont;
    unsigned char _attemptedLoad;
    _Bool _obfuscated;
}

@property(nonatomic) _Bool obfuscated; // @synthesize obfuscated=_obfuscated;
@property(nonatomic) struct CGFont *cgFont; // @synthesize cgFont=_cgFont;
@property(copy, nonatomic) NSString *fontFamily; // @synthesize fontFamily=_fontFamily;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(copy, nonatomic) NSString *fontPath; // @synthesize fontPath=_fontPath;
@property(copy, nonatomic) NSString *groupUID; // @synthesize groupUID=_groupUID;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;

@end

