//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SFMessageSessionRequestEntry : NSObject
{
    _Bool _allowUnencrypted;
    CDUnknownBlockType _handler;
    NSDictionary *_options;
}

@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) _Bool allowUnencrypted; // @synthesize allowUnencrypted=_allowUnencrypted;
- (void).cxx_destruct;

@end

