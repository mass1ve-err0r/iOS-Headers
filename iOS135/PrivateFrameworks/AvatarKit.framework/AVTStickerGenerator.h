/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTStickerGenerator : NSObject <SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI> {
    NSArray * _appliedShaderModifiers;
    bool  _async;
    AVTAvatar * _avatar;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    AVTAvatarEnvironment * _environment;
    NSArray * _overridenMorphers;
    NSArray * _overridenPresets;
    AVTStickerConfiguration * _previousConfiguration;
    SCNRenderer * _renderer;
    SCNScene * _scene;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSArray *appliedShaderModifiers;
@property (nonatomic) bool async;
@property (nonatomic, retain) AVTAvatar *avatar;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AVTAvatarEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *overridenMorphers;
@property (nonatomic, retain) NSArray *overridenPresets;
@property (nonatomic, retain) AVTStickerConfiguration *previousConfiguration;
@property (nonatomic, retain) SCNRenderer *renderer;
@property (nonatomic, retain) SCNScene *scene;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)addCamera:(id)arg1 inScene:(id)arg2;
+ (void)addProps:(id)arg1 toScene:(id)arg2 forAvatar:(id)arg3 withCamera:(id)arg4 forExport:(bool)arg5 async:(bool)arg6 workQueue:(id)arg7 callbackQueue:(id)arg8 completion:(id /* block */)arg9;
+ (void)applyConfiguration:(id)arg1 toScene:(id)arg2 withAvatar:(id)arg3 defaultCamera:(id)arg4 forExport:(bool)arg5 async:(bool)arg6 workQueue:(id)arg7 callbackQueue:(id)arg8 completion:(id /* block */)arg9;
+ (void)applyConfiguration:(id)arg1 toScene:(id)arg2 withAvatar:(id)arg3 defaultCamera:(id)arg4 forExport:(bool)arg5 completion:(id /* block */)arg6 async:(bool)arg7;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingRectForBaseSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)createPropsParentNodeIfNeededInScene:(id)arg1;
+ (id)findNodesNamed:(id)arg1 inAvatar:(id)arg2;
+ (void)removeConfiguration:(id)arg1 fromScene:(id)arg2 withAvatar:(id)arg3;
+ (void)removeConfiguration:(id)arg1 fromScene:(id)arg2 withAvatar:(id)arg3 appliedShaderModifier:(id)arg4;

- (void).cxx_destruct;
- (void)_renderer:(id)arg1 didBuildSubdivDataForHash:(id)arg2 dataProvider:(id /* block */)arg3;
- (id)_renderer:(id)arg1 subdivDataForHash:(id)arg2;
- (id)appliedShaderModifiers;
- (bool)async;
- (id)avatar;
- (id)callbackQueue;
- (void)clearPreviousConfigurationBeforeNewConfiguration:(id)arg1;
- (id)environment;
- (id)initWithAvatar:(id)arg1;
- (id)overridenMorphers;
- (id)overridenPresets;
- (id)previousConfiguration;
- (id)renderer;
- (void)renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2;
- (void)rendererWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)scene;
- (void)setAppliedShaderModifiers:(id)arg1;
- (void)setAsync:(bool)arg1;
- (void)setAvatar:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setOverridenMorphers:(id)arg1;
- (void)setOverridenPresets:(id)arg1;
- (void)setPreviousConfiguration:(id)arg1;
- (void)setRenderer:(id)arg1;
- (void)setScene:(id)arg1;
- (void)setupAvatar:(id)arg1;
- (void)setupRendererWithAvatar:(id)arg1;
- (id)snapshotAtTime:(double)arg1 withRenderer:(id)arg2 configuration:(id)arg3 correctClipping:(bool)arg4;
- (void)stickerImageWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stickerImageWithConfiguration:(id)arg1 correctClipping:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)workQueue;

@end