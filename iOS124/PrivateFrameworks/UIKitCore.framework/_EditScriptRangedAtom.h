//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _EditScriptRangedAtom : NSObject
{
    NSString *_replacementText;
    struct _NSRange _editRange;
}

+ (id)atomWithEditRange:(struct _NSRange)arg1 replacementText:(id)arg2;
@property(retain, nonatomic) NSString *replacementText; // @synthesize replacementText=_replacementText;
@property(nonatomic) struct _NSRange editRange; // @synthesize editRange=_editRange;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEditRange:(struct _NSRange)arg1 replacementText:(id)arg2;

@end

