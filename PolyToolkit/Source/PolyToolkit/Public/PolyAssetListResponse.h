// Copyright 2017 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include "CoreMinimal.h"
#include "PolyAssetList.h"

#include "PolyAssetListResponse.generated.h"

/**
 * Response returned by ListAssets callback.
 */
USTRUCT(BlueprintType, Blueprintable)
struct FPolyAssetListResponse
{
	GENERATED_USTRUCT_BODY()

	/** True if the response contains a valid PolyAssetList.  */
	UPROPERTY(BlueprintReadWrite)
	bool Success;

	/** Contains the error message if the response is not successful. */
	UPROPERTY(BlueprintReadWrite)
	FString ErrorMessage;

	/** Contains a valid PolyAssetList if the response is successful. */
	UPROPERTY(BlueprintReadWrite)
	FPolyAssetList PolyAssetList;
};

