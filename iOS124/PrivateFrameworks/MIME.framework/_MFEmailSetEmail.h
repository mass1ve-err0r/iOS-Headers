//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _MFEmailSetEmail : NSObject
{
    unsigned long long _hash;
    NSString *_encodedAddress;
    NSString *_comment;
}

@property(readonly, nonatomic) NSString *commentedAddress;
@property(retain, nonatomic) NSString *address;
- (_Bool)isEqualToEmail:(id)arg1;
@property(readonly, nonatomic) unsigned long long hash;
- (id)description;
- (void)dealloc;
- (id)initWithAddress:(id)arg1;

@end

