//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKEditCommand : NSObject
{
    struct RefPtr<WebKit::WebEditCommandProxy, WTF::DumbPtrTraits<WebKit::WebEditCommandProxy>> _command;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct WebEditCommandProxy *)command;
- (id)initWithWebEditCommandProxy:(Ref_eaa5e81d *)arg1;

@end

