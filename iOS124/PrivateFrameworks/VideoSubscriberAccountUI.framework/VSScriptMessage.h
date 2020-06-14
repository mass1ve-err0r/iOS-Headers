//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, VSScriptSecurityOrigin;

__attribute__((visibility("hidden")))
@interface VSScriptMessage : NSObject
{
    NSString *_body;
    VSScriptSecurityOrigin *_source;
    VSScriptSecurityOrigin *_target;
}

@property(retain, nonatomic) VSScriptSecurityOrigin *target; // @synthesize target=_target;
@property(retain, nonatomic) VSScriptSecurityOrigin *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
- (void).cxx_destruct;
- (id)description;

@end

