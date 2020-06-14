//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MSVSystemDialogTextField : NSObject
{
    _Bool _secure;
    NSString *_title;
    long long _keyboardType;
}

+ (id)textFieldWithTitle:(id)arg1 secure:(_Bool)arg2;
+ (id)textFieldWithTitle:(id)arg1;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic, getter=isSecure) _Bool secure; // @synthesize secure=_secure;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1;

@end

