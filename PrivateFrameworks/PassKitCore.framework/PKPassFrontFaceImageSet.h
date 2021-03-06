/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassFrontFaceImageSet : PKPassImageSet {
    PKImage * _backgroundParallaxEmitterImage;
    PKImage * _backgroundParallaxImage;
    PKImage * _dynamicLayerStaticFallbackImage;
    PKImage * _faceImage;
    PKImage * _faceShadowImage;
    PKImage * _footerImage;
    PKImage * _foregroundParallaxEmitterImage;
    PKImage * _foregroundParallaxImage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _logoRect;
    PKImage * _neutralEmitterImage;
    PKImage * _neutralImage;
    PKImage * _staticOverlayEmitterImage;
    PKImage * _staticOverlayImage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _stripRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _thumbnailRect;
    PKImage * _transactionEffectEmitterImage;
    NSData * _transactionEffectEmitterShapeSVGData;
}

@property (nonatomic, retain) PKImage *backgroundParallaxEmitterImage;
@property (nonatomic, retain) PKImage *backgroundParallaxImage;
@property (nonatomic, retain) PKImage *dynamicLayerStaticFallbackImage;
@property (nonatomic, retain) PKImage *faceImage;
@property (nonatomic, retain) PKImage *faceShadowImage;
@property (nonatomic, retain) PKImage *footerImage;
@property (nonatomic, retain) PKImage *foregroundParallaxEmitterImage;
@property (nonatomic, retain) PKImage *foregroundParallaxImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } logoRect;
@property (nonatomic, retain) PKImage *neutralEmitterImage;
@property (nonatomic, retain) PKImage *neutralImage;
@property (nonatomic, retain) PKImage *staticOverlayEmitterImage;
@property (nonatomic, retain) PKImage *staticOverlayImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } stripRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } thumbnailRect;
@property (nonatomic, retain) PKImage *transactionEffectEmitterImage;
@property (nonatomic, retain) NSData *transactionEffectEmitterShapeSVGData;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)archiveName;
+ (unsigned int)currentVersion;
+ (long long)imageSetType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundParallaxEmitterImage;
- (id)backgroundParallaxImage;
- (id)dynamicLayerStaticFallbackImage;
- (void)encodeWithCoder:(id)arg1;
- (id)faceImage;
- (id)faceShadowImage;
- (id)footerImage;
- (id)foregroundParallaxEmitterImage;
- (id)foregroundParallaxImage;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;
- (bool)isEqual:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })logoRect;
- (id)neutralEmitterImage;
- (id)neutralImage;
- (void)preheatImages;
- (void)setBackgroundParallaxEmitterImage:(id)arg1;
- (void)setBackgroundParallaxImage:(id)arg1;
- (void)setDynamicLayerStaticFallbackImage:(id)arg1;
- (void)setFaceImage:(id)arg1;
- (void)setFaceShadowImage:(id)arg1;
- (void)setFooterImage:(id)arg1;
- (void)setForegroundParallaxEmitterImage:(id)arg1;
- (void)setForegroundParallaxImage:(id)arg1;
- (void)setLogoRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeutralEmitterImage:(id)arg1;
- (void)setNeutralImage:(id)arg1;
- (void)setStaticOverlayEmitterImage:(id)arg1;
- (void)setStaticOverlayImage:(id)arg1;
- (void)setStripRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setThumbnailRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTransactionEffectEmitterImage:(id)arg1;
- (void)setTransactionEffectEmitterShapeSVGData:(id)arg1;
- (id)staticOverlayEmitterImage;
- (id)staticOverlayImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })stripRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbnailRect;
- (id)transactionEffectEmitterImage;
- (id)transactionEffectEmitterShapeSVGData;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (void)memoryMapImageData;

@end
