//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICJSSignConfiguration;

@interface ICJSSign : NSObject
{
    ICJSSignConfiguration *_configuration;
}

- (void).cxx_destruct;
- (id)signatureStringWithURLRequest:(id)arg1;
- (id)signatureDataWithURLRequest:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

@end

