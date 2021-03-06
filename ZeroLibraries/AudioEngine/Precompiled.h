///////////////////////////////////////////////////////////////////////////////
///
/// Author: Andrea Ellinger
/// Copyright 2017, DigiPen Institute of Technology
///
///////////////////////////////////////////////////////////////////////////////

#pragma once

#ifndef Precompiled_H
#define Precompiled_H

#include "Common/CommonStandard.hpp"
#include "Math/MathStandard.hpp"
#include "Platform/PlatformStandard.hpp"

#include "Definitions.h"
#include "LockFreeQueue.hpp"
#include "RingBuffer.h"
#include "Interpolator.h"
#include "Resampler.h"
#include "PitchChange.h"
#include "SoundNode.h"
#include "FilterNodes.h"
#include "Filters.h"
#include "ListenerNode.h"
#include "RecordNode.h"
#include "VolumeNodes.h"
#include "PitchNode.h"
#include "EqualizerNode.h"
#include "ReverbNodes.h"
#include "AdditiveSynthNode.h"
#include "GranularSynthNode.h"
#include "DynamicsProcessorNode.h"
#include "VBAP.h"
#include "Emitter.h"
#include "Attenuator.h"
#include "MicrophoneInputNode.h"
#include "CustomDataNode.h"
#include "FileEncoder.h"
#include "FileDecoder.h"
#include "SoundAssets.h"
#include "SoundInstances.h"
#include "Tags.h"

#include "AudioInputOutput.h"
#ifdef _MSC_VER
#include "WASAPI.h"
#endif

#include "MIDI.h"
#include "Modifiers.h"
#include "AudioSystemInterface.h"
#include "AudioSystemInternal.h"

#endif 