/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRouteInfo : NSObject {
    VKRouteEtaDescription * _etaDescription;
    bool  _hasFocus;
    GEOComposedRoute * _route;
}

@property (nonatomic, retain) VKRouteEtaDescription *etaDescription;
@property (nonatomic) bool hasFocus;
@property (nonatomic, readonly) bool hasRouteEta;
@property (nonatomic, readonly) GEOComposedRoute *route;

- (void)dealloc;
- (id)etaDescription;
- (bool)hasFocus;
- (bool)hasRouteEta;
- (id)initWithComposedRoute:(id)arg1 etaDescription:(id)arg2;
- (id)initWithComposedRoute:(id)arg1 etaText:(id)arg2;
- (id)route;
- (void)setEtaDescription:(id)arg1;
- (void)setHasFocus:(bool)arg1;

@end
