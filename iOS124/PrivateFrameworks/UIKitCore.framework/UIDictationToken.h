//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIDictationToken : NSObject <NSSecureCoding>
{
    _Bool _removeSpaceBefore;
    _Bool _removeSpaceAfter;
    NSString *_text;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool removeSpaceAfter; // @synthesize removeSpaceAfter=_removeSpaceAfter;
@property(nonatomic) _Bool removeSpaceBefore; // @synthesize removeSpaceBefore=_removeSpaceBefore;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)_descriptionExtra;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 removeSpaceBefore:(_Bool)arg2 removeSpaceAfter:(_Bool)arg3;

@end

