//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKViewElement.h>

@class VSMessagePortFeature;

__attribute__((visibility("hidden")))
@interface VSWebAuthenticationTemplateElement : IKViewElement
{
    VSMessagePortFeature *_messagePort;
}

+ (id)supportedFeatures;
@property(readonly, nonatomic) VSMessagePortFeature *messagePort; // @synthesize messagePort=_messagePort;
- (void).cxx_destruct;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

