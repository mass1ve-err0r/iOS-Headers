//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVImageScaleDecorator.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _TVImage16x9Decorator : TVImageScaleDecorator
{
    NSString *_inlineTitle;
}

@property(copy, nonatomic) NSString *inlineTitle; // @synthesize inlineTitle=_inlineTitle;
- (void).cxx_destruct;
- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize)arg2 croppedToFit:(_Bool)arg3;
- (id)decoratorIdentifier;
- (id)initWithInlineTitle:(id)arg1;

@end

